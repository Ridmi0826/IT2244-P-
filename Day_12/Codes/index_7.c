#include<stdio.h>
int main(){
	double number;
	char alpha;
	printf("Enter double input:");
	scanf("%lf",&number);
	
	printf("\nYour number is:%lf\n",number);
	printf("Enter character:");
	scanf(" %c",&alpha);
	printf("\nYour character is: %c\n",alpha);
	
	
	
	return 0;
	
}