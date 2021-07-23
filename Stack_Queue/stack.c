#include <stdio.h>
#include <stdlib.h>
#include <process.h>

#define max 5

int top=-1,stack[max];
void push();
void pop();
void isempt();
void isfull();
void display();


void main(){
    int ch;
    while (ch !=4){
        printf("\n***Stack Menu***");
        printf("\n\n1.Push\n2.Pop\n3.display\n4.Exit\n5.isempt\n6.isfull");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d", &ch);

        switch(ch){
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: exit(0);
                break;
            case 5: isempt();
                break;
            case 6: isfull();
                break;

            default: printf("\nWrong Choice");

    }
    

    }
}

void push(){
    int val;
    if(top==max-1){
        printf("\nStack is Full!!");

    }
    else{
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top++;
        stack[top] = val;
        
    }
}

void pop()
{
    int val;
    
    if(top==-1){
        printf("\nStack is empty!!");
    }
    else{
        printf("\nDeleted value is %d", stack[top]);
        top--;

    }
}

void display(){
    int i;
    if(top==-1){
        printf("\nStack is Empty!!");
    }
    else{
        printf("\nStack is...\n");
        for(i=top; i>=0;--i){
            printf("%d\n", stack[i]);
        }
    }
}

void isempt(){
    if(top==-1){
        printf("Yes. The stack is empty.");

    }
    else{
        printf("False.");
    }
    
}

void isfull(){
    if(top==max-1){
        printf("Yes. The stack is full.");
    }
    else{
        printf("False.");
    }
}
