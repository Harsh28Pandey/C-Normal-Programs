#include<stdio.h>
#include<math.h>
int main()
{
	float l,b,h,tsa;
	printf("Enetr the length of cuboid:");
	scanf("%f",&l);
	printf("Enetr the breath of cuboid:");
	scanf("%f",&b);
	printf("Enter the height of cuboid:");
	scanf("%f",&h);
	tsa=2*(l*b+b*h+h*l);
	printf("Total surface area of cuboid:%.2f",tsa);
}
