/*Exercise3:
the parent create a child process.
the child create a grandchild process.
the grand child sleeps 2 seconds and exit with status 2.
the child waits for the grandchild,prints its exit status,then exits with status 55 .*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
    pid_t pid_child, pid_grandchild;
    int status_grandchild;

    // Parent creates a child process
    pid_child = fork();
    
    if (pid_child == 0) {
        // Child process
        printf("Child (PID: %d) created\n", getpid());
        
        // Child creates a grandchild process
        pid_grandchild = fork();
        
        if (pid_grandchild == 0) {
            // Grandchild process
            printf("Grandchild (PID: %d) created\n", getpid());
            
            // Grandchild sleeps for 2 seconds and exits with status 2
            sleep(2);
            exit(2); // Exit status 2
        } else {
            // Child waits for the grandchild to finish
            waitpid(pid_grandchild, &status_grandchild, 0);
            // Print the exit status of the grandchild
            printf("Child (PID: %d) received grandchild's exit status: %d\n", getpid(), WEXITSTATUS(status_grandchild));
            
            // Child exits with status 55
            exit(55);
        }
    } else {
        // Parent process waits for the child to finish (not necessary for the task, but can be added for completeness)
        wait(NULL);
    }

    return 0;
}
