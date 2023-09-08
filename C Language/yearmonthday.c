#include<stdio.h>
void main()
{
	int d,days,month,year;
	printf("Enter no. of days");
	scanf("%d",&d);
	year=d/365;
	printf("No. of years is %d",year);
	month=d%365/30;
	printf("No. of month is %d",month);
	days=d%365%30;
	printf("No. of days is %d",days);
	
}
