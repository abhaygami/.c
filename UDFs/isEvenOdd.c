

#include<stdio.h>
int isevenodd(int);
int main()
{
	int num,res;
	printf("Enter number : ");
	scanf("%d",&num);
	res=isevenodd(num);
	if(res==1)
	{
		printf("Entered number is even .");
	}
	else
	{
		printf("Entered number is odd .");
	}
	return 0;
}
int isevenodd(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
