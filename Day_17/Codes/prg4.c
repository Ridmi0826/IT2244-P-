/*Exercise02:
First child: slept for 2 seconds,exit with status 2.
Second child: Slept for 1 seconds,exits with status 1.
Parent:waits twice, and prints which child(by PID or exit code)
finished first and second.*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
    pid_t pid1, pid2;
    int status1, status2;

    // First child process
    pid1 = fork();
    if (pid1 == 0) {
        // First child sleeps for 2 seconds
        sleep(2);
        printf("First child (PID: %d) finished\n", getpid());
        exit(2); // Exits with status 2
    }

    // Second child process
    pid2 = fork();
    if (pid2 == 0) {
        // Second child sleeps for 1 second
        sleep(1);
        printf("Second child (PID: %d) finished\n", getpid());
        exit(1); // Exits with status 1
    }

    // Parent process waits for both child processes
    // Wait for the first child
    pid_t finished_pid1 = waitpid(pid1, &status1, 0);
    if (finished_pid1 > 0) {
        printf("Parent: Child with PID %d finished first with exit status %d\n", finished_pid1, WEXITSTATUS(status1));
    }

    // Wait for the second child
    pid_t finished_pid2 = waitpid(pid2, &status2, 0);
    if (finished_pid2 > 0) {
        printf("Parent: Child with PID %d finished second with exit status %d\n", finished_pid2, WEXITSTATUS(status2));
    }

    return 0;
}
