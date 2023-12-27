#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the temperature in fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	//temperature in celcius=(f-32)*5/9
	//temperature fahrenheit to celcius
	printf("Temperature in celcius:%.2f",c);
	return 0;
}
