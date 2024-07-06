#include <stdio.h>

#define MAX_SIZE 100

void matran_chuyenvi(int rows, int cols, float matrix[MAX_SIZE][MAX_SIZE], float transpose[MAX_SIZE][MAX_SIZE]) {
    for(int i = 1; i<=rows; i++) {
        for(int j = 1; j<=cols; j++) {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }
    for(int i =1; i<=rows; i++){
        for(int j = 1; j<=cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Original matrix: \n");
    for(int i = 1; i<=rows; i++) {
        for(int j = 1; j<=cols; j++) {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix: \n");
    for(int i = 1; i<=cols; i++) {
        for(int j = 1; j<=rows; j++) {
            printf("%f ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matrix[MAX_SIZE][MAX_SIZE], transpose[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    matran_chuyenvi(rows, cols, matrix, transpose);
    return 0;
}

