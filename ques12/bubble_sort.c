#include <stdio.h>

void main(){
    int a[] = {1,2,99,0,100,1000};

    int size = sizeof(a)/sizeof(*a);

    int i, j, c;

    for(i = 0; i < size; i++){
        for(j = 0; j < size - i; j++){
            if(a[j] > a[j+1]){
                // c = a[j] ;
                // a[j] = a[j+1];
                // a[j+1] = c;

                a[j] += a[j+1];
                a[j+1] = a[j] - a[j+1];
                a[j] = a[j] - a[j+1];
            }
        }
    }

    for(i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
}