/*
 * Q9.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int factorial(int);
int main()
{
	printf("9. Write a function to display return factorial of integer n.");
	int n;
	printf("\nEnter number : ");
	scanf("%d",&n);
	printf("%d! = %d",n,factorial(n));
	return 0;
}
int factorial(int num)
{
	int i,f=1;
	for(i=num;i>=1;i--)
	{
		f=f*i;
	}
	return f;
}
