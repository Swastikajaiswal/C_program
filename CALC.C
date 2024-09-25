#include<stdio.h>
#include<conio.h>
void main()
{

	int a,b,op;
	clrscr();
	printf("\nenter first number");
	scanf("%d",&a);
	printf("\nenter second number");
	scanf("%d",&b);
	printf("\nenter choice:");
	scanf("%d",&op);
	switch (op)
	{
		case 1:
			printf("%d",a+b);
			break;
		case 2:
			printf("%d",a-b);
			break;
		case 3:
			printf("%d",a*b);
			break;
		case 4:
			printf("%d",a/b);
			break;
		default:
			printf("wrong input");
			break;
	}
	getch();

}