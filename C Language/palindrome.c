#include<stdio.h>
void main()
{
	int a,rem,rev=0,ori;
	printf("Enter your no.");
	scanf("%d",&a);
	 ori=a;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	printf("%d is your reverse\n",rev);
	if(rev==ori)
	{
		printf("No. is palindrome");
	}
	else
	{
		printf("No. is not palindrome");
	}
	
}
