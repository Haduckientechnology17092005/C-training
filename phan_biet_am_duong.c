#include<stdio.h>

void input (int n, float a[n]){
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

void array_less_0(int n, float a[n]){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            count++;
        }
    }
    float b[count];
    for(int i = 0, j = 0; i < n; i++){
        if(a[i] < 0){
            b[j] = a[i];
            j++;
        }
    }
    output(count, b);
}

void array_greater_0(int n, float a[n]){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 0){
            count++;
        }
    }
    float b[count];
    for(int i = 0, j = 0; i < n; i++){
        if(a[i] > 0){
            b[j] = a[i];
            j++;
        }
    }
    output(count, b);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    float a[n];
    input(n, a);
    printf("Array less 0: ");
    array_less_0(n, a);
    printf("Array greater 0: ");
    array_greater_0(n, a);
    return 0;
}