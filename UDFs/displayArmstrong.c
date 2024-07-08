
#include<stdio.h>
void a(int);
int main()
{
	int n;
	printf("Enter last number :");
	scanf("%d",&n);
	printf("arm-strong numbers up to %d : ",n);
	a(n);
	return 0;
}
void a(int l)
{
	int i,a,b,c,d,sum;
	for(i=1;i<=l;i++)
	{
		a=i;
		sum=0;
		while(a!=0)
		{
			b=i;
			c=a%10;
			d=1;
			while(b!=0)
			{
				d=d*c;
				b=b/10;
			}
			sum=sum+d;
			a=a/10;
		}
		if(i==sum)
		{
			printf("%d ", i);
		}
	}
}
