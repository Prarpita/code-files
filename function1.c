#include<stdio.h>
void year();
int main()
{
	year();
	return 0;
}
void year()
{
	int year;
	printf("enter the year:\t");
	scanf("%d",&year);
	if((year%4==0) && (year%100!=0) || (year%400==0))
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}
}