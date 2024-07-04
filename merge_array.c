#include<stdio.h>
void input(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }
}
void output(int n, float a[n]){
    for(int i = 0; i < n; i++){
        printf("%.2f ", a[i]);
    }
    printf("\n");
}
void merge_array(int n, float a[n], int m, float b[m], float c[n+m]){
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < n && j < m; k++) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
    }
    for (; i < n; i++, k++) {
        c[k] = a[i];
    }
    for (; j < m; j++, k++) {
        c[k] = b[j];
    }
    output(n + m, c);
}

int main(){
    int n, m;
    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);
    float a[n], b[m], c[n+m];
    input(n, a);
    input(m, b);
    merge_array(n, a, m, b, c);
    return 0;
}