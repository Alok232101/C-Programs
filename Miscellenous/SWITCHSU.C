#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the value of n:");
scanf("%d",&n);
switch(n)
 {
  case 1:printf("\n sunday");
  break;
  case 2:printf("\n monday");
  break;
  case 3:printf("\n tuesday");
  break;
  case 4:printf("\n wednesday");
  break;
  case 5:printf("\n thrusday");
  break;
  case 6:printf("\n friday");
  break;
  case 7:printf("\n saturday");
  break;
  default:printf("\n you are entered wrong number:");
 }
 getch();
}