
#include<stdio.h>
#include<unistd.h>

void factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("Factorial of %d is:  %d\n",n,fact);
}

void fibonacci(int n)
{
	int a= 0,b=1,next;
	printf("Fibonacci series up to %d\n ",n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a);
		next = a+b;
		a=b;
		b=next;
	}
	printf("\n");
}

void check_prime(int n){
	int flag=1;
	if(n<2) flag = 0;
	for(int i =2;i*i <=n;i++){
		if(n% i == 0)
		{
			flag=0;
			break;
		}
	}
	printf("%d is %sprime\n",n,flag ? "" : "not ");
}

int main(){
	int A,B,C;
	printf("Enter a non-negative integers: ");
	scanf("%d %d %d",&A,&B,&C);
	
	pid_t child1,child2;
	child1=fork();
	
	if(child1==0)
	{
		factorial(A);
	}
	else{
		child2=fork();
		if(child2==0)
		{
			pid_t childB,childC;
			childB=fork();
			if(childB==0)
			{
				fibonacci(B);
			}
			else{
				childC=fork();
				if(childC==0){
					check_prime(C);
				}
			}
		}
	}
	return 0;
}














































int number1,number2,number3;
unsigned long long factorial_recursive(int number1) {
    if (number1 == 0) {
        return 1;
    } else {
        return number1 * factorial_recursive(number1 - 1);
    }
}
int main(){
	int p=getpid();
	int a=fork();
	 
	 if(a==0)
	 {
		 printf("\nI am child B\n");
		 printf("My parent id %d\n",getppid());

		 if (number1 < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d (recursive) is: %llu\n", number1, factorial_recursive(number1));
    }
	
	 }
	else{
	
		int b=fork();
       if(b==0)
		  {
			first = 0, second = 1, next;

		if (number2 <= 0) {
			printf("Please enter a positive integer.\n");
			return 1;
		}

		printf("Fibonacci Series up to %d terms: \n", number2);

		if (number2 >= 1) {
			printf("%d ", first);
		}

		if (number2 >= 2) {
			printf("%d ", second);
		}

		for (int i = 3; i <= number2; i++) {
			next = first + second;
			printf("%d ", next);
			first = second;
			second = next;
		}

		printf("\n");

			  printf("\nI am  sibling c\n");
		printf("My parent id %d\n",getppid());

		  }
	   else
           {
			   printf("Enter a non-negative integer: ");
	           printf("Enter a non-negative integer: ");
	           printf("Enter a non-negative integer: ");
               scanf("%d", &number1);
               scanf("%d", &number2);
               scanf("%d", &number3);
	
	 printf("\nI am parent A\n");
	 printf("My id %d\n",getpid());
	 printf("My parent id %d\n",getppid());
	}
	}
    return 0;
	 }

	
	 


































 