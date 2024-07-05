#include<stdio.h>
#include<math.h>

float find_index_last_number_less_0(float a[], int n){
    int number = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] < 0){
            number = a[i];
        }
    }
    return number;
}
void input(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}
void output(int n, float a[n]){
    for(int i = 0; i < n; i++){
        if(i != find_index_last_number_less_0(a, n)){
            printf("%.2f ", a[i]);
        }else{
            printf("%.2f", a[i]);
        }
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    float a[n];
    input(n, a);
    output(n, a);
    printf("\nLast number less 0 : %f\n", find_index_last_number_less_0(a, n));
    return 0;
}