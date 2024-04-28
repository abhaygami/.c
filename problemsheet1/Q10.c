/*
 * Q10.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */


#include<stdio.h>
void asort(int [],int);
void dsort(int [],int);
void print(int [],int);
int main()
{
	printf("10.Write a function to sort 1D array in ascending & descending order.");
	int x[100],n,i;
	printf("\nEnter n= ");
	scanf("%d",&n);
	printf("Enter array elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	asort(x,n);
	printf("After ascending sorting\n");
	print(x,n);
	dsort(x,n);
	printf("\nAfter descending sorting\n");
	print(x,n);
	return 0;
}
void asort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	return;
}
void dsort(int c[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	return;
}
void print(int b[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
