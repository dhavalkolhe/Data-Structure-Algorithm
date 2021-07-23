#include <stdio.h>

int main(void){
    int a[50], num;
    printf("Enter the size of array: \n");
    scanf("%d", &num);
    printf("Enter the Elements in an array: \n");
    for(int i=0; i<num; i++){
        scanf("%d", &a[i]);
    }
    
    

    int ele, found=0, i=0;
    printf("Enter the element to be searched for: ");
    scanf("%d", &ele);

    for(i; i<num; i++){
        if(a[i] == ele){
            found =1;
            break;
        }
    }

    if(found == 1){
        printf("Element found at position %d", i+1);
    }
    if(found == 0){
        printf("Element not found");
    }

}