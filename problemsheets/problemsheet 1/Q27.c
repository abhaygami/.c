

#include<stdio.h>
int fact(unsigned int);
int main()
{
	printf("26.Write user defined function to calculate factorial of a given number using recursion.");
	unsigned int n,f;
	printf("\nEnter n : ");
	scanf("%d",&n);
	f=fact(n);
	printf("%d! = %d",n,f);
	return 0;
}
int fact(unsigned int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}
