

#include<stdio.h>
void f(int);
int main()
{
	int num;
	printf("Enter number of element you want to print of fibonaci series: ");
	scanf("%d",&num);
	f(num);
}
void f(int n)
{
	int i,a,b,c;
	a=0;
	b=1;
	printf("Fibonaci series' %d elements are : %d,%d",n,a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf(",%d",c);
		a=b;
		b=c;
	}
}
