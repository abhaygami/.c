

#include<stdio.h>
void input(int m,int n,int [][n]);
int largest(int m,int n,int [][n]);
int smallest(int m,int n,int [][n]);
int main()
{
	printf("13. Write a function to find the largest & the smallest element of 2 D array.");
	int a[5][5],m,n,l,s;
	printf("\nEnter number of row and column = ");
	scanf("%d %d",&m,&n);
	input(m,n,a);
	l=largest(m,n,a);
	s=smallest(m,n,a);
	printf("Largest element=%d\tSmallest element=%d",l,s);
	return 0;
}
void input(int m,int n,int x[][n])
{
	int i,j;
	printf("Enter array elemets :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	return;
}
int largest(int m,int n,int y[][n])
{
	int i,j,l;
	l=y[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(l<y[i][j])
			{
				l=y[i][j];
			}
		}
	}
	return l;
}
int smallest(int m,int n,int y[][n])
{
	int i,j,s;
	s=y[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s>y[i][j])
			{
				s=y[i][j];
			}
		}
	}
	return s;
}
