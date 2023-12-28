#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,total=500,sum;
    float percentage;
    printf("Enter the values 5 subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    percentage=(sum/total)*100;
    printf("sum=%d",sum);
    printf("percentage=%f",percentage);
    getch();
}
