#include <stdio.h>

int main(void){
    int a[50], num;
    printf("Enter the size of array: \n");
    scanf("%d", &num);
    printf("Enter the Elements in an array: \n");
    for(int i=0; i<num; i++){
        scanf("%d", &a[i]);
    }
    
    printf("The array is:\n ");
    for(int i=0; i<num; i++){
        printf("%d\t", a[i]);
    }

    int location;
    printf("\nEnter the location of element to be deleted: \n");
    scanf("%d", &location);

    for(int j = location; j<= num; j++){
        a[j-1] = a[j];
    }
    num--;

    printf("Element deleted Succesfully!\nThe modified array is:\n ");
    for(int i=0; i<num; i++){
        printf("%d\t", a[i]);
    }

    return 0;


}