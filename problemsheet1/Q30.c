/*
 * Q30.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */


#include<stdio.h>
double power(int,int);
int main()
{
    printf("30 Write user defined function calculate power of number n using recursion.\n");
    int a,n;
    double cal;
    printf("Enter the base number: ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&n);
    cal=power(a,n);
    printf("%d raise to %d is %lf",a,n,cal);
}
double power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else if(y<0)
    {
        return 1/(x*power(x,-y-1));
    }
    else
    {
        return  x*power(x,y-1);
    }
}
