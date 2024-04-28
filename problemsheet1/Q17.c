/*
 * Q17.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */


#include<stdio.h>
struct time
{
	int h,m,s;
};
struct time Input(void);
void Display(struct time);
int Validate(struct time);
int main()
{
	printf("17. Define a structure data type called time containing three members hour, minute, second. Develop a UDF for following task:a. create a function Input() to take input of the time from the user. b. Create a function Display() to display the time entered by user. c. Create a function Validate() that accepts one argument of time type and return 0 if it is a valid, otherwise it returns 1.\n");
	struct time t;
	t=Input();
	Display(t);
	return 0;
}
struct time Input(void)
{
	struct time t1;
	printf("Enter Time in hour minute and second frequently : ");
	scanf("%d %d %d",&t1.h,&t1.m,&t1.s);
	return t1;
}
void Display(struct time t2)
{
	int res;
	res=Validate(t2);
	if(res==0)
	{
		printf("Entered time in h:m:s = %d:%d:%d is valid",t2.h,t2.m,t2.s);
	}
	else
	{
		printf("Entered time in h:m:s = %d:%d:%d is not valid",t2.h,t2.m,t2.s);
	}
	return;
}
int Validate(struct time t3)
{
	if((t3.h<0)||(t3.m<0)||(t3.s<0)||(t3.h>=24)||(t3.m>=60)||(t3.s>=60))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
