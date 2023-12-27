#include<stdio.h>
int main()
{
	float c,f,C;
	printf("Enter the temperature in celcius:");
	scanf("%f",&c);
	//temperature in fahrenheit=(c+32)*9/5
	//convert temperature celcius to fahrenheit
	f=9/5*(c+32);
	printf("Temperature in fahrenheit=%f",f);
	return 0;
}
