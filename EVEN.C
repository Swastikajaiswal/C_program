#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	if(a%2==0)
		printf("It is an even number");
	else
		printf("It is an odd number");
	getch();
}