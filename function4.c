#include<stdio.h>
void swap();
int main()
{
	swap();
	return 0;
}
void swap()
{
	int a,b,c;
	printf("enter the values for a and b:\t");
	scanf("%d%d",&a,&b);
	c=a+b;
	b=c-b;
	a=c-b;
	printf("swap  values a=%d and b=%d",a,b);
}