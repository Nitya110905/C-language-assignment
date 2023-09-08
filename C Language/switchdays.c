#include<stdio.h>
void main()
{
	int c;
	printf("Kindly select from the given menu");
	printf("Enter\n M for Monday\n T for Tuesday\n W for Wednesday\n t for Thursday\n F for Friday\n S for Staurday\n s for Sunday");
	scanf("%c",&c);
	switch (c)
	{
		case 'M':
		printf("Monday");
		break;
		case 'T':
		printf("Tueday");
		break;
		case 'W':
		printf("Wednesday");
		break;
		case 't':
		printf("Thursday");
		break;
		case 'F':
		printf("Friday");
		break;
		case 'S':
		printf("Saturday");
		break;
		case 's':
		printf("Sunday");
		break;
		default:
		printf("Kindly select from the respected menu");
	}
}
