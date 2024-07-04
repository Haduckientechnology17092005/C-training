#include<stdio.h>
int main()
{
    int n = 6;
    float a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%f ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}