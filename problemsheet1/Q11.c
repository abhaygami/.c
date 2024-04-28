/*
 * Q11.c
 *
 *  Created on: 05-Feb-2024
 *      Author: root
 */


#include<stdio.h>
void input(int m,int n,int [][n]);
void print(int m,int n,int [][n]);
void asort(int m,int n,int [][n]);
void dsort(int m,int n,int [][n]);
int main()
{
	printf("11. Write a function to sort 2D array in ascending & descending order.");
	int a[5][5],m,n;
	printf("\nEnter number of rows and columns : ");
	scanf("%d %d",&m,&n);
	printf("Enter array elements : \n");
	input(m,n,a);
	printf("Displaying array elements\n");
	print(m,n,a);
	asort(m,n,a);
	printf("After sorting in descending :-\n");
	print(m,n,a);
	dsort(m,n,a);
	printf("After sorting in ascending :-\n");
	print(m,n,a);
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
void asort(int m,int n,int x[][n])
{
	int i,j,k,l,temp;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				for(l=0;l<n;l++)
				{
					if(x[i][j]>x[k][l])
					{
						temp=x[i][j];
						x[i][j]=x[k][l];
						x[k][l]=temp;
					}
				}
			}
		}
	}
	return;
}
void dsort(int m,int n,int x[][n])
{
	int i,j,k,l,temp;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				for(l=0;l<n;l++)
				{
					if(x[i][j]<x[k][l])
					{
						temp=x[i][j];
						x[i][j]=x[k][l];
						x[k][l]=temp;
					}
				}
			}
		}
	}
	return;
}
void print(int m,int n,int x[][n])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	return;
}
