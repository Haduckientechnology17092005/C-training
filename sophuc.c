#include<stdio.h>
int main(){
    float x;
    float y;
    printf("Enter x : ");
    scanf("%f", &x);
    printf("Enter y : ");
    scanf("%f", &y);
    printf("So phuc can tim: %.2f + %.2fi\n", x, y);
    return 0;
}