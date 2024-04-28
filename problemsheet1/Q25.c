/*
 * Q25.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */


#include<stdio.h>
void p(int);
int main()
{
	int n;
	printf("Enter n = ");
	scanf("%d",&n);
	p(n);
	return 0;
}
void p(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<2*n;j++)
		{
			if(j<=n)
			{
				if(i+j>=n+1)
				{
					printf("%d ",j-n+i);
				}
				else
				{
					printf("  ");
				}
			}
			else
			{
				if(j-i<n)
				{
					printf("%d ",j-n+i);
				}
				else
				{
					printf("  ");
				}
			}
		}
		printf("\n");
	}
	return;
}
