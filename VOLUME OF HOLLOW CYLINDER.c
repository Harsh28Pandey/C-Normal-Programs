#include<stdio.h>
#include<math.h>
int main()
{
	float R,r,h,V;
	printf("Enter the Outer radius:");
	scanf("%f",&R);
	printf("Enter the Inner radius:");
	scanf("%f",&r);
	printf("Enter the height:");
	scanf("%f",&h);
	V=3.14*(pow(R,2)-pow(r,2))*h;
	printf("Volume of hollow cylinder:%.2f",V);
}
