#include<stdio.h>
void main()
{
	int a,hour,min;
	printf("Enter your minutes");
	scanf("%d",&a);
	hour=a/60;
	printf("Your hours are %d",hour);
	min=a%60;
	printf("Your minutes are %d",min);
}
