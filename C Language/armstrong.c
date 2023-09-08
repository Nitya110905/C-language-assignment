#include<stdio.h>
void main()
{
	int a,rem,rev=0,arm;
	printf("Enter your no.");
	scanf("%d",&a);
	int ori=a;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+a;
		a=a/10;
	}
	if(arm==ori)
	{
		printf("No. is armstrong");
	}
	else
	{
		printf("No. is not armstrong");
	}
}
