
#include<stdio.h>
int isPrime(int);
int main()
{
	printf("22. Write a function to check whether a given number is prime number or not");
	int n,r;
	printf("\nEnter number : ");
	scanf("%d",&n);
	r=isPrime(n);
	if(r==1)
	{
		printf("%d is prime number ",n);
	}
	else
	{
		printf("%d is not prime number ",n);
	}
	return 0;
}
int isPrime(int num)
{
	int i,cnt=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			cnt++;
		}
	}
	if(cnt==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
