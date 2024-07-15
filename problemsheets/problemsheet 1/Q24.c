

#include<stdio.h>
void input(int [],int);
void print(int [],int);
void asort(int [],int);
void merge(int [],int [],int,int);
int main()
{
	printf("24. Write a modular program that will perform the following tasks:");
	printf("\n\tI.a Read two integer arrays with unsorted elements");
	printf("\n\tI.b Sort them in ascending order");
	printf("\n\tI.c Merge the sorted arrays");
	printf("\n\tI.d Print the sorted list");
	int x[50],y[50],m,n;
	printf("\nEnter number of elements in first array : ");
	scanf("%d",&m);
	input(x,m);
	printf("Enter number of elements in second array : ");
	scanf("%d",&n);
	input(y,n);
	printf("Displaying input\nx =");
	print(x,m);
	printf("\nY =");
	print(y,n);
	asort(x,m);
	asort(y,n);
	printf("\nDisplaying sortd arrays");
	printf("\nx =");
	print(x,m);
	printf("\nY =");
	print(y,n);
	merge(x,y,m,n);
	printf("\nDisplaying merged array = ");
	print(x,m+n);
	asort(x,m+n);
	printf("\nSorted Merged array = ");
	print(x,m+n);
	return 0;
}
void input(int a[],int n)
{
	int i;
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	return;
}
void print(int e[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d",e[i]);
	}
	return;
}
void asort(int b[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[i]>b[j])
			{
				k=b[i];
				b[i]=b[j];
				b[j]=k;
			}
		}
	}
	return;
}
void merge(int c[],int d[],int m,int n)
{
	int i,j=0;
	for(i=m;i<(m+n);i++)
	{
		c[i]=d[j];
		j++;
	}
	return;
}
