#include<stdio.h>
#include<math.h>
int main()
{
	float a,r,c;
	printf("Enter the radius:");
	scanf("%f",&r);
	a=3.14*pow(r,2);
	printf("Area of Circle:%.2f",a);
	return 0;
}
