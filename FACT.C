#include<stdio.h>
#include<conio.h>
void fact();
void main()
{
clrscr();
fact();
getch();
}

void fact()
{
int n,f=1;
printf("Enter the value of n=");
scanf("%d",&n);
while(n>0)
{
f=f*n;
n=n-1;
}
printf("Factorial=%d",f);
}