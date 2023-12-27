#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,s,a;
	printf("Enter the principle: ");
	scanf("%f",&p);
	printf("Enter the rate: ");
	scanf("%f",&r);
	printf("Enter the time: ");
	scanf("%f",&t);
	s=p*r*t/100;
	a=p*pow((1+r/100),t);
	printf("Simple Interest= %f \n",s);
	printf("Compound interest= %f \n",p-a);
	return 0;
}
