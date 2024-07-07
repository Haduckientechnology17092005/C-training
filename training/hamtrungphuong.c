#include<stdio.h>
#include<math.h>
#include<time.h>

void solution(float a, float b, float c){
    float delta = b*b - 4*a*c;
    float x1, x2,x3,x4;
    float t1, t2;
    if(delta<0){
        printf("Phuong trinh vo nghiem");
    } else if (delta == 0){
        t1 = -1*b/(2*a);
        if(t1<0){
            printf("Phuong trinh vo nghiem");
        } else if(t1 == 0){
            printf("Phuong trinh co nghiem kep x = 0");
        } else {
            x1 = sqrt(t1);
            x2 = -sqrt(t1);
            printf("Phuong trinh co nghiem x1 = %.2f, x2 = %.2f", x1, x2);
        }
    } else {
        t1 = (-1*b + sqrt(delta))/(2*a);
        t2 = (-1*b - sqrt(delta))/(2*a);
        if(t1<0 && t2<0){
            printf("Phuong trinh vo nghiem");
        } else if(t1<0 && t2 ==0){
            printf("Phuong trinh co nghiem kep x = %.2f", t2);
        } else if(t1<0 && t2>0){
            x3 = sqrt(t2);
            x4 = -sqrt(t2);
            printf("Phuong trinh co nghiem x1 = %.2f, x2 = %.2f", x3, x4);
        } else if (t1 == 0 && t2 == 0){
            printf("Phuong trinh co nghiem kep x = 0");
        } else if (t1 == 0 && t2 < 0){
            printf("Phuong trinh co nghiem kep x = %.2f", t1);
        } else if (t1 == 0 && t2 > 0){
            x1 = sqrt(t2);
            x2 = -sqrt(t2);
            printf("Phuong trinh co nghiem x1 = %.2f, x2 = %.2f", x1, x2);
        } else if(t1>0 && t2>0){
            x1 = sqrt(t1);
            x2 = -sqrt(t1);
            x3 = sqrt(t2);
            x4 = -sqrt(t2);
            printf("Phuong trinh co nghiem x1 = %.2f, x2 = %.2f, x3 = %.2f, x4 = %.2f", x1, x2, x3, x4);
        } else if (t1>0 && t2 == 0){
            x1 = sqrt(t1);
            x2 = -sqrt(t1);
            x3 = sqrt(t2);
            printf("Phuong trinh co nghiem x1 = %.2f, x2 = %.2f x3 = %.2f", x1, x2, x3);
        } else if (t1>0 && t2 < 0){
            x1 = sqrt(t1);
            x2 = -sqrt(t1);
            printf("Phuong trinh co nghiem x1 = %.2f, x2 = %.2f", x1, x2);
        }
    }
}

int main(){
    float a, b, c;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("Enter c : ");
    scanf("%f", &c);
    solution(a, b, c);
    printf("\n");
    return 0;
}