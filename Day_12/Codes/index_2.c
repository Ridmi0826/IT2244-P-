####variables
int age; // store integer values
age = 25;
int age = 25;
#include<stdio.h>
int main(){
   int age=25;
   printf("%d\n",age);

}

[2021ict115@fedora ~]$ gcc index_1.c -o index_1
[2021ict115@fedora ~]$ ./index_1
25

//assign new value for a same variable
#include<stdio.h>
int main(){
    int age =25;
	printf("%d\n",age);
	
	
	printf("c programming");
	
	
	age=31;
	printf("\nNew age:%d\n",age);
	return 0;
}

[2021ict115@fedora ~]$ vi index_2.c
[2021ict115@fedora ~]$ gcc index_2.c -o index_2
[2021ict115@fedora ~]$ ./index_2
25
c programming
New age:31
