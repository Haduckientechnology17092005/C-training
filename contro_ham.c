#include<stdio.h>
#include<math.h>
#define M_PI 3.14159265358979323846
double tp(double (*f)(double), double a, double b);
double g(double);
double tp(double (*f)(double), double a, double b){
    int i, n = 1000;
    double s, h = (b - a) / n;
    s = (f(a) + f(b)) / 2;
    for(i = 1; i < n; i++){
        s+= f(a + i * h);
    }
    return s * h;
}

double g(double x){
    double s;
    s = (exp(x)-2*sin(x*x))/(1+pow(x,4));
    return s;
}
double h(double x){
    return (1/(1+pow(x,4)));
}
int main (){
    printf("S1= %f\n",tp(sin,0,M_PI/2));
    printf("S2= %f\n",tp(cos,0,M_PI/2));
    printf("S3= %f\n",tp(exp,0,M_PI/2));
    printf("S4= %f\n",tp(g,0,M_PI/2));
    printf("S5= %f\n",tp(h,0,M_PI/2));
    return 0;
}