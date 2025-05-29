#include<stdio.h>
int main(){
  int n1;
  printf("Enter your number1:");
  scanf("%d",&n1);
  
  int n2;
  printf("Enter your number2:");
  scanf("%d",&n2);
  
  int sum=n1+n2;
  printf("Summation: %d\n",sum);
  
  int sub=n1-n2;
  printf("Subsctraction: %d\n",sub);
  
  int mul=n1*n2;
  printf("Multipication: %d\n",mul);
  
  int div=n1/n2;
  printf("Division: %d\n",div);
  
  int mod=n1/n2;
  printf("Remainder: %d\n",mod);
  
  return 0;
}