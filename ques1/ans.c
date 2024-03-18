#include <stdio.h>

void fun1(int arr[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i = 0; i < n/2; i++){
        arr[i] += arr[n-i-1];
        arr[n-i-1] = arr[i] - arr[n-i-1];
        arr[i] = arr[i] - arr[n-i-1];
    }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    int lst[5] = {1,2,3,4,5}, n = sizeof(lst)/sizeof(*lst);
    fun1(lst, n);
}