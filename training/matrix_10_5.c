#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    char a[n][n/2+1];
    int index_mid = n/2;
    for(int i = 0; i < n/2+1; i++){
        for(int j = 0 ; j < n; j++){
            if(i==n/2){
                printf("* ");
            }else{
            if((j<index_mid + i) && (j>index_mid - i)){
                printf("  ");
            }else{
                printf("* ");
            }
        }
    }
        printf("\n");
    }
}
