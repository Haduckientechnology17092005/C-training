#include<stdio.h>
void input(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void sum(int n, float a[n]){
    float sum_less_0 = 0;
    float sum_greater_0 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            sum_less_0 += a[i];
        }else{
            sum_greater_0 += a[i];
        }
    }
    printf("Sum of numbers less than 0 : %.2f\n", sum_less_0);
    printf("Sum of numbers greater than 0 : %.2f\n", sum_greater_0);
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    float a[n];
    input(n, a);
    sum(n, a);
    return 0;
}