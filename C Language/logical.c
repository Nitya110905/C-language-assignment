#include<stdio.h>
void main()
{
	int a=11;
	printf("%d\n",a<7 && a>8);
	printf("%d\n",a<8 || a>9);
	printf("%d\n",!(a<11 && a>16));
	
}
