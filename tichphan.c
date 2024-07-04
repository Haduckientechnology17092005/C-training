#include <stdio.h>
#include <math.h>

float hamso(float a) {
    return sin(a * a) / exp(a);
}

float tichphan(float a, float b, int n) {
    float h = (b - a) / (2 * n);
    float sum = 0;
    for (int i = 0; i <= 2 * n; i++) {
        float x = a + i * h;
        if (i == 0 || i == 2 * n) {
            sum += hamso(x);
        } else if (i % 2 == 0) {
            sum += 2 * hamso(x);
        } else {
            sum += 4 * hamso(x);
        }
    }
    return (h / 3) * sum;
}

int main() {
    float a, b;
    int n;
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Integral result: %.6f\n", tichphan(a, b, n));
    return 0;
}