#include<stdio.h>
#include<math.h>
#include<time.h>

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

void find_min_max_serires_number(int n, float a[], int *min, int *max){
    *max = a[0];
    *min = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] > *max){
            *max = a[i];
        }
        if(a[i] < *min){
            *min = a[i];
        }
    }
}

int main(){
    clock_t start, end;
    double cpu_time_used;
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    float a[n];
    input(n, a);
    int min, max;
    find_min_max_serires_number(n, a, &min, &max);
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Thoi gian thuc thi: %f giay\n", cpu_time_used);
    return 0;
}