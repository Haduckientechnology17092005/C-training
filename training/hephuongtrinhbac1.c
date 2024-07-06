#include<stdio.h>
#include<math.h>
#include<time.h>

float det_matrix(float a, float b, float c, float d){
    return a*d-b*c;
}

void solution(float a, float b, float c, float d, float e, float f){
    float detA = det_matrix(a, b, d, e);
    float detB = det_matrix(c,b,f,e);
    float detC = det_matrix(a,c,d,f);
    float x, y;
    if(detA == 0){
        if(detB == 0){
            if(detC == 0){
                printf("Phuong trinh vo so nghiem");
            }else{
                printf("Phuong trinh vo nghiem");
            }
        } else {
            printf("Phuong trinh co vo nghiem");
        }
    } else {
        x = detB/detA;
        y = detC/detA;
        printf("Phuong trinh co nghiem x = %.2f, y = %.2f\n", x, y);
    }
}

int main(){
    clock_t start, end;
    double cpu_time_used;
    float a, b, c, d, e, f;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("Enter c : ");
    scanf("%f", &c);
    printf("Enter d : ");
    scanf("%f", &d);
    printf("Enter e : ");
    scanf("%f", &e);
    printf("Enter f : ");
    scanf("%f", &f);
    printf("He phuong trinh tuyen tinh : \n");
    printf("%.2fx + %.2fy = %.2f \n%.2fx + %.2fy = %.2f\n", a, b, c, d, e, f);
    solution(a, b, c, d, e, f);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Thoi gian thuc thi: %f giay\n", cpu_time_used);
    return 0;
}