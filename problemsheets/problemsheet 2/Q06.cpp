

#include<stdio.h>
#include<string.h>
void concate(char*,char*);
int main()
{
	printf("6) Write user defined function to concatinate two string using pointer.");
	char a[100],b[100];
//	taking input
	printf("\nEnter first string : ");
	scanf("%s",a);
	printf("Enter second string : ");
	scanf("%s",b);
//	displaying input
	printf("First string : %s\tSecond string : %s\n",a,b);
//	concatenating strings
	concate(a,b);
//	displaying concatinated string
	printf("concatenated string = %s",a);
	return 0;
}
void concate(char *a,char *b)
{
	strcat(a,b);
}
