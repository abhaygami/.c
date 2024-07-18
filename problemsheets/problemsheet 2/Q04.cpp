

#include<stdio.h>
void input(int*,int*,int*);
void print(int*,int*,int*);
int sum(int*,int*,int*);
int main()
{
	printf("4) Write user defined function to calculate sum of all 2D array elements using pointer.");
	int m,n;
	printf("\nEnter total no. of row and column : ");
	scanf("%d %d",&m,&n);
	int a[m][n],total;
	printf("Enter array elments \n");
//	calling input function
	input(&m,&n,a);
	printf("Entered array elements are \n");
	print(&m,&n,a);
	total=sum(&m,&n,a);//calling sum function
	printf("Sum of all elemnents are : %d",total);
	return 0;
}
void input(int *r,int *c,int *x)
{
	int i,j;
	for(i=0;i<*r;i++)
	{
		for(j=0;j<*c;j++)
		{
			printf("Enter [%d][%d] elements : ",i,j);
			scanf("%d",x+i*(*c)+j);
		}
	}
	return;
}
void print(int *r,int *c,int *x)
{
	int i,j;
	for(i=0;i<*r;i++)
	{
		for(j=0;j<*c;j++)
		{
			printf("%d ",*(x+i*(*c)+j));
		}
		printf("\n");
	}
	return;
}
int sum(int *r,int *c,int *x)
{
	int i,j,cnt=0;
	for(i=0;i<*r;i++)
	{
		for(j=0;j<*c;j++)
		{
			cnt+=*(x+i*(*c)+j);
		}
	}
	return cnt;
}
