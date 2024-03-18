#include <stdio.h>

void insert(int arr[],int n){
    
    int i, index, val;

    printf("The array is: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("enter the index: ");
    scanf("%d", &index);
    printf("value: ");
    scanf("%d", &val);
    for(i = n; i >= index; i--){
        arr[i+1] = arr[i];
    }

    arr[index] = val;

    printf("now the array is: ");
    for(i = 0; i < n+1; i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    int arr[] = {1,2,3,4,5,6}, n = 6;
    insert(arr, n);
}