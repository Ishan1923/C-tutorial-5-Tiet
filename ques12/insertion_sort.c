#include <stdio.h>

void main(){
    int a[] = {2,3,1,4,5,0,99,54};

    int size = sizeof(a) / sizeof(*a);

    int i, j, c;

    for(i = 0; i < size; i++){
        if(a[i] > a[i+1]){
            c = a[i];
            for(j = i; j < size; j++){
                a[j] = a[j+1];
            }
            for(j = size; j >= i+1; j--){
                a[j] = a[j-1];
            }
            a[i] = c;
        }
    }

    for(i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
}