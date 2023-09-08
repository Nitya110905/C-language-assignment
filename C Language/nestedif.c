#include<stdio.h>
void main()
{
	int a;
	printf("Enter your marks");
	scanf("%d",&a);
	if(60>a>35)
	{
		printf("You made it");
	}
	else if(a>=60)
	{
		printf("You received an A+");
	}
    else
	{
		printf("Better luck next time");
	}
}
