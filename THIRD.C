#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,l=20,c=30;
	float r=3.14;
	printf("\n perimeter of square is %d",4*a);
	printf("\n area of square is %d",a*a);
	printf("\n perimeter of rectangle is %d",2*(l+a));
	printf("\n area of rectangle is %d",a*l);
	printf("\n perimeter of triangle is %d",a+l+c);
	printf("\n area of triangle is %d",(l*a)/2);
	printf("\n perimeter of circle is %f",2*r*c);
	printf("\n area of circle is %f",r*c*c);
	getch();
}