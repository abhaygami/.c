/*
 * employee.c
 *
 *  Created on: 08-Jan-2024
 *      Author: root
 */


#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	int bs;
	float da,ma,hra,gs;
};
int main()
{
	struct employee e[5],stemp;
	int i,j;
	float max,min;
	printf("Enter details of 5 employee");
	for(i=0;i<5;i++)
	{
		printf("\nEnter employee id : ");
		scanf("%d",&e[i].id);
		printf("Enter name : ");
		scanf("%s",e[i].name);
		printf("Enter Basic salary : ");
		scanf("%d",&e[i].bs);
		if(e[i].bs<=0)
		{
			printf("Enter valid value");
			return 0;
		}
		else
		{
			e[i].da=(float)e[i].bs*0.4;
			e[i].ma=(float)e[i].bs*0.2;
			e[i].hra=(float)e[i].bs*0.05;
			e[i].gs=e[i].bs+e[i].da+e[i].ma+e[i].hra;
		}
	}
	//Display data
	printf("Details of employee is as below ");
	for(i=0;i<5;i++)
	{
		printf("\nID:%d\tName:%s\tBS:%d\tDA:%f\tMA:%f\tHRA:%f\tGross Salary:%f",e[i].id,e[i].name,e[i].bs,e[i].da,e[i].ma,e[i].hra,e[i].gs);
	}
	//finding highest and lowest Gross Salary
	max=e[0].gs;
	min=e[0].gs;
	for(i=0;i<5;i++)
	{
		if(max<e[i].gs)
		{
			max=e[i].gs;
		}
		if(min>e[i].gs)
		{
			min=e[i].gs;
		}
	}
	printf("\nHighest Gross salary is %f",max);
	printf("\nLowest percentage is %f",min);
	//Descending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(e[i].gs<e[j].gs)
			{
				stemp=e[i];
				e[i]=e[j];
				e[j]=stemp;
			}
		}
	}
	printf("\nData of student in Descending order of percentage:\n");
	for(i=0;i<5;i++)
	{
		printf("\nID:%d\tName:%s\tBS:%d\tDA:%f\tMA:%f\tHRA:%f\tGross Salary:%f",e[i].id,e[i].name,e[i].bs,e[i].da,e[i].ma,e[i].hra,e[i].gs);
	}
	return 0;
}
