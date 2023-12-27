#include<stdio.h>
#include<math.h>
int main()
{
	float l,b,a;
	printf("Enter the value of length:");
	scanf("%f",&l);
	printf("Enetr the value of breath:");
	scanf("%f",&b);
	a=l*b;
	printf("Area of rectangle: %.2f",a);
	return 0;
}
