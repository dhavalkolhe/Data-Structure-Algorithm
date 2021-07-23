#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
};
struct node *start =NULL; //Head pointer//


//Creating a new node and inserting data//
void create() {
    char ch;
    struct node *new_node, *current;

    do{
        new_node = malloc(sizeof(struct node));
        printf("\nEnter the data: ");
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(start==NULL){
            start=new_node;
            current=new_node;
        }
        else{
            current->next = new_node;
            current = new_node;
        }
        printf("Press n to exit or any other key to continue creating another: ");
        ch = getch();
    }while(ch!='n');
}

//Displaying the  data//
void display(){
    struct node *new_node;
    printf("\n The linked list is: ");
    new_node =start;
    while(new_node!=NULL){
        printf("%d-->", new_node->data);
        new_node = new_node->next;
    }
    printf("NULL");
}


void insert_at_beg(){
    struct node *new_node, *current;

    new_node = malloc(sizeof(struct node));

    if(new_node == NULL){
        printf("\n Failed to allocate memory.");
        exit(0);
    }
    printf("\nEnter the Data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    if(start==NULL){
        start=new_node;
        current = new_node;
    }
    else{
        new_node->next = start;
        start=new_node;
    }
}

void insert_at_end(){
    struct node *new_node,*ptr;
    ptr = start;                              //ptr for tranversing the list //

    new_node = malloc(sizeof(struct node));
    printf("\n Enter the data: ");
    scanf("%d", new_node->data);
    new_node->next = NULL;

    

    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = new_node;

}

void insert_in_mid(){
    int i,pos;
    struct node *new_node,*ptr,*current;
    ptr = start;

    new_node = malloc(sizeof(struct node));
    printf("\n Enter the data: ");
    scanf("%d", new_node->data);
    new_node->next = NULL;

    //Ask for position to input//
    printf("\n Specify the position: ");
    scanf("%d", &pos);

    if(start==NULL){
        start=new_node;
        current=new_node;

    }
    else{
        ptr = start;
        for(i=1; i<pos-1; i++){
            ptr = ptr->next;

        }
        new_node->next = ptr->next;
        ptr->next = new_node;

        
    }

}

void delete_from_end(){
    struct node *ptr,*prev;
    if(start==NULL){
        printf("deletion not possible!");
        exit(0);

    }
    else{
        
        while(ptr->next!=NULL){
            prev = ptr;
            ptr = ptr->next;
        }
    }
    if(prev == NULL){
        start = NULL;
    }
    else{
        prev->next = NULL;
    }
    free(ptr);
}

void delete_first(){
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
    printf("The element deleted Successfully!!");
}

void search(){
    int num, flag=0;
    printf("\nEnter the element to be searched for: ");
    scanf("%d", &num);

    struct node *ptr;
    ptr = start;
    while(ptr!=NULL){
        
        if(ptr->data == num){
            printf("\nElement Found!!!");
            flag = 1;
            exit(0);
        }
        ptr = ptr->next;
    }
   
   if(flag==0){
       printf("Element not found!");
   }
}

void main(){
    create();
    display();

    
}
