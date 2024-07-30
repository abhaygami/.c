#include<stdio.h>

int prio(char);
int isOperator(char);

int main() {
    char in[50],stack[50],post[50];
    int i=0,p=-1,top=-1;
    printf("Enter infix string = ");
    scanf("%[^\n]",in);
    while(in[i]!='\0') {
        if(isOperator(in[i]) ) {
            if(top == -1) {
                stack[++top] = in[i];
            }
            else {
                while((prio(stack[top]) >= prio(in[i])) && top!= -1) {
                    post[++p] = stack[top--];
                }
                stack[++top] = in[i];
            }
        }
        else if(in[i] == '(') {
            stack[++top] = in[i];
        }
        else if(in[i] == ')') {
            while(stack[top] != '(' && top!=-1) {
                post[++p] = stack[top--];
            }
            top--;
        }
        else {
            post[++p] = in[i];
        }
        i++;
    }
    while(top!=-1) {
        post[++p] = stack[top--];
    }
    post[++p] = '\0';
    printf("Postfix noatation = %s\n",post);
    return 0;
}

int prio(char x) {
    switch (x)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    
    default:
        return 0;
    }
}
int isOperator(char c) {
    if((c == '+') || (c == '-') || (c == '*') || (c == '/') || (c == '^')) {
        return 1;
    }
    else {
        return 0;
    }
}