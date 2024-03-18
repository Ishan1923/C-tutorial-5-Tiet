#include <stdio.h>

void main(){
    int arr[] = {1,2,3,4,5};
    int i, sum = 0, avg, n = sizeof(arr)/sizeof(*arr);
    for(i=0; i < n; i++){
        sum += arr[i];
    }
    avg = sum/n;
    printf("%d %d", sum, avg);

}