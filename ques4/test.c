#include <stdio.h>

void main(){
    int arr[] = {1,2,3,4,5};
    printf("\n%d", *arr + 3);
    printf("\n%d", sizeof(arr)/sizeof(*arr));
}