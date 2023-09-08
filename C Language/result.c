#include<stdio.h>
int main()
{
	int m1,m2,m3,total,percent,maintotal=300;
	printf("Enter a no.");
	scanf("%d",&m1);
	printf("Enter a no.");	
	scanf("%d",&m2);
	printf("Enter a no.");
	scanf("%d",&m3);
	total=m1+m2+m3;
	
	printf("Result is %d\n",total);
	percent=total*100/maintotal;
	printf("so your academic percentage is %d",percent);
	
	return 0;
}
