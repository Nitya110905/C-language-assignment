#include<stdio.h>
void main()
{
	int l,b,h,r;
	float a1,a2,a3,a4;
	printf("Enter required length");
	scanf("%d",&l);
	printf("Enter required breadth");
	scanf("%d",&b);
	printf("Enter required h");
	scanf("%d",&h);
	printf("Enter required r");
	scanf("%d",&r);
	a1=l*l;
	printf("Tamaro square no area %f\n thay chhe",a1);
	a2=l*b;
	printf("Tamaro rectangle no area %f\n thay chhe",a2);
	a3=h*b*0.5;
	printf("Tamaro traingle no area %f\n thay chhe",a3);
	a4=3.14*r*r;
	printf("Tamaro circle no area %f\n thay chhe",a4);
	
	
	
	
	
	
}
