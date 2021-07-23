#include <stdio.h>
#include <stdlib.h>
#include <process.h>



//Deleted from front and inserted at rear//
struct node{
    int data;
    struct node *next;
};
struct node *front = NULL;  //Two pointers so that we dont have to traverse complete linked list//
struct node *rear = NULL;   //And main the time complexity of 1//


void enqueue();
void dequeue();
void display();
void peek();

void main(){
    int ch;
    while (ch !=5){
        printf("\n***Queue Menu***");
        printf("\n\n1.Enqueue\n2.Dequeue\n3.display\n4.Peek\n5.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d", &ch);

        switch(ch){
            case 1: enqueue();
                break;
            case 2: dequeue();
                break;
            case 3: display();
                break;
            case 4: peek();
                break;
            case 5: exit(0);
                break;
            
            default: printf("\n Wrong Choice");
                
        }    
    }
}

void enqueue(){
    int x;
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    printf("Enter the element to insert: ");
    scanf("%d", &x);
    newnode->data = x;
    newnode->next = 0;

    if(front ==0 && rear ==0){
        front=rear=newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }    
}

void display(){
    struct node *temp = 0;
    if(front==0 && rear == 0){
        printf("\nQueue is Empty.");
    }
    else{
        temp = front;
        while(temp!=0){
            printf("\n%d", temp->data);
            temp = temp->next;
        }
        
    }
}


void dequeue(){
    struct node *temp;
    if(front==0 && rear ==0){
        printf("Queue is Empty");

    }
    else{
        temp = front;
        front = temp->next;
        printf("Deleted element is: %d", temp->data);
        free(temp);
    }
}

void peek(){
    if(front==0 && rear ==0){
        printf("Empty");
    }
    else{
        printf("The topmost element is: %d", front->data);
    }
}
