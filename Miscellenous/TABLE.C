#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j;
clrscr();
printf("Enter the table number:");
scanf("%d",&a);
for(i=1;i<=10;i++)
{
j	=a*i;
printf("%d*%d=%d\n",a,i,j);
}
getch();
}