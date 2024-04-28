/*
 * Q4.c
 *
 *  Created on: 12-Feb-2024
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
struct book {
    int accession;
    char title[20];
    char author[20];
    int prise;
    int issued;
};

struct book input(void);
void print(struct book);
void looktitle();
void lookend();

int main() {
    int ch, adder ;// ch use of choice if swhich case , addder use for case 1 for add book up to n;
    int cnt = 0;  // use for case 3 else condaction.
    int maxbook = 100; // use for max capacity of book
    char str[20]; // use for case 3 author name & case 4 book name
    struct book l[maxbook] , temp; // temp is use for case 6 shorting
    int size = 0;

    while(1) {
        printf("\n\n-------------------------------------------------------------------");
        printf("\n1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of a given author\n");
        printf("4. List the title of a specified book\n");
        printf("5. List total number of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("-------------------------------------------------------------------");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch(ch) {
            //Add book
            case 1:
                printf("How many books do you want to enter: ");
                scanf("%d", &adder);
                if(size < maxbook) {
                    for(int i = 0; i < adder; i++) {
                        printf("\nEnter data for book %d:\n", size + i + 1);
                        l[size + i] = input();
                    }
                    size = size + adder;
                } else {
                    printf("This program cannot hold more than 100 books.\n");
                }
                break;

            //display
            case 2:
                looktitle();
                for(int i = 0; i < size; i++) {
                    print(l[i]);
                }
                lookend();
                break;

            // books by other
            case 3:
                printf("Enter Author Name :");
                scanf("%s",str);
                for(int i = 0 ; i < size ; i++){
                    if(strcmp(l[i].author,str) == 0){
                        cnt = 1;
                    }
                }
                if(cnt == 0){
                    printf("No book found of %s Author.\n",str);
                } else {
                    looktitle();
                    for(int i = 0 ; i < size ; i++){
                        if(strcmp(l[i].author,str) == 0){
                            print(l[i]);
                            cnt = 1;
                        }
                    }
                lookend();
                }
                cnt = 0;
                break;

            // specified book
            case 4:
                printf("Enter Book name : ");
                scanf(" %[^\n]s",str);
                for(int i = 0 ; i < size ; i++){
                    if(strcmp(l[i].title,str) == 0){
                        cnt = 1;
                    }
                }
                if(cnt == 0){
                    printf("No book found of %s Author.\n",str);
                } else {
                    looktitle();
                    for(int i = 0 ; i < size ; i++){
                        if(strcmp(l[i].title,str) == 0){
                            print(l[i]);
                            cnt = 1;
                        }
                    }
                    lookend();
                }
                cnt = 0;
                break;

            // no of book
            case 5:
            printf("total no. of books in the library is : %d\n",size);
            break;

            //book in accession number order (short)
            case 6:
            printf("Books in Accending order :\n");
            for(int i = 0 ; i < size ; i++){
                for(int j = 0 ; j < size ; j++){
                    if(l[i].accession < l[j].accession){
                        temp = l[j];
                        l[j] = l[i];
                        l[i] = temp;
                    }
                }
            }
            //print
             looktitle();
            for(int i = 0 ; i < size ; i++){
                print(l[i]);
            }
            lookend();
            break;

            case 7:
                printf("Exit From Program.\n");
                return 1;
            default:
                printf("Please enter a valid option.\n");
                break;
        }
    }

    return 0;
}

struct book input(void) {
    struct book b;

    up1:
    printf("Enter book accession number: ");
    scanf("%d", &b.accession);
    if(b.accession <= 0) {
        printf("\nEnter a valid accession number.\n");
        goto up1;
    }

    printf("Enter book title: ");
    scanf("%s", b.title);

    printf("Enter book author: ");
    scanf("%s", b.author);

    up2:
    printf("Enter book price: ");
    scanf("%d", &b.prise);
    if(b.prise < 0) {
        printf("\nEnter a valid price.\n");
        goto up2;
    }

    up3:
    printf("Enter 1 if issued, else enter 0: ");
    scanf("%d", &b.issued);
    if(b.issued != 1 && b.issued != 0) {
        printf("\nEnter a valid issued number.\n");
        goto up3;
    }

    return b;
}

void print(struct book b) {
    printf("|%d\t\t|%s\t\t|%s\t\t|%d\t\t|%s\t\t|\n", b.accession, b.title, b.author, b.prise, b.issued ? "No" : "Yes");
}

void looktitle(){
    printf("---------------------------------------------------------------------------------\n");
    printf("|accession No.\t|Books Title\t|Author Name\t|Prise\t\t|Issued Status\t|\n");
    printf("---------------------------------------------------------------------------------\n");
    return;
}
void lookend(){
    printf("---------------------------------------------------------------------------------\n");
    return;
}
