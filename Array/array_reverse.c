#include <stdio.h>

int main(void){
    int a[50], num;
    //Reading and printing the initial array//
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
    //Reversing the array//
    int start =0, end = num-1;
    while(start<end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;

    }
    //Printing the reversed array//
    printf("\nThe reversed array is:\n ");
    for(int i=0; i<num; i++){
        printf("%d\t", a[i]);
    }
}
