/*
 * Q3.c
 *
 *  Created on: 12-Feb-2024
 *      Author: root
 */


#include <stdio.h>

struct hotel {
    char name[20];
    char address[50];
    char grade;
    int charge;
    int room;
};

struct hotel input(void);
void print(struct hotel);
void grade(struct hotel[], int);
void charge(struct hotel[], int);

int main() {
    int size, ch;
    printf("How Many Hotel Detail informaction want to enter :");
    scanf("%d",&size);
    struct hotel h[size];

    // Input
    for (int i = 0; i < size; i++) {
        printf("\nEnter %d Hotel data:\n", i + 1);
        h[i] = input();
    }
    mainup1:
    printf("\nPress 1: To print out hotels of a given grade in order of charges\n");
    printf("Press 2: To print out hotels with room charges less than a given value\n");
    printf("Press 3: Exit");
    printf("\nEnter Here :");
    scanf("%d", &ch);
    printf("\n\n");
    switch (ch){
        case 1:
            //To print out hotels of a given grade in order of charges.
            grade(h, size);
            break;
        case 2:
            //To print out hotels with room charges less than a given value.
            charge(h, size);
            break;
        case 3:
            goto down;
        default:
            printf("Enter Valid Choice.\n");
    }
    goto mainup1;
    down:
    return 0;
}

struct hotel input(void) {
    struct hotel h;
    printf("Enter Hotel Name: ");
    scanf("%s", h.name);
    printf("Enter Hotel address: ");
    scanf("%s", h.address);
    printf("Enter Grade: ");
    scanf(" %c", &h.grade);
up1:
    printf("Enter Room Charge: ");
    scanf("%d", &h.charge);
    if (h.charge <= 0) {
        printf("\nEnter Valid Charge\n");
        goto up1;
    }
up2:
    printf("Enter Room Number: ");
    scanf("%d", &h.room);
    if (h.room <= 0) {
        printf("\nEnter Valid Room Number\n");
        goto up2;
    }
    return h;
}

void print(struct hotel h) {
    printf("|%s\t\t\t|%s\t\t\t\t|%c\t\t|%d\t\t|%d\t\t|\n", h.name, h.address, h.grade, h.charge, h.room);
}

void grade(struct hotel h[], int size) {
    char c;
//    int max = h[0].charge;

    struct hotel temp;
    printf("Enter Grade: ");
    scanf(" %c", &c);

    // Sort by charge
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (h[i].charge > h[j].charge) {
                temp = h[j];
                h[j] = h[i];
                h[i] = temp;
            }
        }
    }
    // Print grade
    int cnt = 0;
    printf("\nHotels with %c Grade :\n", c);
    for (int i = 0; i < size; i++) {
        if (c == h[i].grade) {
//            printf("|%s\t\t\t|%s\t\t\t\t|%c\t\t|%d\t\t|\n", h[i].name, h[i].address, h[i].grade, h[i].charge);
            cnt = 1;
        }
    }
    if(cnt == 0){
        printf("No hotels found in your Budget.\n");
    } else {
        printf("-----------------------------------------------------------------------------------------\n");
        printf("|Hotel Name\t\t|Hotel Address\t\t\t|Grade\t\t|Charges\t|\n");
        printf("-----------------------------------------------------------------------------------------\n");
        for (int i = 0; i < size; i++) {
            if (c == h[i].grade) {
            printf("|%s\t\t\t|%s\t\t\t\t|%c\t\t|%d\t\t|\n", h[i].name, h[i].address, h[i].grade, h[i].charge);
            }
          }
        printf("-----------------------------------------------------------------------------------------\n");
    }
}

void charge(struct hotel h[], int size) {
    int charge;

    printf("\nEnter Maximum Charge: ");
    scanf("%d", &charge);

    // Sort by charge (descending order)
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size; j++) {
            if (h[j].charge > h[i].charge) {
                struct hotel temp = h[j];
                h[j] = h[i];
                h[i] = temp;
            }
        }
    }

    int cnt = 0;
    printf("Hotels with charges less than or equal to %d:\n", charge);
    for (int i = 0; i < size; i++) {
        if (charge <= h[i].charge) {
            cnt = 1;
        }
    }
    if (cnt == 0) {
        printf("No hotels found in your Budget.\n");
    } else {
         printf("---------------------------------------------------------------------------------------------------------\n");
         printf("|Hotel Name\t\t|Hotel Address\t\t\t|Grade\t\t|Charges\t|Total Room\t|\n");
         printf("---------------------------------------------------------------------------------------------------------\n");
         for (int i = 0; i < size; i++) {
            if (h[i].charge <= charge) {
                 print(h[i]);
                 cnt = 1;
            }
         }
         printf("---------------------------------------------------------------------------------------------------------\n");
    }
}
