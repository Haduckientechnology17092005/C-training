#include <stdio.h>
#include <math.h>
#include <time.h>

void timnghiem(float (*f)(float), float a, float b){
    float c = (a + b) / 2;
    while(fabs(f(c)) > 0.00001){
        if(f(a) * f(c) < 0){
            b = c;
        } else {
            a = c;
        }
        c = (a + b) / 2;
    }
    printf("x = %.4f\n", c);
}

float f(float x){
    return x*x - 2*x - 5;
}

int main(){
    clock_t start, end;
    double use_cpu_used;
    float a, b;
    
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b); 
    
    start = clock();
    timnghiem(f, a, b);
    end = clock();
    
    use_cpu_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Thoi gian thuc thi: %f giay\n", use_cpu_used);
    
    return 0; 
}
