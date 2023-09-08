#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	printf("%p",*p);
	printf("\n%p",&a);
	printf("\n%d",a);
	printf("\n%d",*p);
	a=25;
	*p=50;
	printf("\n%d",a);
	return 0;
}
