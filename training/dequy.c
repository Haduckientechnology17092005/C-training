#include<stdio.h>
#include<math.h>
#include<time.h>
float recuisive1(float (*f)(float, int), int n, float x){
    if(n==0){
        return 0;
    }
    if(n==1){
        return f(x, n);
    }
    float s = 0.0;
    s = f(x, n) + recuisive1(f, n-1, x);
    return s;
}
float f(float x, int n){
    return pow(x, n);
}
float recuisive2(int n){
    if(n<=0) 
        return 1;
    return n*recuisive2(n-1);
}
float recuisive3(int n){
    float sum = 0;
    if(n==1)
        return 13;
    sum = n*10 + 3;
    return recuisive3(n-1) + sum;
}
int main(){
    float x;
    int n;
    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);
    printf("%.2f", recuisive1(f, n, x));
    printf("\n%.2f", recuisive2(2*n));
    printf("\n%.2f", recuisive3(n));
    printf("\n");
    return 0;
}