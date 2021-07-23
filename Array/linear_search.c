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

    int ele, i=0, flag =0;
    printf("\nEnter the element to be searched:\n ");
    scanf("%d", &ele);
    for(i; i<num; i++){
        if(a[i]==ele){
            printf("\nElement found at location:\n%d", i+1);
            flag =1;
        }
    }
    if(flag==0){
        printf("\nElement not found!");
    }
}
