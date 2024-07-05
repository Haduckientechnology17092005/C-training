#include<stdio.h>
#include<math.h>

int m, n, cs[20], csmax[20];
float max, x[20];

void chu_trinh(int k, int d) {
    if (k > m) {
        float s = 1.0;
        for (int i = 1; i <= m; i++) {
            s *= x[cs[i]];
        }
        if (s > max) {
            max = s;
            for (int i = 1; i <= m; i++) {
                csmax[i] = cs[i];
            }
        }
        return;
    }
    for (int i = d; i <= n; i++) {
        cs[k] = i;
        chu_trinh(k + 1, i + 1);
    }
}

int main() {
    printf("Enter n and m: ");
    scanf("%d %d", &n, &m);
    for (int j = 1; j <= n; j++) {
        printf("Enter x[%d]: ", j);
        scanf("%f", &x[j]);
    } 
    max = 0.0;
    chu_trinh(1, 1);
    printf("Max: %f\n", max);
    printf("Elements with max product:\n");
    for (int j = 1; j <= m; j++) {
        printf("x[%d] = %f\n", csmax[j], x[csmax[j]]);
    }
    return 0;
}
