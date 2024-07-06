#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

float a[100][100];
float x[100];

void input(float a[100][100], int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n + 1; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}

void output(float a[100][100], int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n + 1; j++) {
            printf("%f\t", a[i][j]);
        }
        printf("\n");
    }
}

void output_x(float x[100], int n) {
    int i;
    for(i = 1; i <= n; i++) {
        printf("x%d = %f\t",i, x[i]);
    }
    printf("\n");
}

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int method_Gauss(float a[100][100], float x[100], int n) {
    printf("Phuong phap Gauss: \n");
    for(int i = 1; i < n; i++) {
        if(a[i][i] == 0) {
            int check = 0;
            for(int j = i + 1; j <= n; j++) {
                if(a[j][i] != 0) {
                    for(int k = 1; k <= n + 1; k++) {
                        swap(&a[i][k], &a[j][k]);
                    }
                    check = 1;
                    break;
                }    
            }
            if(check == 0) {
                printf("Khong co phuong phap Gauss \n");
                return 0;
            }
        }
        for(int j = i + 1; j <= n; j++) {
            float h = -a[j][i] / a[i][i];
            for(int k = 1; k <= n + 1; k++) {
                a[j][k] = a[j][k] + h * a[i][k];
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        float s = 0;
        if(a[i][i] == 0) {
            printf("Khong co phuong phap Gauss \n");
            return 0;
        }
        for(int j = i + 1; j <= n; j++) {
            s += a[i][j] * x[j];
        }
        x[i] = (a[i][n + 1] - s) / a[i][i];
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so hang va so cot: ");
    scanf("%d", &n);
    input(a, n);
    if (method_Gauss(a, x, n)) {
        output_x(x, n);
    }
    return 0;
}
