#include<stdio.h>
void odd_even();
int main()
{
	odd_even();
	return 0;
}
void odd_even()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
}