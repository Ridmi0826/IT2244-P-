#include<stdio.h>
#include<unistd.h>

int main(){
	
	int b=fork();
	 
	 if(b==0){
		 printf("\nI am child B\n");
		 
	}
	
	else 
	{
		 
    int c=fork();
	if(c==0)
	{
		printf("\nI am child c\n");
	}
	else
	{
	 printf("\nI am parent A\n");
	}
	}
	return 0;
}

[2021ict115@fedora ~]$ vi t4.c
[2021ict115@fedora ~]$ gcc t4.c -o t4
[2021ict115@fedora ~]$ ./t4

I am parent A

I am child B

I am child c


//

#include<stdio.h>
#include<unistd.h>

int main(){
	
	int p=getpid();
	int b=fork();
	 
	 if(b==0){
		 printf("\nI am child B\n");
		 printf("My parent id %d\n",getppid());
	}
	
	else 
	{
		 
    int c=fork();
	if(c==0)
	{
		printf("\nI am  sibling c\n");
		printf("My parent id %d\n",getppid());
	}
	else
	{
	 printf("\nI am parent A\n");
	 printf("My id %d\n",getpid());
	 printf("My parent id %d\n",getppid());
	}
	}
	
	return 0;
}