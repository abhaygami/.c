

#include<stdio.h>
void p(int);
int main()
{
	int n;
	printf("Enter last number : ");
	scanf("%d",&n);
	printf("prime numbers up to %d : ",n);
	p(n);
	return 0;
}
void p(int l)
{
	int i,j,cnt;
	for(i=2;i<=l;i++)
	{
		cnt=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cnt++;
			}
		}
		if(cnt==2)
		{
			printf("%d ",i);
		}
	}
}
