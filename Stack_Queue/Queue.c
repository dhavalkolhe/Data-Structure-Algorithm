#include <stdio.h>
#include <stdlib.h>
#include <process.h>

#define max 5

int front = -1, rear =-1,q[max];
void enqueue();
void dequeue();
void display();

void main(){
    int ch;
    while (ch !=4){
        printf("\n***Queue Menu***");
        printf("\n\n1.Enqueue\n2.Dequeue\n3.display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d", &ch);

        switch(ch){
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: exit(0);
                break;
            
            default: printf("\n Wrong Choice");
                
        }    
    }
}

void enqueue(){
    
    int val;
    if(rear==max-1){
        printf("\nOverflow!!!");}
    if(front==-1){
        front=0;
    }
    else
    {
        printf("Enter element to enqueue:");
        scanf("%d", &val);
        rear++;
        q[rear] = val;

    }
}

void dequeue(){
    if(front == -1 || front>rear){
        printf("\nQueue Underflow");
    }
    else{
        printf("\n element deleted from queue is %d\n", q[front]);
        front++;

    }

}

void display(){
    int i;
    if(front ==-1){
        printf("Queue is empty!!");

    }
    else{
        printf("\nQueue is...\n");
        for(i=front; i<=rear;i++){
            printf("%d", q[i]);
        printf("\n");
        }
    }
}
