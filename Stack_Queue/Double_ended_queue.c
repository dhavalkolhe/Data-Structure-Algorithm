#include <stdlib.h>
#include <stdio.h>


#define N 5
int deque[N];
int f=-1, r=-1;

void enqueuefront(int x){
    if((f==0&&r==N-1) ||(f = r+1)){
        printf("Queue is full.");
    }
    else if(f==-1&& r==-1){
        f=r=0;
        deque[f] = x;
    }
    else if(f==0){
        f=N-1;
        deque[f] = x;
    }
    else{
        f--;
        deque[f] = x;
    }
}

void enqueuerear(int x){
    if((f==0&&r==N-1) ||(f = r+1)){
        printf("Queue is full.");
    }
    else if(f==-1&& r==-1){
        f=r=0;
        deque[r] = x;
    }
    else if(r==N-1){
        r = 0;
        deque[r] = x;
    }
    else{
        r++;
        deque[r] = x;
    }
}

void display(){
    int i = f;
    if(f==r==-1){
        printf("Queue Empty.");
    }
    else{
        while(i!=r){
            printf("%d", deque[i]);
            i = (i+1)%N;
        }
        printf("%d", deque[r]);
    }
}

void getfront(){
    if(f==r==-1){
        printf("Queue Empty.");
    }
    else{
        printf("%d", deque[f]);
    }
}

void getrear(){
    if(f==r==-1){
        printf("Queue Empty.");
    }
    else{
        printf("%d", deque[r]);
    }
}

void dequeuefront(){
    if(f==r==-1){
        printf("Queue Empty.");
    }
    else if(f==r){
        f=r=-1;
    }
    else if(f==N-1){
        printf("%d", deque[f]);
        f=0;
    }
    else{
        printf("%d", deque[f]);
        f++;
    }
}

void dequeuerear(){
    if(f==r==-1){
        printf("Queue Empty.");
    }
    else if(f==r){
        f=r=-1;
    }
    else if(r==0){
        printf("%d", deque[r]);
        r=N-1;
    }
    else{
        printf("%d", deque[r]);
        r--;
    }
}

void main(){
    int ch, x;
    while (ch !=6){
        printf("\n***Queue Menu***");
        printf("\n\n1.Enqueuefront\n2.enqueuerear\n3.dequeuefront\n4.dequeuerear\n5.display\n6.getfront\n7.getrear\n6.exit");
        printf("\n\nEnter your choice(1-6):");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                printf("Enter element: ");
                scanf("%d", &x); 
                enqueuefront(x);
                break;
            case 2: 
                printf("Enter element: ");
                scanf("%d", &x);
                enqueuerear(x);
                break;
            case 3: dequeuefront();
                break;
            case 4: dequeuerear();
                break;
            case 5: display();
                break;
            case 6: getfront();
                break;
            case 7: getrear();
                break;
            case 8: exit(0);
                break;
            
            default: printf("\n Wrong Choice");
                
        }    
    }

}