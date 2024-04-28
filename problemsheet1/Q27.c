/*
 * Q27.c
 *
 *  Created on: 12-Feb-2024
 *      Author: root
 */


#include <stdio.h>
int fibonacci(int);
void print(int);
int main()
{
	printf("27 . Write user defined function to print Fibonacci series using recursion\n");
    int count;
    printf("Enter number of elements : ");
    scanf("%d",&count);
    print(count);
    return 0;
}
void print(int count)
{
    printf("Fibonacci Series :-  ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
