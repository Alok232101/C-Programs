#include<stdio.h>
#include<conio.h>
int main()
{ 
    int r;
    float A;
    double pie=3.14;
    printf("Enter the radius of Circle:");
    scanf("%d",&r);
    A=(pie*r*r);
    printf("Area of circle is %2f having the radius %d",A,r);
    return 0;
}