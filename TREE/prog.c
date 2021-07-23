#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

struct node{
    int data;
    struct node *left, *right;
};
struct node *create();

void main(){
    struct node *root;
    root =0;
    root=create();
}

struct node *create(){
    int x;
    struct node *newnode;
    newnode = malloc(sizeof(struct node));
    printf("Enter data (-1 for no node): ");
    scanf("%d",&x);

    if(x==-1){
        return 0;
    }

    newnode->data = x;
    printf("Enter left child of %d\n", x);
    newnode->left = create();
    printf("Enter right child of %d\n", x);
    newnode->right = create();
    
    return newnode;
}
