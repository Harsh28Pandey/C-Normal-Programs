#include<stdio.h>
#include<math.h>
int main()
{
	float l,b,p;
	printf("Enter the length:");
	scanf("%f",&l);
	printf("Enter the breath:");
	scanf("%f",&b);
	p=2*(l+b);
	printf("Perimetet of rectangle: %.2f",p);
	return 0;
}
