#include <stdio.h>
#include <stdlib.h>
#include <process.h>

struct Node{
    int data;
    struct Node *next;    
}
*top = NULL;

void push(int);
void pop();
void display();


void main(){
    int ch, value;
    while (ch !=4){
        printf("\n***Stack Menu***");
        printf("\n\n1.Push\n2.Pop\n3.display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d", &ch);

        switch(ch){
            case 1: 
                printf("\nEnter the value to be inserted: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2: pop();
                break;
            case 3: display();
                break;
            case 4: exit(0);
                break;
            

            default: printf("\nWrong Choice");

        }
    }                                                   //The node above will contain the address of node below//
                                                        //and the top pointer will contain the adress of topmost node in the stack//
}                                                       //The bottomost node will contain NULL as the pointer// 

void push(int value){
    struct Node *newNode;
    newNode = malloc(sizeof(struct Node));
    newNode->data = value;

    if(top == NULL){
        newNode->next = NULL;
    }
    else{
        newNode->next  = top;              //Since top initially stores the address of previous node.//                                            
    }                                      // Now new Node will contain the address of previous node//
    top=newNode;                            //and top will contain the address of newnode since it is the note at top of the stack//           
    
    
    printf("Insertion is succesfull!!!");

}

void pop(){
    if(top==NULL){
        printf("\nStack is Empty.");
    }
    else{
        struct Node *temp = top;
        printf("\nDeletd element: %d", temp->data);
        top = temp->next;
        free(temp);
    } 
}

void display(){
    if(top==NULL){
        printf("Stack is Empty.");
    }
    else{
        struct Node *temp = top;
        while(temp->next != NULL){
            printf("%d-->", temp->data);
            temp = temp->next;
        }
        printf("%d-->NULL", temp->data);
    } 
}
