#include<stdio.h>
void main()
{
	int a,b;
	for(a=5;a>=0;a--)
	{
		for(b=5;b>=a;b--)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
