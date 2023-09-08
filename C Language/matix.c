#include<stdio.h>
void main()
{
	int num[100][100],i,j,r,c;
	printf("Enter no. of rows");
	scanf("%d",&r);
	printf("Enter the no. of columns");
	scanf("%d",&c);
	printf("Enter %d values",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&num[i][j]);
		}
	}
	printf("Your %dx%d array\n",r,c);
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",num[i][j]);
		}
		printf("\n");
    }

	
}
