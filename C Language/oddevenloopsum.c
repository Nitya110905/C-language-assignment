#include<stdio.h>
void main()
{
	int a,b,sum=0;
	printf("Enter your endpoint");
	scanf("%d",&b);
	for(a=1;a<b;a++)
	{
		if(a%2==0)
		{
			sum=sum+a;
		}
		
	}
	printf("Your sum is %d",sum);
	
}
