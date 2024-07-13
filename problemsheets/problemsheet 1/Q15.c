

#include<stdio.h>
struct date
{
	int d,m,y;
};
int isValiddate(struct date);
int main()
{
	printf("15.Write a function to validate date given by user. The function returns 0 for valid date and returns 1 otherwise.\n");
	struct date d;
	int res;
	printf("Enter date in dd mm yyyy format");
	scanf("%d %d %d",&d.d,&d.m,&d.y);
	res=isValiddate(d);
	if(res==0)
	{
		printf("%d/%d/%d is valid date.",d.d,d.m,d.y);
	}
	else
	{
		printf("%d/%d/%d is unvalid date.",d.d,d.m,d.y);
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
