#include<stdio.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void rotate(int matrix[][4], int matrixRowSize, int matrixColSize) {
    int i, j, t;
    for(i = 0 ; i < matrixRowSize ; i++) {
        for(j = 0 ; j < matrixColSize ; j++) {
            if(i < j) {
                t = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = t;
            }
        }
    }

    for(i = 0 ; i < matrixRowSize ; i++) {
        for(j = 0 ; j < matrixColSize / 2 ; j++) {
            t = matrix[i][j];
            matrix[i][j] = matrix[i][matrixRowSize - j - 1];
            matrix[i][matrixRowSize - j - 1] = t;
        }
    }
    
}

int main() {
    int i, j;
    int ar[][4] = {{1, 1, 2, 3}, {4, 5, 1, 6}, {7, 8, 1, 4}, {5, 9, 3, 2}};
    for(i = 0 ; i < 4 ; i++) {
        for(j = 0 ; j < 4 ; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    rotate(ar, 4, 4);
    for(i = 0 ; i < 4 ; i++) {
        for(j = 0 ; j < 4 ; j++) {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }
    return 0;
}
