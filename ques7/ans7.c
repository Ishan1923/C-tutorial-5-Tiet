#include <stdio.h>

void MergeArrays(int a1[], int a2[], int a, int b){
    int c[a+b], i;
    for(i = 0; i < a; i++){
        c[i] = a1[i];
    }
    for(i = a; i < a+b; i++){
        c[i] = a2[i];
    }
    for(i = 0; i < a+b; i++){
        printf("%d, ", c[i]);
    }
}

void main(){
    int arr1[] = {2,3,4,5}, arr2[] = {6,7,8,9};
    int s1 = sizeof(arr1)/sizeof(*arr1), s2 = sizeof(arr2)/sizeof(*arr2);
    MergeArrays(arr1, arr2, s1, s2);
}