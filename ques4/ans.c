#include <stdio.h>

int LinearSearch(int arr[], int size, int num){
    int i, index;
    for(i = 0; i < size; i++){
        if (num==arr[i]){
            index = i;
            //printf("\n%d\n", index);
            break;
        }
    }
    printf("position: %d", index);
    return index;
}

void main(){
    int arr[] = {1,2,3,4,5}, num, index;
    printf("enter the number: ");
    scanf("%d", &num);
    LinearSearch(arr, 5, num);
    
}