#include <stdio.h>

int BinarySearch(int* arr, int size, int num){
    int i, index, start, end;
    start = 0;
    end = size-1;
    int done = 0;
    do{
        if(start == end){
            printf("Value Dont Exist");
            break;
        }
        else if(num == arr[(start+end)/2]){
            index = (start+end)/2;
            done = 1;
        }
        else{
            if(num < arr[(start+end)/2]){
                end = (start+end)/2;
            }
            else{
                start = (start+end)/2;
            }
        }
        
    }while(done!=1);
    return index;
}

void main(){
    int arr[] = {1,2,3,4};
    
    int pos = BinarySearch(arr, 4, 5);
    printf("%d", pos);
}