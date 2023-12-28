#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter the year:");
scanf("%d",&n);
if(n%4==0)
 {
  printf("Entered year %d is a leap year");
 }
 else
 printf("Entered year %d is not a leap year");
 getch();
}