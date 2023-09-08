#include<stdio.h>
void main()
{
	int a,b,c=0;
	printf("Enter your no.");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		if(b%a==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("No. is prime");
	}
	else{
		printf("No. is composite");
	}
}
