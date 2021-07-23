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

    int ele, location;
    printf("\n Enter the element to be inserted: ");
    scanf("%d", &ele);
    printf("Enter the location to be inserted at: ");
    scanf("%d", &location);

    for(int j = num; j>= location; j--){
        a[j] = a[j-1];
    }
    num++;
    a[location-1] = ele;

    printf("\n The Modified array is: ");
    for(int i=0; i<num; i++){
        printf("%d\t", a[i]);
    }

    return 0;
}