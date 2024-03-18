#include <stdio.h>

void main(){
    int a = 3, b =3;
    int arr[a][b];
    int i, j;
    for (i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            arr[i][j] = 1;
        }
    }
    for (i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}