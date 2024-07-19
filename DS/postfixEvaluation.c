#include<stdio.h>
int main() {
    char a[50];
    printf("\nEnter your Postfix string : ");
    scanf("%s",a);
    int i,arr[20],top=-1;
    for(i=0;a[i]!='\0';i++) {
        if((a[i] == '+')||(a[i] == '-')||(a[i] == '*')||(a[i] == '/')) {
            if(i<2) {
                printf("\n%c opration can't be done at %d ",a[i],i);
                printf("\n=================================");
                return 0;
            }
            else {
                if(a[i] == '+') {
                    int n2 = arr[top];
                    top--;
                    int n1 = arr[top];
                    int ans =n1+n2;
                    arr[top] = ans;
                    // printf("\n+ operation has been done . ");
                }
                else if(a[i] == '-') {
                    int n2 = arr[top];
                    top--;
                    int n1 = arr[top];
                    int ans =n1-n2;
                    arr[top] = ans;
                    // printf("\n- operation has been done . ");
                }
                else if(a[i] == '*') {
                    int n2 = arr[top];
                    top--;
                    int n1 = arr[top];
                    int ans =n1*n2;
                    arr[top] = ans;
                    // printf("\n* operation has been done . ");
                }
                else {
                    int n2 = arr[top];
                    top--;
                    int n1 = arr[top];
                    int ans =n1/n2;
                    arr[top] = ans;
                    // printf("\n/ operation has been done . ");
                }
            }
        }
        else {
            int n;
            printf("\nEnter value of %c = ",a[i]);
            scanf("%d",&n);
            top++;
            arr[top]=n;
        }
    }
    printf("\nFinal output = %d ",arr[0]);
    top--;
    return 0;
}
