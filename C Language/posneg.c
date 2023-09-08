#include<stdio.h>
void main()
{
	int a;
	printf("Enter your no.");
	scanf("%d",&a);
	if(a>0)
	{
		printf("No. is positive");
	}
	else if(a<0)
	{
		printf("No. is negative");
	}
	else if(a==0)
	{
		printf("No. is zero");
	}
	else
	{
		printf("INVALID");
	}
}
