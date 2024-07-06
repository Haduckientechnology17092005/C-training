#include<stdio.h>
#include<math.h>
#include<time.h>
float a[100];
float hoocner(int n, float a[100], float x){
    float s = 0;
    for(int i = 0; i <= n; i++){
        s = s + a[i] * pow(x, n-i);
    }
    return s;
}
void input(int n, float a[100]){
    for(int i = 0; i <= n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void output(int n, float a[100]){
    for(int i = 0; i <= n; i++){
        printf("%.2fx^%d ", a[i], n-i);
    }
    printf("\n");
}

int main(){
    clock_t start, end;
    double cpu_time_used;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    input(n, a);
    output(n, a);
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("%.2f", hoocner(n, a, x));
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nThoi gian thuc thi: %f giay\n", cpu_time_used);
    return 0;
}