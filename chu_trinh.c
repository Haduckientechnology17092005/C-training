#include "stdio.h"
#include "math.h"
int m, n, cs[20];
void chu_trinh(int k, int d){
    int i;
    for(i=d; i<=n-m+k; i++){
        cs[k] = i;
        if(k==m){
            int j;
            printf("\n");
            for(j=1;j<=k;j++){
                printf("%d ", cs[j]);
            }
        }
        else chu_trinh(k+1, i+1);
    }
}
int main(){
    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);
    chu_trinh(1, 1);
    printf("\n");
    return 0;
}