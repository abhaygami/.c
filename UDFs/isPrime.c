

#include<stdio.h>
void prime(int);
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	prime(n);
	return 0;
}
void prime(int a)
{
	int i,cnt=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			cnt++;
		}
	}
	if(cnt==2)
	{
		printf("%d is prime number",a);
	}
	else
	{
		printf("%d is not prime number",a);
	}
}
