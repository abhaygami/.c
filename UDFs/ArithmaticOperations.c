/*
 * add.c
 *
 *  Created on: 17-Jan-2024
 *      Author: root
 */


#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
void div(int,int);
int main()
{
	int x,y,a,s,m;
	printf("Enter first number ");
	scanf("%d",&x);
	printf("Enter second number ");
	scanf("%d",&y);
	a=add(x,y);
	s=sub(x,y);
	m=mul(x,y);
	printf("Addition : %d",a);
	printf("\nSubtarstion : %d",s);
	printf("\nMultiplication : %d",m);
	div(x,y);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
void div(int a,int b)
{
	if(b==0)
	{
		printf("Division not possible ");
	}
	else
	{
		printf("Division: %d",a/b);
	}
}
