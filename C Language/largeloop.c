#include<stdio.h>
void main()
{
	int a,b,rem,large=0;
	printf("Enter your endpoint");
	scanf("%d",&b);
	int ori=a;
	while(a>0)
	{
		if(rem>large)
		{
			large=rem;
		}
		a=a/10;
	}
	printf("%d is largest from %d",large,ori);
}
