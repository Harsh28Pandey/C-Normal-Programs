#include<stdio.h>
#include<math.h>
int main()
{
	float v,h,R,r;
	printf("Enter the radius R:");
	scanf("%f",&R);
	printf("Enter the radius r:");
	scanf("%f",&r);
	printf("Enter the height h:");
	scanf("%f",&h);
	v=3.14*h/3*(pow(R,2)+R*r+pow(r,2));
	printf("Volume of frustum:%.2f",v);
}
