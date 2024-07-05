#include<stdio.h>
#include<math.h>
double bp(double x){
    return x*x;
}
int main(){
    int j;
    double x = 1.0;
    typedef double(*ham)(double);
    ham f[6];
    f[1] = bp;
    f[2] = sin;
    f[3] = cos;
    f[4] = exp;
    f[5] = sqrt;
    while(x <= 10.0){
        printf("\n");
        for(j = 1; j <= 5; j++){
            printf("%.2f ", f[j](x));
        }
        x += 0.5;
    }
    printf("\n");
    return 0;
}