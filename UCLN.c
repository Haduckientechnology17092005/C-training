#include<stdio.h>
int GCD(int a, int b){
    if(a==b){
        return a;
    } else if(a>b){
        return GCD(a-b, b);
    }else {
        return GCD(a, b-a);
    }   
}
int LCM(int a, int b){
    return (a*b)/GCD(a, b);
}


int main(){
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("GCD(%d, %d) = %d\n", a, b, GCD(a, b));
    printf("LCM(%d, %d) = %d\n", a, b, LCM(a, b));
    return 0;
}