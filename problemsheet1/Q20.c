/*
 * Q20.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int sumdigit(long long int);
int main()
{
	printf("20. Write a function to calculate sum of digits in the number N.\n");
	long long int n;
	int count;
	printf("Enter number N : ");
	scanf("%Ld",&n);
	count=sumdigit(n);
	printf("Sum of digits in %Ld = %d",n,count);
	return 0;
}
int sumdigit(long long int num)
{
	int cnt,sum=0;
	while(num!=0)
	{
		cnt=num%10;
		sum=sum+cnt;
		num=num/10;
	}
	return sum;
}
