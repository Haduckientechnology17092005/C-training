#include<stdio.h>
#define esp 0.0001
float ex(float x) {
    float sum = 1;
    float temp = 1;
    int i = 1;
    while (temp > esp) {
        temp = temp * x / i;
        sum = sum + temp;
        i = i + 1;
    }
    return sum;
}

int main() {
    float x;
    printf("Enter x : ");
    scanf("%f", &x);
    printf("S = %.2f", ex(x));
    return 0;
}