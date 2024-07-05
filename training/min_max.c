#include<stdio.h>

void input(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void input1(int n, float b[n]){
    for(int i = 0; i < n; i++){
        printf("Enter b[%d] : ", i);
        scanf("%f", &b[i]);
    }
}

void input2(int n, float c[n]){
    for(int i = 0; i < n; i++){
        printf("Enter c[%d] : ", i);
        scanf("%f", &c[i]);
    }
}

void input3(int n, float d[n]){
    for(int i = 0; i < n; i++){
        printf("Enter d[%d] : ", i);
        scanf("%f", &d[i]);
    }
}

float min(float a, float b, float c, float d){
    float min = a;
    if(b < min){
        min = b;
    }
    if(c < min){
        min = c;
    }
    if(d < min){
        min = d;
    }
    return min;
}

float max(float a, float b, float c, float d){
    float max = a;
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    if(d > max){
        max = d;
    }
    return max;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    float a[n], b[n], c[n], d[n];
    input(n, a);
    input1(n, b);
    input2(n, c);
    input3(n, d);
    for(int i = 0; i < n; i++){
        printf("%.2f %.2f\n", min(a[i], b[i], c[i], d[i]), max(a[i], b[i], c[i], d[i]));
        printf("%.2f %.2f\n", max(a[i], b[i], c[i], d[i]), min(a[i], b[i], c[i], d[i]));
    }
}