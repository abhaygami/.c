/*
 * student.c
 *
 *  Created on: 08-Jan-2024
 *      Author: root
 */


#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	int c,maths,dbms,total;
	float per;
};
int main()
{
	struct student s[5],stemp;
	int i,j;
	float max,min;
	printf("Enter details of 5 students");
	for(i=0;i<5;i++)
	{
		printf("\nEnter roll number: ");
		scanf("%d",&s[i].rno);
		printf("Enter name : ");
		scanf("%s",s[i].name);
		printf("Enter marks of c, mathematics and dbms : ");
		scanf("%d%d%d",&s[i].c,&s[i].maths,&s[i].dbms);
		if(s[i].c>100||s[i].c<0||s[i].maths<0||s[i].maths>100||s[i].dbms<0||s[i].dbms>100)
		{
			printf("Enter valid marks");
			return 0;
		}
		else
		{
			s[i].total=s[i].c+s[i].maths+s[i].dbms;
			s[i].per=(float)s[i].total/3;
		}
	}
	//Display data
	printf("Details of student is as below ");
	for(i=0;i<5;i++)
	{
		printf("\nRoll no.:%d\tName:%s\tC:%d\tMaths:%d\tDBMS:%d\tTotal:%d\tPer:%f",s[i].rno,s[i].name,s[i].c,s[i].maths,s[i].dbms,s[i].total,s[i].per);
	}
	//finding highest and lowest percentage
	max=s[0].per;
	min=s[0].per;
	for(i=0;i<5;i++)
	{
		if(max<s[i].per)
		{
			max=s[i].per;
		}
		if(min>s[i].per)
		{
			min=s[i].per;
		}
	}
	printf("\nHighest percentage is %f",max);
	printf("\nLowest percentage is %f",min);
	//Descending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(s[i].per<s[j].per)
			{
				stemp=s[i];
				s[i]=s[j];
				s[j]=stemp;
			}
		}
	}
	printf("\nData of student in Descending order of percentage:\n");
	for(i=0;i<5;i++)
	{
		printf("\nRoll no.:%d\tName:%s\tC:%d\tMaths:%d\tDBMS:%d\tTotal:%d\tPer:%f",s[i].rno,s[i].name,s[i].c,s[i].maths,s[i].dbms,s[i].total,s[i].per);
	}
	return 0;
}
