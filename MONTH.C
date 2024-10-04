#include<stdio.h>
#include<conio.h>
void main()
{
	int mnum;
	printf("enter month number:");
	scanf("%d",&mnum);
	if(mnum==1||mnum==3||mnum==5||mnum==7||mnum==8||mnum==10||mnum==12)
		printf("No. of days=31");
	else
	{
		if(mnum==4||mnum==6||mnum==9||mnum==11)
			printf("No. of days=30");
		else
			if(mnum==2)
				printf("No. of days=28 or 29");
			else
				printf("invalid input");
	}
	getch();
}