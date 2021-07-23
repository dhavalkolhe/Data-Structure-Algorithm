#include <stdio.h>
#include <stdlib.h>
#include <process.h>

#define length 5
int front = -1, rear =-1,q[length];
void enqueue();
void dequeue();
void peek();
int isempty();

void main(){
    int ch;
    while (ch!=4){
        printf("\n***Queue Menu***");
        printf("\n\n1.Enqueue\n2.Dequeue\n3.display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d", &ch);

        switch(ch){
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: peek();
                break;
            case 4: exit(0);
                break;
            
            default: printf("\n Wrong Choice");
    }

}

void enqueue(){
    int val;
    if(isempty()==1){
        front++;
        rear++;
        printf("Enter element to enqueue:");
        scanf("%d", &val);
        q[rear] = val;

    }
    else if(front==(rear+1)%length){
        printf("\nQueue is full.");
    }
    else{
        rear = (rear+1)%length;
        printf("Enter element to enqueue:");
        scanf("%d", &val);
        q[rear] = val;
    }
}

int isempty(){
    if(front == -1){
        return 1;
    }
    else{
        return 0;
    }
        
    }
}

void dequeue(){
    if(isempty()==1){
        printf("\nQueue is Empty.");
    }
    else if(front==rear){
        front=-1;
        rear=-1;
        printf("\nQueue is Empty.");
    }
    else{
        front = (front+1)%length;
    }

}

void peek(){
    int i = front;
    if(isempty()==1){
        printf("\nQueue is empty.");
    }
    else{
        printf("\nQueue is...\n");
        while(i!=(rear+1)%length){
            printf("%d", q[i]);
            i = (i+1)%length;
        printf("\n");}
        
    }
}
