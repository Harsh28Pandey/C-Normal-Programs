#include<stdio.h>
int main()
{
	int s,r,d,g;
	printf("Enter the ramesh basic salary:");
	scanf("%d",&s);
	//dearness allowance=basic salary*40%/100
	//rent allowance=basic salary*20/100
	//gross salary=basic salary-(dearness allowance+rent allowance)
	d=40*s/100;
	printf("Ramesh dearness allowance=%d \n",d);
	r=20*s/100;
	printf("Ramesh rent allowance=%d \n",r);
	g=s-(d+r);
	printf("Ramesh gross salary=%d",g);
	return 0;
}
