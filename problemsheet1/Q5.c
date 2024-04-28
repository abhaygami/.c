/*
 * Q5.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int leap(int);
int main()
{
	printf("5. Write a function called leap() that receives the year as a parameter and returns 0 if it is a leap year, otherwise it returns 1.");
	int y,res;
	printf("\nEnter year : ");
	scanf("%d",&y);
	res=leap(y);
	if(res==0)
	{
		printf("%d is leap year ",y);
	}
	else
	{
		printf("%d is not leap year ",y);
	}
	return 0;
}
int leap(int n)
{
	if(n%4==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
