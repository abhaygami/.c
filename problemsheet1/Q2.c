/*
 * Q2.c
 *
 *  Created on: 12-Feb-2024
 *      Author: root
 */


#include<stdio.h>
struct player{
    char name[20];
    char team[20];
    float average;
};
struct player input(void);
void print(struct player);
void shor(struct player [],int);
int main(){
    printf("2. Define a structure called cricket that will describe the following information:(Player name, Team name, batting average) Using cricket, declare an array player with 20 elements and write a program to read the information about all the 20 players and print a team-wise list containing names of players with their batting average.\n");
    int size = 5;
    struct player p[size];
    //input
    for(int i = 0 ; i < size ; i++){
        printf("\nEnter %d player data:\n",i+1);
        p[i] = input();
    }
    //output
    printf("Entered Data :\n");
    //printf("-----------------------------------------------------------------\n");
    printf("Player Name\t\tTeam Name\tbatting average\t\n");
    //printf("-----------------------------------------------------------------\n");
    for(int i = 0 ; i < size ; i++){
        print(p[i]);
    }
    //printf("-----------------------------------------------------------------\n");
    //short team wise
    printf("\nTeam wise player name:\n");
    printf("Player Name\t\tTeam Name\tbatting average\t\n");
    // printf("-----------------------------------------------------------------\n");
    shor(p,size);
    for(int i = 0 ; i < size ; i++){
        print(p[i]);
    }
    // printf("-----------------------------------------------------------------\n");
    return 0;
}
struct player input(void){
    struct player p;
    printf("Enter player Name :");
    scanf("%s",p.name);
    printf("Enter Team Name :");
    scanf("%s",p.team);
    up2:
    printf("Enter Average :");
    scanf("%f",&p.average);
    if(p.average< 0){
        printf("Enter Valid average.\n");
        goto up2;
    }
    return p;
}
void print(struct player p){
    printf("%s\t\t\t%s\t\t%f\t\t\n",p.name,p.team,p.average);
}

void shor(struct player p[],int size){
    struct player temp;
        for(int i = 0 ; i < size ; i++){
            for(int j = 0 ; j < size ; j++){
                if(p[i].team[0] < p[j].team[0]){
                    temp = p[j];
                    p[j] = p[i];
                    p[i] = temp;
                }
            }
        }
    return;
}
