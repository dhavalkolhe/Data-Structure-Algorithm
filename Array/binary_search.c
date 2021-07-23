#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[50], num;
    printf("Enter the size of array: \n");
    scanf("%d", &num);
    printf("Enter the Elements in an array in ascending order: \n");
    for(int i=0; i<num; i++){
        scanf("%d", &a[i]);
    }
    
    printf("The array is:\n ");
    for(int i=0; i<num; i++){
        printf("%d\t", a[i]);
    }
    int ele, flag=0;
    printf("\nEnter the Element to be searched for: ");
    scanf("%d", &ele);
    
    int max=num-1, min =0;
    
    while(max>=min){
        int mid= (max+min)/2;
        if(a[mid]==ele){
            printf("\nElement found at position:%d", mid+1);
            flag =1;
            break;
        }
        else if(a[mid]>ele){
            max = mid-1;
        }
        else{
            min = mid+1;
        }
        
    }
    if(flag==0){
        printf("Elemenet not FounD!");
    }
    return -1;
}