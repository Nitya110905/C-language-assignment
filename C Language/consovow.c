#include<stdio.h>
void main()
{
	int A,a,e,i,o,u;
	printf("Enter your alphabet");
	scanf("%d",&A);
	if (A==a || A==e || A==i || A==o || A==u)
	{
		printf("VOWEL");
	}
	else if (A!=a || A!=e || A!=i || A!=o || A!=u)
	{
		printf("CONSONANT");
	}
	else
	{
		printf("INVALID");
	}
}
