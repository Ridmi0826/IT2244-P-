#include<stdio.h>
#include<unistd.h>

int main(){
	
    fork();
	printf("\nI am parent!\n");
	
	
	 
	
	return 0;
}

[2021ict115@fedora ~]$ vi frk1.c
[2021ict115@fedora ~]$ gcc frk1.c -o frk1
[2021ict115@fedora ~]$ ./frk1

I am parent!

I am parent!


////

#include<stdio.h>
#include<unistd.h>

int main(){
	fork();
    fork();
	printf("\nI am parent!\n");
	
	
	 
	
	return 0;
}

[2021ict115@fedora ~]$ vi frk.c
[2021ict115@fedora ~]$ gcc frk.c -o frk
[2021ict115@fedora ~]$ ./frk

I am parent!

I am parent!


I am parent!
I am parent!
