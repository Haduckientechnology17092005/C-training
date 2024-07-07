#include<stdio.h>
#include<math.h>
#include<time.h>
float max_hamso(float (*f)(float), float a, float b){
    int n = 1000;
    float temp = 0;
    float h;
    h = (b-a)/n;
    float max = f(a);
    for(int i = 1; i<=n; i++){
        temp = f(a+i*h);
        if(max<temp){
            max = temp;
        }
    }
    return max;
}
float min_hamso(float (*f)(float), float a, float b){
    int n = 1000;
    float temp = 0;
    float h;
    h = (b-a)/n;
    float min = f(a);
    for(int i = 1; i<=n; i++){
        temp = f(a+i*h);
        if(min>temp){
            min = temp;
        }
    }
    return min;
}
float g(float x){
    float s = 0;
    s = x*x + 3*x - 9;
    return s;
}
float f(float x){
    float s = 0;
    s = 4*x + 9;
    return s;
}
int main(){
    clock_t start, end;
    double use_cpu_used;
    float a,b;
    printf("Enter a and b: ");
    scanf("%f %f", &a, &b); 
    float k = max_hamso(g, a, b);
    printf("Max = %f\n", k);
    float l = max_hamso(f, a, b);
    printf("Max = %f\n", l);
    float m = min_hamso(g, a, b);
    printf("Min = %f\n", m);
    float n = min_hamso(f, a, b);
    printf("Min = %f\n", n);
    end = clock();
    use_cpu_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Thoi gian thuc thi: %f giay\n", use_cpu_used);
    return 0; 
}