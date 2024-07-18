
#include<stdio.h>
#include<string.h>
int compare(char*,char*);
int main()
{
	printf("5) Write user defined function to compare two string using pointer.");
	int res;
	char a[100],b[100];
//	taking input
	printf("\nEnter first string : ");
	scanf("%s",a);
	printf("Enter second string : ");
	scanf("%s",b);
//	displaying input
	printf("First string : %s\tSecond string : %s\n",a,b);
	res=compare(a,b);//calling compare function
	if(res==0)
	{
		printf("Strings are same ");
	}
	else if(res>0)
	{
		printf("First string > second string ");
	}
	else
	{
		printf("First string < second string ");
	}
	return 0;
}
int compare(char *a,char *b)
{
	int r;
	r=strcmp(a,b);
	return r;
}
