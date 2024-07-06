#include<stdio.h>
#include<math.h>
#define n 100

void input(float a[n][n], int m){
    int i,j;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            scanf("%f",&a[i][j]);
        }
    }
}
void output(float a[n][n], int m){
    int i,j;
    for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            printf("%.2f ",a[i][j]);
        }
        printf("\n");
    }
}
void output_inverse(float a[n][n], int m){
    int i,j;
    for(i=1;i<=m;i++){
        for(j=1+m;j<=2*m;j++){
            printf("%.2f ",a[i][j]);
        }
        printf("\n");
    }
}
void inverse(float a[n][n], int m){
    int i,j,k;
    float ratio;
    float temp[n][n];
    for(i=1; i<=m; i++){
        for (j=1; j<=m; j++){
            temp[i][j] = a[i][j];
        }
        for (j=m+1; j<=2*m; j++){
            if(j==(m+i)){
                temp[i][j] = 1;
            } else {
                temp[i][j] = 0;
            }
        }
    }
    for(i=1; i<=m; i++){
        if(temp[i][i]==0){
            printf("No inverse matrix\n");
            return;
        }
        for(j=1; j<=m; j++){
            if(i!=j){
                ratio = temp[j][i]/temp[i][i];
                for(k=1; k<=2*m; k++){
                    temp[j][k] = temp[j][k] - ratio*temp[i][k];
                }
            }
        }
    }
    for(i=0; i<=m; i++){
        float divisor = temp[i][i];
        for(j=1; j<=2*m; j++){
            temp[i][j] = temp[i][j]/divisor;
        }
    }
    printf("Inverse matrix is \n");
    output_inverse(temp,m);
    return;
}
int main(){
    int m;
    printf("Enter m : ");
    scanf("%d",&m);
    float a[n][n];
    input(a,m);
    inverse(a,m);
    printf("Original matrix is \n");
    output(a,m);
    return 0;
}