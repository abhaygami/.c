
#include<stdio.h>
struct date
{
	int d,m,y;
};
int compare(struct date , struct date);
int isValiddate(struct date d1);
int main()
{
	printf("16. Write a function that compares two given dates. If the dates are equal then it must return 0 else return 1. (Use Structure for date)");
	struct date d1,d2;
	int res;
	printf("\nEnter first date in dd mm yyyy format = ");
	scanf("%d %d %d",&d1.d,&d1.m,&d1.y);
	printf("Enter second date in dd mm yyyy format = ");
	scanf("%d %d %d",&d2.d,&d2.m,&d2.y);
	res=compare(d1,d2);
	if(res==0)
	{
		printf("Both dates are same.");
	}
	else if(res==3)
	{
		return 0;
	}
	else
	{
		printf("Both dates are different.");
	}
	return 0;
}
int compare(struct date d3,struct date d4)
{
	int a,b;
	a=isValiddate(d3);
	b=isValiddate(d4);
	if(a==1||b==1)
	{
		printf("Enter valid date.");
		return 3;
	}
	else
	{
		if((d3.d==d4.d)&&(d3.m==d4.m)&&(d3.y==d4.y))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
int isValiddate(struct date d1)
{
	if((d1.d<=0)||(d1.m<=0)||(d1.y<=0)||(d1.m>=13)||(d1.y>=9999)||(((d1.m==1)||(d1.m==3)||(d1.m==5)||(d1.m==7)||(d1.m==8)||(d1.m==10)||(d1.m==12))&&(d1.d>31))||(((d1.m==4)||(d1.m==6)||(d1.m==9)||(d1.m==11))&&(d1.d>30))||(((d1.y%4==0)&&(d1.m==2))&&(d1.d>29))||(((d1.y%4!=0)&&(d1.m==2))&&(d1.d>28)))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
