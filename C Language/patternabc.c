#include<stdio.h>
void main()
{
	int i,j,A;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	}
}
