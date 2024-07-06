#include<stdio.h>
#include<math.h>
#include<time.h>
float a[100];
int n;
float average_delta(float a[], int n)
{
    int i;
    float sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    return sum / n;
}

float delta(float a[], int n){
    float delta = 0;
    for(int i = 0; i< n ; i ++) {
        delta = delta + pow(a[i] - average_delta(a, n), 2);
    }
    return delta/n;
}

void input(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void output(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("%.2f ", a[i]);
    }
    printf("\n");
}

int main(){
    clock_t start, end;
    double cpu_time_used;
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    float a[n];
    input(n, a);
    printf("Average : %.2f\n", average_delta(a, n));
    printf("Delta : %.2f", sqrt(delta(a, n)));
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("\nThoi gian thuc thi: %f giay\n", cpu_time_used);
    return 0;
}