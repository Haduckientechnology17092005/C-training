#include <stdio.h>

#define MAXN 100

int a[MAXN];

void print_partition(int k) {
    if(k <= 0) {
        printf("Enter n greater than 0\n");
        return;
    }
    for (int i = 1; i <= k; i++) {
        printf("%s%d", i > 1 ? " + " : "", a[i]);
    }
    printf("\n");
}

void generate_partitions(int x, int k) {
    int i;
    
    if (x == 0) {
        print_partition(k - 1);
        return;
    }
    
    // Start from the last used number or 1 if it's the first element
    int start = (k == 1) ? 1 : a[k-1];
    
    // Try all possible values for the next element
    for (i = start; i <= x; i++) {
        a[k] = i;
        generate_partitions(x - i, k + 1);
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    a[1] = n;
    generate_partitions(n, 1);
    return 0;
}
