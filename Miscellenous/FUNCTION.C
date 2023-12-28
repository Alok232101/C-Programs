/* Takes Nothing Return Nothing */

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pie 22/7
void main()
{
void areaofcircle(void);
clrscr();
areaofcircle();
getch();
}

void areaofcircle()
{
int r;
printf("Enter radius");
scanf("%d",&r);
areaofcircle=pie*r*r;
printf("%d",areaofcircle);
}
