#include<stdio.h>
#include<math.h>

void input(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}

void output(int n, float a[n]){
    for(int i = 0; i < n; i++){
        if(i!=n-1){
            printf("%.2fx%d + ", a[i],i+1);
        } else {
            printf("%.2fx%d ", a[i],i+1);
        }
    }
    printf("\n");
}

int main (){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    float a[n];
    input(n, a);
    printf("Polynomial : ");
    output(n, a);
    return 0;
}