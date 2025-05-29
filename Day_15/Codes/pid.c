#include<stdio.h>
#include<unistd.h>

int main(){
	printf("\nHello world!\n");
	int f=fork();
	int p=getpid();
	printf("\n the pid is %d\n", p);
	printf("\n the pid is %d\n", f);
	
	return 0;
}

[2021ict115@fedora ~]$ vi pid.c
[2021ict115@fedora ~]$ gcc pid.c -o pid
[2021ict115@fedora ~]$ ./pid

Hello world!

 the pid is 15664

 the pid is 15665

 the pid is 15665

 the pid is 0

