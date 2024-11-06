#include<stdio.h>
#include<conio.h>
void swap(int,int);

void main()
{
	 int a=5,b=6;
	 swap(a,b);
	 
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("%d%d",x,y);
}
