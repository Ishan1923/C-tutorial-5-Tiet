#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,4,1,5,2,3,5};
    int size = sizeof(arr)/sizeof(*arr);

    int i, j, k, count = 0;

    for (i = 0; i < size - count; i++){
        for(j = i + 1; j < size - count; j++){
            if(arr[i] == arr[j]){
                for(k = j; k < size - count; k++){
                    arr[k] = arr[k+1];
                }
                count++;
            }
        }
    }

    for (i = 0; i < size - count; i++){
        printf(" %d ", arr[i]);
    }
}