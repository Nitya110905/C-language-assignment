#include<stdio.h>
void main()
{
	int a;
	printf("Enter your no.");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("No. %d is even",a);
	}
	else
	{
		printf("No. %d is odd",a);
	}
}
