#include<stdio.h>
#include<math.h>
int main()
{
	float a,s;
	printf("Enter the side:");
	scanf("%f",&s);
	a=pow(3,1/2)/4*pow(s,2);
	printf("Area of equilateral triangle:%.2f",a);
}
