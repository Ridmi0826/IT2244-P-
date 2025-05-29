//First child: slept for 1 second.
//Second child: Slept for 3 seconds.
//Parent:Both children have finished.

#include<stdio.h>
#include<stdlib.h> // for exit()
#include<unistd.h> // for sleep()
#include<sys/wait.h> // for wait()

int main(){
	
	int p=getpid();
	int b=fork();
	
	if(b< 0){
		perror("fork failed");
		exit(1);
	}
	 
	 if(b==0){
		 
	printf("Child process.PID: %d,sleeping for 1 seconds....\n");
	sleep(1);
	printf("Child process exiting.\n");
	exit(0);
	}
	
	int c = fork();  // Second fork (second child)

    if (c < 0) {
        perror("fork failed");
        exit(1);
    }
	
	if(c==0)
	{
	printf("Child process.PID: %d,sleeping for 3 seconds....\n");
	sleep(3);
	printf("Child process exiting.\n");
	exit(0);
	}
	
	else
	{
		int status;
		printf("Parent waiting for child to finish...\n");
		waitpid(b, &status, 0);  //wait for child to finish
		if(WIFEXITED(status)){
			printf("First Child exited with status: %d\n",WEXITSTATUS(status));
			//WEXITSATUS(status) gets the actual exit code(0 here).
		}else{
			printf("First Child did not exit normally.\n");
		}
		 
	waitpid(c, &status, 0);  // Wait for the second child
    if (WIFEXITED(status)) {
        printf("Second child exited with status: %d\n", WEXITSTATUS(status));
    } else {
        printf("Second child did not exit normally.\n");
    }

    printf("Both children have finished.\n");
		
		
	}
	
	
	return 0;
}
/*
int main()
{
	pid_t pid1=fork();
	
	if(pid1 == 0){
		//first child
		sleep(1);
		printf("first child: slept fot 1 second.\n");
		return 0;
	}
	else{
		pid_t pid2=fork();
		if(pid2 == 0){
		//second child
		sleep(3);
		printf("second child: slept fot 3 second.\n");
		return 0;
	}
	
	//parent message
	wait(NULL);
	wait(NULL);
	printf("parent:both children have finished.\n");
}
return 0;
}*/