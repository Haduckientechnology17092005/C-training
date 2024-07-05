#include<stdio.h>
void print_number(int n, float a[n], int m) {
    for(int i =0; i<n; i++){
        scanf("%f", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(i%m == 0){
            printf("\n%.2f ", a[i]);
        } else {
            printf("%.2f ", a[i]);
        }
    }
    printf("\n");
}

int main(){
    int n, m;
    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);
    float a[n];
    print_number(n, a, m);
    return 0;
}