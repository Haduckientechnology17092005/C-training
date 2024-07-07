#include<stdio.h>
#include<math.h>
#include<time.h>
#define N 100
float a[N][N];
void input(float a[N][N], int n);
void output(float a[N][N], int n);
float max_hang_i(float a[N][N], int i, int n);
float hieu_suat_max(float a[N][N], int n);
void input(float a[N][N], int n){
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
}
void output(float a[N][N], int n){
    int i, j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
}
float max_hang_i(float a[N][N], int i, int n){
    int j;
    float max = a[i][1];
    for(j = 1; j <= n; j++){
        if(max < a[i][j]){
            max = a[i][j];
        }
    }
    return max;
}
float tong_hieu_suat_max(float a[N][N], int n){
    int i;
    float sum = 0.0;
    float max;
    for(int i = 1; i <= n; i++){
        max = max_hang_i(a, i, n);
        sum = sum + max;
    }
    return sum/n;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    input(a, n);
    output(a, n);
    printf("Max: %f\n", tong_hieu_suat_max(a, n));
    return 0;
}
