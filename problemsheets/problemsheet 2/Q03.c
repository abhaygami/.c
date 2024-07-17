

#include<stdio.h>
void input(int*,int);
void print(int*,int);
int calsum(int*,int);
int main()
{
	printf("3) Write user defined function to calculate a sum of all 1D array elements using a pointer.");
	int n,sum;
	printf("\nEnter number of elements ");
	scanf("%d",&n);
	int a[n];
//	taking input
	printf("Enter array elements : ");
	input(a,n);
//	displaying array
	printf("Displaying entered array elments : ");
	print(a,n);
	sum=calsum(a,n);//calling function calsum
//	displaying sum
	printf("\nSum=%d",sum);
	return 0;
}
void input(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	return;
}
void print(int *p1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p1+i));
	}
	return;
}
int calsum(int *p2,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=*(p2+i);
	}
	return sum;
}
