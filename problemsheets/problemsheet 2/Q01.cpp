

#include<stdio.h>
void input(int*,int);
void print(int*,int);
void asort(int*,int);
void dsort(int*,int);
int main()
{
	printf("1) Write user defined function to sort 1D array using pointer.\n");
	int n;
	printf("Enter number of elements ");
	scanf("%d",&n);
	int a[n];
//	taking input
	printf("Enter array elements : ");
	input(a,n);
//	displaying array
	printf("Displaying entered array elments : ");
	print(a,n);
//	sorting array ascending
	asort(a,n);
	printf("\nAsorted array elements : ");
	print(a,n);//	displaying asorted array
	//	sorting array descending
	dsort(a,n);
	printf("\nDsorted array elements : ");
	print(a,n);//	displaying dsorted array
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
void asort(int *p2,int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p2+i)>*(p2+j))
			{
				tmp=*(p2+i);
				*(p2+i)=*(p2+j);
				*(p2+j)=tmp;
			}
		}
	}
	return;
}
void dsort(int *p2,int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(p2+i)<*(p2+j))
			{
				tmp=*(p2+i);
				*(p2+i)=*(p2+j);
				*(p2+j)=tmp;
			}
		}
	}
	return;
}
