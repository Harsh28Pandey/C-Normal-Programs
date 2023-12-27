#include<stdio.h>
int main()
{
	float dis,met,ft,inc,cen;
	printf("Enter the distance between two cities in km:");
	scanf("%f",&dis);
	//distance in meters=distance*1000meters
	//distance in feet=distance*3280.84feet
	//distance in inches=distance*39370.1
	//distance in centimeters=distance*100000
	met=dis*1000;
	printf("Distance in meters=%.2f \n",met);
	ft=dis*3280.84;
	printf("Distance in feet=%.2f \n",ft);
	inc=dis*39370.1;
	printf("Distance in inches:%.2f \n",inc);
	cen=dis*100000;
	printf("Distance in centimeter=%.2f \n",cen);
	return 0;
}
