#include<stdio.h>
#include<conio.h>
int main(void)
{
int i,n,f=1;
printf("Enter any number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("%d",f);
getch();
}
