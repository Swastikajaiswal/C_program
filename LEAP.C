#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("enter year:");
	scanf("%d",&year);
	if(year%4==0 || year%400==0)
	{
		if(year%100!=0)
			printf("it is a leap year");
		else
			printf("year is not a leap year");

	}
	else
		printf("not a leap year");

	getch();
}