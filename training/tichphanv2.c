#include<stdio.h>
#include<time.h>
#include<math.h>
float tichphan(float (*f)(float), float a, float b, int n){
    float h,sum;
    int i;
    h = (b-a)/(n);
    sum = (f(a)+f(b))/2;
    for(i=1;i<n;i++){
        sum+=f(a+i*h);
    }
    return sum*h;
}
float g(float x){
    float s;
    s = x*x - 3*x + 5;
    return s;
}
int main(){
    clock_t start, end;
    float cpu_time_used;
    int n = 1000;
    printf("S1 = %f\n", tichphan(g,0,3.14,n));
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Thoi gian su dung: %f\n", cpu_time_used);
    return 0;
}