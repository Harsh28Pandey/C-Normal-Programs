#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("Before Swapping=a=%.0f,b=%.0f\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping=a=%.0f,b=%.0f",a,b);
	return 0;
}
