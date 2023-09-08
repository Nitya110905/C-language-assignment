#include<stdio.h>
int sum(int x,int y);
int main()
{
	int result=sum(3,4);
	printf("%d is addition",result);
	return 0;
}
int sum(int x,int y)
{
	return x+y;
}
