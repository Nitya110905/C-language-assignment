#include<stdio.h>
void main()
{
	int a,b;
	for(a=5;a>=0;a--)//a=5 5>=0 
	{
		for(b=0;b<=a;b++)//
		{
			printf("%d",a+1);
		}
		printf("\n");
	}
}
