#include <stdio.h>

int main(){
    int arr[] = {1,2,34,5,100}, szie = sizeof(arr)/sizeof(*arr), i, max = *arr, min = *arr;
    // linear search
    for( i = 0; i < szie; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    for(i = 0; i < szie; i++){
        if (min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d is the maximum\n ", max);
    printf("%d is the minimun ", min);
    return 0;
}