#include<stdio.h>
#include<math.h>
void input(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}
float sum(int n, float a[n]){
    float sum = 0;
    for(int i = 0; i< n ; i ++) {
        sum = sum + pow(a[i], 2);
    }
    return pow(sum, 0.5);
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    float a[n];
    input(n, a);
    printf("%.2f\n", sum(n, a));
    return 0;
}