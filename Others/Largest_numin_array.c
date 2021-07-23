#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i = 1;
    double a[5] = {2, 4, 6, 8, 10};
    int max = a[0];
    for(i; i<5; i++){
        if(max < a[i]){
            max = a[i];
        }

    }
    printf("largest integer in the array is %d", max);
    return max;

}
