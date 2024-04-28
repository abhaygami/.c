/*
 * Q8.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int isArmstrong(int);
int main()
{
	printf("8. Write a function to check whether a given number is Armstrong number or not.");
	int n,res;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	res=isArmstrong(n);
	if(res==1)
	{
		printf("%d is Armstrong number ",n);
	}
	else
	{
		printf("%d is not Armstrong number ",n);
	}
	return 0;
}
int isArmstrong(int a)
{
	int sum=0,i,b,c,d;
	b=a;
	while(b!=0)
	{
		d=b%10;
		c=a;
		i=1;
		while(c!=0)
		{
			i=i*d;
			c=c/10;
		}
		sum=sum+i;
		b=b/10;
	}
	if(a==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
