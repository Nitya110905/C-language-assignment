#include<stdio.h>
void main()
{
	int a,lastdigit,firstdigit,sum=0;
	printf("Enter your no.");
	scanf("%d",&a);
	printf("No. is %d",a);
	lastdigit=a%10;
	while(a>=10)
	{
		a=a/10;
	}
	firstdigit=a;
	sum=firstdigit+lastdigit;
	printf("%d is sum of %d and %d",sum,firstdigit,lastdigit);
}
