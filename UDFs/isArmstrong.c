

#include<stdio.h>
void arm(int);
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	arm(n);
	return 0;
}
void arm(int a)
{
	int sum=0,i,b,c,d;
	b=a;
	while(b!=0)
	{
		d=b%10;
		c=a;
		i=1;
		while(c!=0)
		{
			i=i*d;
			c=c/10;
		}
		sum=sum+i;
		b=b/10;
	}
	if(a==sum)
	{
		printf("\n%d is arm-strong number",a);
	}
	else
	{
		printf("\n%d is not an arm-strong number",a);
	}
}
