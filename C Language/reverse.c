#include<stdio.h>
void main()
{
	int a,rem,rev=0;
	printf("Enter your no.");
	scanf("%d",&a);
	while(a!=0)//568
	{
		rem=a%10;//8
		rev=rev*10+rem;
		a=a/10;//56
	}
	printf("%d is reverse of your no.",rev);
}
