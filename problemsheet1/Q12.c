/*
 * Q12.c
 *
 *  Created on: 05-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int large(int [],int);
int small(int [],int);
int main()
{
	printf("12. Write a function to find the largest & the Smallest of 1 D array.");
	int i,a[50],n,l,s;
	printf("\nEnter number of elements = ");
	scanf("%d",&n);
	printf("enter array elements :- ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=large(a,n);
	s=small(a,n);
	printf("Largest element = %d\tSmallest element = %d",l,s);
	return 0;
}
int large(int x[],int n)
{
	int i,max;
	max=x[0];
	for(i=1;i<n;i++)
	{
		if(max<x[i])
		{
			max=x[i];
		}
	}
	return max;
}
int small(int x[],int n)
{
	int i,min;
	min=x[0];
	for(i=1;i<n;i++)
	{
		if(min>x[i])
		{
			min=x[i];
		}
	}
	return min;
}
