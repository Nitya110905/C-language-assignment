#include<stdio.h>
void main()
{
	int year;
	printf("Enter your year");
	scanf("%d",year);
	if(year%4==0)
	{
		printf("Your %d is LEAP",year);
	}
	else
	{
		printf("Your %d is NOT A LEAP",year);
	}
}
