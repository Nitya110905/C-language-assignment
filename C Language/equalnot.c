#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter your first no.");
	scanf("%d",&a);
	printf("Enter your second no.");
	scanf("%d",&b);
	if (a==b)
	{
		printf("No.s are equal");
	}
	else if (a!=b)
	{
		printf("No.s are not equal");
	}
	else
	{
		printf("Enter no. properly");
	}
}
