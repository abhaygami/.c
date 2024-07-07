#include<stdio.h>
int isprime(int);
int count(int [],int);
int main()
{
	int i,a[5],n;
	printf("Enter elements of array : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	n=count(a,5);
	printf("Total prime numbers in array : %d",n);
	return 0;
}
int isprime(int a)
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
		return 1;
	}
	else
	{
		return 0;
	}
}
int count(int x[],int n)
{
	int i,count=0,res;
	for(i=0;i<n;i++)
	{
		res=isprime(x[i]);
		if(res==1)
		{
			count++;
		}
	}
	return count;
}
