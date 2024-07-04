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
void merge(float a[], int l, int m, int r){
    int i, j, k;
    int n1 = m-l+1;
    int n2 = r-m;
    float L[n1], R[n2];
    for(i = 0; i < n1; i++){
        L[i] = a[l+i];
    }
    for (j = 0; j < n2; j++){
        R[j] = a[m+1+j];
    }
    i = 0, j = 0, k = l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j])
        {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(float a[], int l, int r){
    if(l<r){
        int m = l+(r-l)/2;
        merge_sort(a, l, m);
        merge_sort(a, m+1, r);
        merge(a, l, m, r);
    }
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    float a[n];
    input(n, a);
    merge_sort(a, 0, n-1);
    output(n, a);
    return 0;
}