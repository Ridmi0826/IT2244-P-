#include<stdio.h>
#include<stdlib.h> // for exit()
#include<unistd.h> // for sleep()
#include<sys/wait.h> // for wait()

int main()
{
	pid_t pid;
	printf("Program started. PID: %d\n",getpid());
	
	pid = fork(); // create a new child process
	
	if(pid< 0){
		perror("fork failed");
		exit(1);
	}
	
	if (pid==0) {
		//child process
	printf("Child process.PID: %d,sleeping for 2 seconds....\n");
	sleep(2);
	printf("Child process exiting.\n");
	exit(0); //child exits with status 0
	}
	else{
		//Parent program
		int status;
		printf("Parent waiting for child to finish...\n");
		wait(&status); //wait for child to finish
		if(WIFEXITED(status)){
			printf("Child exited with status: %d\n",WEXITSTATUS(status));
			//WEXITSATUS(status) gets the actual exit code(0 here).
		}else{
			printf("Child did not exit normally.\n");
		}
		printf("Parent process ending.\n");
	 
	
}

return 0;
}