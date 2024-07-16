

#include<stdio.h>
int mul(int,int);
int main()
{
	printf("28 . Write user defined function to multiply two integers using recursion.\n");
    int a,b,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&a, &b);
    m=mul(a,b);
    printf("\nProduct = %d\n",m);
}
int mul(int x, int y)
{
    if(y==0)
    {
        return 0;
    }
    else if(y<0)
    {
        return -x+mul(x,y+1);
    }
    else
    {
        return x + mul(x,y-1);
    }
}
