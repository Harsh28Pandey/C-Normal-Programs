#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,CI;
	printf("Enter the principle: ");
	scanf("%f",&p);
	printf("Enter the rate: ");
	scanf("%f",&r);
	printf("Enter the time: ");
	scanf("%f",&t);
	CI=p*pow((1+r/100),t);
	printf("Compound Interest= %.2f",CI);
}
