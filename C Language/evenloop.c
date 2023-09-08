#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter your no.");
	scanf("%d",&b);
	for(a=1;a<b;a++)
	{
		if(a%2==0)
		{
			printf("%d\n",&a);
		}
	}
}
