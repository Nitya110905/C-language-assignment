#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three no.s");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("Your %d is greatest",a);
	}
	else if(b>a && b>c);
	{
		printf("Your %d is greatest",b);
	}
	else
	{
		printf("Your %d is greatest",c);
	}
}
