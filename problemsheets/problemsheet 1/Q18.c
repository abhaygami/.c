

#include<stdio.h>
void input(int m,int n,int [][n]);
int countprime(int m,int n,int [][n]);
int main()
{
	printf("18. Write a function to count total number of elements that hold prime numbers in two dimensional array.");
	int a[5][5],p,m,n;
	printf("\nEnter number of rows and columns: ");
	scanf("%d %d",&m,&n);
	printf("Enter Array elements \n");
	input(m,n,a);
	p=countprime(m,n,a);
	printf("Total prime number = %d",p);
	return 0;
}
void input(int m,int n,int x[][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	return;
}
int countprime(int m,int n,int y[][n])
{
	int cnt=0,c,k,i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c=0;
			if(y[i][j]>1)
			{
				for(k=2;k<y[i][j];k++)
				{
					if(y[i][j]%k==0)
					{
						c++;
					}
				}
				if(c==0)
				{
					cnt++;
				}
			}
		}

	}
	return cnt;
}
