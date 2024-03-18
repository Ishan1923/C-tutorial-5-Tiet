#include <stdio.h>

void main(){
    int size, i, j, c, max;
    printf("enter the size of input: ");
    scanf("%d", &size);

    float inp[size];
    int count[size];

    float mean = 0, mode = 0, median = 0;

    for(i = 0; i < size; i++){
        scanf("%f", &inp[i]);
        count[i] = -1;
    }

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size - i; j++){
            if(inp[j] > inp[j+1]){
                inp[j] += inp[j+1];
                inp[j+1] = inp[j] - inp[j+1];
                inp[j] = inp[j] - inp[j+1];
            }
        }
    }

    //mean
    mean = 0;
    for(i = 0; i < size; i++){
        mean+=inp[i];
    }
    mean/=size;
    printf("Mean: %f", mean);


    //mode
    for(i = 0; i < size; i++){
        c = 1;
        for(j = i + 1; j < size; j++){
            if(inp[j] == inp[i]){
                c++;
                count[j] = 0;
            }
        }
        if(count[i] != 0){
            count[i] = c;
        }    
    }

    max = count[0];
    mode = inp[0];
    for(i = 0; i < size; i++){
        if(max < count[i]){
            mode = inp[i];
        }
    }

    printf("\nmode: %f", mode);

    //median
    if(size%2!=0){
        median = inp[size/2];
    }
    else{
        median = (inp[size/2] + inp[size/2 + 1])/2;
    }

    printf("\nmedian = %f", median);

}