#include <stdio.h>

void main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int l = sizeof(arr)/sizeof(*arr);

    int i, j;
    int d;
    int temp[l];

    for(i = 0; i < l; i++){
        printf("%d ", arr[i]);
    }

    printf("\nsize = %d", l);

    printf("\n");

    do{
        printf("Enter the number of elements to be rotated:");
        scanf("%d", &d);
    }while(d == l);

    for(i = 0; i < l - d; i++){
        temp[i] = arr[i+d];
        printf("%d\n", arr[i+d]);
    }

    for(i = l - d; i < l; i++){
        temp[i] = arr[i - l + d];
    }

    for(i = 0; i < l; i++){
        printf("%d ", temp[i]);
    }
}