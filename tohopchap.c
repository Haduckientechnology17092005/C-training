#include<stdio.h>
#include<math.h>

long long tohopchap(int n, int k){
    long long tich = 1;
    for(int i = 0; i<k; i++){
        tich *= (n-i);
        tich /= (i+1);
    }
    return tich;
}

int main(){
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    printf("Result: %lld\n", tohopchap(n, k));
    return 0;
}