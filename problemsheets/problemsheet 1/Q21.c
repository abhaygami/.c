

#include<stdio.h>
void input(int m,int n,int [][n]);
int calsum(int m,int n,int [][n]);
int main()
{
	printf("21. Write a function to calculate a sum of all elements in two dimensional array.");
	int m,n,a[5][5],sum;
	printf("\nEnter number of rows & column = ");
	scanf("%d %d",&m,&n);
	printf("Enter array elements\n");
	input(m,n,a);
	sum=calsum(m,n,a);
	printf("Sum of all array elements = %d",sum);
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
int calsum(int m,int n,int x[][n])
{
	int i,j,sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+x[i][j];
		}
	}
	return sum;
}
