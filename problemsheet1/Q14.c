/*
 * Q14.c
 *
 *  Created on: 12-Feb-2024
 *      Author: root
 */


#include<stdio.h>

struct date
{
    int d;
    int m;
    int y;
};

struct date age(struct date d1, struct date d2);
int main()
{
    printf("14. Write a function that takes your birth date as input and display your age in terms year, month and days.(Use Structure for date)\n");
    struct date dob, dot, a;

    printf("Enter dob in (dd mm yyyy) format : ");
    scanf("%d %d %d", &dob.d, &dob.m, &dob.y);
    printf("Enter dot in (dd mm yyyy) format : ");
    scanf("%d %d %d", &dot.d, &dot.m, &dot.y);

    if (dob.y > dot.y || ((dob.y == dot.y) && (dob.m > dot.m)) || ((dob.y == dot.y) && (dob.m == dot.m) && (dob.d > dot.d)))
    {
        printf("Enter valid dates");
        return 0;
    }
    else
    {
        a = age(dob, dot);
        printf("Age is %d years , %d months & %d days old.", a.y, a.m, a.d);
    }
    return 0;
}

struct date age(struct date d1, struct date d2)
{
    struct date age;
    age.y = d2.y - d1.y;

    if (d2.m < d1.m || (d2.m == d1.m && d2.d < d1.d)) {
        age.y--;
    }

    if (d2.m < d1.m) {
        age.m = d2.m + 12 - d1.m;
    } else {
        age.m = d2.m - d1.m;
    }

    if (d2.d < d1.d) {

        int day;
        switch (d1.m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                day = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                day = 30;
                break;
            case 2:

                if ((d1.y % 4 == 0 && d1.y % 100 != 0) || (d1.y % 400 == 0)) {
                    day = 29;
                } else {
                    day = 28;
                }
                break;
        }
        age.m--;
        age.d = d2.d + day - d1.d;
    } else {
        age.d = d2.d - d1.d;
    }

    return age;
}

