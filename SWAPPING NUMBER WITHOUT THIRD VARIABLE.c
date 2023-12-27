#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	printf("Before swapping:a=%.2f,b=%.2f \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping:a=%.2f,b=%.2f",a,b);
	return 0;
}
