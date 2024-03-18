#include <stdio.h>

int AddMatrix(int a[][3], int b[][3], int c[3][3]){
    int i, j;
    // int c[s1][s2];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    return 0;
}

int SubtractMatrix(int a[][3], int b[][3], int c[3][3]){
    int i, j;
    // int c[s1][s2];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    return 0;
}

void main(){
    int m1 = 3, n1 = 3;  //dimesions for 1st 2d array
    int m2 = 3, n2 = 3; //dimensions for 2nd 2d array

    int a[m1][n1], b[m2][n2];

    int c[3][3]; // array for add/subtract
    int multi_c[n1][n2];

    int matrix[][3] = {
        {1, 3, 6},
        {99, 0, 0},
        {1, 9, 2}
    };

    int i, j, k;

    // for(i = 0; i < m1; i++){
    //     for(j = 0; j < n1; j++){
    //         // scanf("%d", &a[i][j]);
    //         a[i][j] = 2;
    //     }
    //     // printf("\n___\n");
    // }

    // for(i = 0; i < m2; i++){
    //     for(j = 0; j < n2; j++){
    //         // scanf("%d", &b[i][j]);
    //         b[i][j] = 2;
    //     }
    //     // printf("\n___\n");
    // }

    // //Multiplying Matrices

    // for(i = 0; i < m1; i++){
    //     for(j = 0; j < n2; j++){
    //         for(k = 0; k < n1; k++){
    //             multi_c[i][j] = a[i][k] * b[k][j];
    //         }
    //     }
    // }

    // for(i = 0; i < n1; i++){
    //     for(j = 0; j < m1; j++){
    //         printf("%d ", multi_c[i][j]);
    //     }
    //     printf("\n");
    // }


    printf("\nTranspose: \n\n     The matrix originally is:\n");
    for(i = 0; i < n1; i++){
        for(j = 0; j < m1; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\n The transpose: \n");
    for(i = 0; i < n1; i++){
        for(j = 0; j < m1; j++){
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

}