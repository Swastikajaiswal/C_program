#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	double principal,rate,time,amount,CI;
	printf("enter principal rate and amount:");
	scanf("%lf%lf%lf",&principal,&rate,&time);
	amount=principal*((pow((1+rate/100),time)));
	CI=amount-principal;
	printf("compound interest is:%lf",CI);
	getch();
}