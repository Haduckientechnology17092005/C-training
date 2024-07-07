#include<stdio.h>
#include<math.h>
#include<time.h>
void find_x(float a, float a1, float b, float b1){
    if(a == a1){
        if(b == b1){
            printf("Phuong trinh co vo so nghiem");
        } else {
            printf("Phuong trinh vo nghiem");
        }
    } else {
        float x = (b1-b)/(a-a1);
        printf("Phuong trinh co nghiem x = %.2f", x);
        float y = a*x+b;
        printf(", y = %.2f", y);
    }
}
int main(){
    float a, a1, b, b1;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter a1 : ");
    scanf("%f", &a1);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("Enter b1 : ");
    scanf("%f", &b1);
    find_x(a, a1, b, b1);
    printf("\n");
    return 0;
}
    