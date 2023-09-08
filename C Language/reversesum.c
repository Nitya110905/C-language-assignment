#include<stdio.h>
void main()
{
	int a,rem,sum=0;
	printf("Enter your no.");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		a=a/10;
		sum=sum+rem;
	}
	printf("Your sum is %d",sum);
}
