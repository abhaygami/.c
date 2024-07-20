

#include<stdio.h>
int isarm(int*);
int main()
{
	printf("10) Write user defined function to check whether a given number is Armstrong number or not using pointer.");
	int n,res;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	res=isarm(&n);
	if(res==1)
	{
		printf("%d is arm-strong number . ",n);
	}
	else
	{
		printf("%d is not arm-strong number . ",n);
	}
	return 0;
}
int isarm(int *a)
{
	int sum=0,i,b,c,d;
	b=*a;
	while(b!=0)
	{
		d=b%10;
		c=*a;
		i=1;
		while(c!=0)
		{
			i=i*d;
			c=c/10;
		}
		sum=sum+i;
		b=b/10;
	}
	if(*a==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
