#include<stdio.h>
void main()
{
	int a,b;
	for(a=5;a>=1;a--)//a=5 5>=0 
	{
		for(b=1;b<=a;b++)//
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
