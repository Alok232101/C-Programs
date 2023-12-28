#include<stdio.h>
#include<conio.h>
void main()
{
	int amount,rate,time,simpleintrest;
	printf("Enter principal amount:");
	scanf("%d",&amount);
	printf("Enter rate of intrest:");
	scanf("%d",&rate);
	printf("Enter period of time:");
	scanf("%d",&time);
	simpleintrest = (amount*rate*time)/100;
	printf("simple intrest=%d",simpleintrest);
	getch();
	
}
