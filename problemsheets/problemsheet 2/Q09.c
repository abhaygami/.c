
#include<stdio.h>
int isprime(int);
int count(int*,int);
int main()
{
	printf("9) Write a function to count total prime numbers in the 1D array using pointer.");
	int i,n,c;
	printf("\nEnter total no. of elements in array ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=count(a,n);
	printf("Total prime numbers in array : %d",c);
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
int count(int *x,int n)
{
	int i,count=0,res;
	for(i=0;i<n;i++)
	{
		res=isprime(*(x+i));
		if(res==1)
		{
			count++;
		}
	}
	return count;
