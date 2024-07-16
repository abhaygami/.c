

#include<stdio.h>
int add(int);
int main()
{
    printf("29 Write user defined function to add number up to N using recursion.\n");
    int n,sum;
    printf("Enter last number : ");
    scanf("%d",&n);
    sum=add(n);
    printf("\nSum of digits = %d\n",sum);
}
int add(int l)
{
    if(l==0)
    {
        return 0;
    }
    else if(l<1)
    {
        return l+add(l+1);
    }
    else
    {
        return l+add(l-1);
    }
}
