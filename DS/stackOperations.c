#include <stdio.h>
#include <stdlib.h>


struct stack {
    int a[10];
    int top;
};

void initialize(struct stack *s) {
    s->top = -1;
}

int isFull(struct stack *s) {
    return s->top >= 9;
}

int isEmpty(struct stack *s) {
    return s->top == -1;
}

void push(struct stack *s, int x) {
    if (isFull(s)) {
        printf("\n*--------------------------*");
        printf("\n| Stack is full .          |");
        printf("\n| Record can't be pushed . |");
        printf("\n*--------------------------*\n");
        return;
    }
    
    s->a[++(s->top)] = x;
    printf("\nOne Record pushed successfully . ");
    printf("\n=================================");
}

void peep(struct stack *s) {
    if (isEmpty(s)) {
        printf("\n*-----------------*");
        printf("\n|Stack is empty . |");
        printf("\n*-----------------*\n");
        return;
    }
    
    printf("\nTop element of stack is %d . ", s->a[s->top]);
    printf("\n=============================");
    printf("\nPeep operation done successfully . ");
    printf("\n===================================");
}

void pop(struct stack *s) {
    if (isEmpty(s)) {
        printf("\n*-------------------------*");
        printf("\n|Stack is empty .         |");
        printf("\n|Record can't be popped . |");
        printf("\n*-------------------------*");
        return;
    }
    
    s->top--;
    printf("\nOne record popped successfully . ");
    printf("\n=================================");
}

void traverse(struct stack *s) {
    if (isEmpty(s)) {
        printf("\n*-----------------*");
        printf("\n|Stack is empty . |");
        printf("\n*-----------------*\n");
        return;
    }
    
    printf("\n-----------------------------------------\n");
    for (int i = 0; i <= s->top; i++) {
        printf("| %d ", s->a[i]);
    }
    printf("\n-----------------------------------------\n");
}

int main() {
    int x, ch;
    struct stack st;

    initialize(&st);
    do {
        printf("\n\n+-----------------------------------------------------+");
        printf("\n| Choices to perform operation on stack of 5 elements |");
        printf("\n| 1) Push an element .                                |");
        printf("\n| 2) Pop an element .                                 |");
        printf("\n| 3) Peep the element .                               |");
        printf("\n| 4) Traverse elements .                              |");
        printf("\n| 0) Exit                                             |");
        printf("\n+-----------------------------------------------------+");
        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("\nEnter an element which you want to push: ");
            scanf("%d", &x);
            push(&st, x);
            break;
        
        case 2:
            pop(&st);
            break;

        case 3:
            peep(&st);
            break;
        
        case 4:
            traverse(&st);
            break;
        
        case 0:
            break;

        default:
            printf("\nEnter a valid choice.");
            break;
        }
    } while (ch != 0);
    
    return 0;
}
