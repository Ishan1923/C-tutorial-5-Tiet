#include <stdio.h>

void DeleteArr(int arr[],int n){
    int i, val, index;
    printf("the array is: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nenter the value to be deleted: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++){
        if (val == arr[i]){
            index = i;
            break;
        }
    }

    for (i = index; i < n; i++){
        arr[i] = arr[i+1];
    }

    printf("The array now is: ");
    for (i = 0; i < n-1; i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    int arr[] = {1,2,3,4,5}, n = 5;
    DeleteArr(arr, n);
}