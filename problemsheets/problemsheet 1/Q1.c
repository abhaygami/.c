/*
 * Q1.c
 *
 *  Created on: 12-Feb-2024
 *      Author: root
 */


#include <stdio.h>

struct census

{

    char name[20];

    int pop;

    float lit;

};

struct census input(void);

void print(struct census);

void nsort(struct census[], int);

void lsort(struct census[],int);

void psort(struct census[],int);

int main()

{

     printf("1. Define a structure named Census with the following three members:\n\t- city name\n\t- population of the city\n\t- literacy level\n\tWrite a program to perform following tasks:\n\t-To read details for 10 city\n\t- To sort the list alphabetically\n\t-To sort the list based on literacy level\n\t-To sort the list based on population\n\t- To display sorted list\n");

    struct census c[10];

    int i;

    for (i = 0; i < 10; i++)

    {

        c[i] = input();

    }

    printf("\nEntered data:\n");

    for (i = 0; i < 10; i++)

    {

        print(c[i]);

    }

    nsort(c, 3);

    printf("\n\nAfter alphabetically sorting:\n");

    for (i = 0; i < 10; i++)

    {

        print(c[i]);

    }

    lsort(c, 10);

    printf("\n\nAfter litracy sorting:\n");

    for (i = 0; i < 10; i++)

    {

        print(c[i]);

    }

    psort(c, 10);

    printf("\n\nAfter sorting:\n");

    for (i = 0; i < 10; i++)

    {

        print(c[i]);

    }

    return 0;

}

struct census input(void)

{

    struct census c1;

    printf("Enter city name, population, literacy level: ");

    scanf("%s %d %f", c1.name, &c1.pop, &c1.lit);

    return c1;

}

void print(struct census c2)

{

    printf("\nName:%s Population:%d Literacy:%f", c2.name, c2.pop, c2.lit);

    return;

}

void nsort(struct census a[], int n)

{

    struct census temp;

    int j, i;

    for (i = 0; i < n; i++)

    {

        for (j = i + 1; j < n; j++)

        {

            if (a[i].name[0] > a[j].name[0])

            {

                temp = a[i];

                a[i] = a[j];

                a[j] = temp;

            }

        }

    }

    return;

}

void lsort(struct census a[],int n)

{

    struct census temp;

    int j, i;

    for (i = 0; i < n; i++)

    {

        for (j = i + 1; j < n; j++)

        {

            if (a[i].lit < a[j].lit)

            {

                temp = a[i];

                a[i] = a[j];

                a[j] = temp;

            }

        }

    }

    return;

}

void psort(struct census a[],int n)

{

    struct census temp;

    int j, i;

    for (i = 0; i < n; i++)

    {

        for (j = i + 1; j < n; j++)

        {

            if (a[i].pop > a[j].pop)

            {

                temp = a[i];

                a[i] = a[j];

                a[j] = temp;

            }

        }

    }

    return;

}
