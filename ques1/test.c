#include <stdio.h>

void main(){
    // int i, arr[] = {1,2,3};
    // for(i = 0; i < sizeof(arr)/sizeof(*arr); i++){
    //     printf("%d\n", arr[i]);
    // }

    int a = 2, b = 3;
    printf("%d %d", a, b);
    
    a += b;
    b = a - b;
    a = a - b;

    printf("%d %d", a, b);

}