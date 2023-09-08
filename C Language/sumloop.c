#include<stdio.h>
void main()
{
	int a,b,sum=0,Avg;
	printf("Enter your end point");
	scanf("%d",&b);
	for(a=1;a<=b;a++)
	{
		printf("%d\n",a);
		sum=sum+a;
    }
	printf("%d is sum of no.s\n",sum);
 	Avg=sum/b;
 	printf("Your avg. is %d",Avg);
}
