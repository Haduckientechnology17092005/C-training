#include <stdio.h>
#include <math.h>
#include <time.h>

float a[100][100];
float b[100];
float result[100];
int m, n;

void input_matrix(float a[][100], int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void output_matrix(float a[][100], int m, int n) {
    int i, j;
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }
}

void input_vector(int n, float a[100]) {
    for(int i = 0; i < n; i++) {
        printf("Enter a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}

void output_vector(int n, float a[100]) {
    for(int i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

void multiplication(float a[][100], int m, int n, float b[100], float result[100]) {
    int i, j;
    for(i = 0; i < m; i++) {
        result[i] = 0;
        for(j = 0; j < n; j++) {
            result[i] += a[i][j] * b[j];
        }
    }
}

int main() {
    printf("Enter m, n: ");
    scanf("%d%d", &m, &n);
    input_matrix(a, m, n);
    input_vector(n, b);
    multiplication(a, m, n, b, result);
    output_vector(m, result);
    return 0;
}
