#include<stdio.h>
struct student{
	int roll_no;
	float pr;
	char name[100]
};
int main()
{
	int a;
	struct student s1[2];
	struct student s2;
	for(a=0;a<2;a++)
	{
		printf("Enter value of %d student\n",a+1);
		printf("Enter roll no.");
		scanf("%d",&s1[a].roll_no);
		printf("Enter pr");
		scanf("%f",&s1[a].pr);
		printf("Enter name");
		scanf("%s",&s1[a].name); 
	}
	printf("Details of students are as follows\n:");
	for(a=0;a<2;a++)
	{
		printf("Details of %d student\n",a+1);
		printf("%d\t",&s1[a].roll_no);
		printf("%f\t",&s1[a].pr);
		printf("%s\t",&s1[a].name); 
	}
	return 0;
}
