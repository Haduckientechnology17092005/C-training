#include<stdio.h>
#include<math.h>
float det(float a, float b, float c, float d){
    return a*d-b*c;
}
void he_phuong_trinh_tuyen_tinh(float a, float b, float c, float d, float e, float f){
    float det1, det2, det3;
    det1 = det(a, b, d, e);
    det2 = det(c, f, b, e);
    det3 = det(a, d, c, f);
    if(det1 == 0){
        if(det2 == 0){
            if(det3 == 0){
                printf("Phuong trinh vo so nghiem");
            }else{
                printf("Phuong trinh vo nghiem");
            }
        }else{
            printf("Phuong trinh co vo so nghiem");
        }
    } else {
        float x = det2/det1;
        float y = det3/det1;
        printf("Phuong trinh co nghiem x = %.2f, y = %.2f\n", x, y);
    }
}
int main(){
    float a, b, c, d, e, f;
    printf("Enter a : ");
    scanf("%f", &a);
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
    he_phuong_trinh_tuyen_tinh(a, b, c, d, e, f);
    return 0;
}