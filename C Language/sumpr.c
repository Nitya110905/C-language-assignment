#include<stdio.h>
void main()
{
	int a,b,c,sum,pr,total=300;
	printf("Enter your three marks");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	printf("Your total is %d",sum);
	pr=sum*100/total;
	printf("Your pr is %d",pr);
    if (pr>80)
	{
		printf("You receive an A+");
	}
	else if (pr>70)
	{
		printf("You receive an A");
	}
	else if (pr>60)
	{
		printf("You receive a B");
	}
	else if (pr>=35)
	{
		printf("You have passed");
	}
	else if (pr<35 && pr==0)
	{
		printf("You have failed");
	}
	else
	{
		printf("INVALID");
	}
	
}
