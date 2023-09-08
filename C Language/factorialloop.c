#include<stdio.h>
void main()
{
	int a,b,fact=1;
	printf("Enter the required no.");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		fact=fact*a;
	}
	printf("Factorial is %d",fact);
}
