#include<stdio.h>
#include<unistd.h>

int main(){
	
	int f=fork();
	
	 if(f==0){
		 printf("I am child\n");
	}
	 else{
	printf("\nI am the parent!\n");
	}
	printf("\nHello world!\n");
	
	return 0;
}

[2021ict115@fedora ~]$ vi t3.c
[2021ict115@fedora ~]$ gcc t3.c -o t3
[2021ict115@fedora ~]$ ./t3

I am the parent!

Hello world!
I am child

Hello world!
