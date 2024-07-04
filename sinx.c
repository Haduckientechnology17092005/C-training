#include<stdio.h>
#define esp 0.0001
#include<math.h>

float sin_x(float x) {
    float sum = x;
    float term = x;
    int i = 1;

    while (fabs(term) > esp) {
        term *= -x * x / ((2 * i) * (2 * i + 1));
        sum += term;
        i++;
    }

    return sum;
}


int main(){
    float x;
    printf("Enter x : ");
    scanf("%f", &x);
    printf("sin(x) = %.2f\n", sin_x(x));
    return 0;
}