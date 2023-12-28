#include<stdio.h>
#include<conio.h>
void main()
{
int p,r,t,si;
clrscr();
printf("Enter the value of p,r,t:");
scanf("%d%d%d",&p,&r,&t);
si=p*r*t/100;
printf("%d",si);
getch();
}