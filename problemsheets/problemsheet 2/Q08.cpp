#include<stdio.h>
#include<string.h>
void copy(char*,char*);
int main()
{
	printf("8) Write user defined function to copy one string into another using pointer.");
	char a[100],b[100];
//	taking input
	printf("\nEnter first string : ");
	scanf("%s",a);
	copy(a,b);//calling copy function
//	displaying output
	printf("First string : %s\tSecond string : %s\n",a,b);
	return 0;
}
void copy(char *x,char *y)
{
	strcpy(y,x);
}
