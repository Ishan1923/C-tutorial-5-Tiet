#include <stdio.h>

int main() {
    int arr1[] = {1,2,3};
    int arr2[] = {1,2,3,4};
    int arr3[100];
    int arr4[100];

    int i, j, k, count = 0;

    int size1 = sizeof(arr1)/sizeof(*arr1);
    int size2 = sizeof(arr2)/sizeof(*arr2);

    //________________________________________________________Union__________________________________________________________//

    for(i = 0; i < size1; i++){
        arr3[i] = arr1[i];
    }
    for(i = size1; i < size1 + size2; i++){
        arr3[i] = arr2[i];
    }

    printf("__________\n");

    for(i = 0; i < size1 + size2 - count; ++i){
        for(j = i + 1; j < size1 + size2 - count; ++j){
            if(arr3[i] == arr3[j]){
                ++count;
                for(k = j; k < size1 + size2 - count; k++){
                    arr3[k] = arr3[k+1];
                }
            }
        }
    }

    for(i = 0; i < size1 + size2-count; i++){
        printf("%d\n", arr3[i]);
    }

    //________________________________________________________intersection__________________________________________________________//
    count = 0;
    for (i = 0; i < size1; i++){
        for(j = 0; j < size2; j++){
            if (arr1[i] == arr2[j]){
                arr4[count] = arr1[i];
                count++;
            }
        }
    }
    for(i = 0; i < count; i++){
        printf("%d\n", arr4[i]);
    }

    return 0;
}