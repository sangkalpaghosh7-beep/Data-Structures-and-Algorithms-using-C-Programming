/*Write a program in C to represent the monotonic decreasing stack*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int top = -1, i;
int stack[MAX];

void push(int value){
    if(top == MAX - 1){
        printf("Stack Overflow!\n");
    }else{
        stack[++top] = value;
        printf("\nInserted : %d\n",value);
    }
}
void pop(){
    if(top == -1){
        printf("Stack Underflow!\n");
    }else{
        printf("Deleted : %d\n",stack[top]);
        top--;
    }
}
void display(){
    if(top == -1){
        printf("Stack is empty!");
    }else{
        printf("\n--MONOTONIC STACK MENU (top to bottom)--\n");
        for(i = top; i >= 0; i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){

    int choice,value;
    printf("\n--MONOTONIC DECREASING STACK MENU--\n");
    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");

    while(1){
        printf("\nYour choice = ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                printf("Enter value = ");
                scanf("%d",&value);

                while(top != -1 && stack[top] <= value){

                    pop();
                }
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0); 
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}