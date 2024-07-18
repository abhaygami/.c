
#include<stdio.h>
#include<string.h>
int isPalindrome(char*);
int main()
{
	printf("7) Write user defined function to check whether a string is palindrome or not using pointer.");
	int res;
	char str[500];
	printf("\nEnter string to check that string is palindrome or not : ");
	scanf("%s",str);
	res=isPalindrome(str);
	if(res==0)
	{
		printf("%s is palindrome",str);
	}
	else
	{
		printf("%s is not palindrome",str);
	}
}
int isPalindrome(char *s)
{
	int i,j,l=strlen(s);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(*(s+i)!=*(s+j))
		{
			return 1;
		}
	}
	return 0;
}
