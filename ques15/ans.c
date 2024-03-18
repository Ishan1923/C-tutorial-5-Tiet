#include <stdio.h>

void main(){
    int num = 9;
    int temp = num;
    int count = 0;
    int bnum[100], hexnum[100], octnum[100];
    int i;

    // printf("enter the decimal number: ");
    // scanf("%d", &num);

    // num = 9;

    while(temp!=0){
        bnum[count] = temp%2;
        temp /= 2;
        count++;
    }

    printf("binary number: ");
    for(i = count-1; i >= 0; i--){
        printf("%d", bnum[i]);
    }

    temp = num;
    count = 0;
    while(temp != 0){
        octnum[count] = temp%8;
        temp/=8;
        count++;
    }
    printf("\n");
    printf("octal number: ");
    for(i = count-1; i >= 0; i--){
        printf("%d", octnum[i]);
    }
}