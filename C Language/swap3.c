#include<stdio.h>
void main()
{
	int a=10,b=20,c=30;
	printf("before swap a=%d b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swap a=%d b=%d",a,b);
}
