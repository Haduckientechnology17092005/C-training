#include <stdio.h>

void cthap(int m, int x1, int y1, int x2, int y2, int x3, int y3) {
    if (m < 1)
        return;
    else if (m == 1) {
        printf("\nMove disk from (%d, %d) to (%d, %d)", x1, y1, x2, y2);
    } else {
        cthap(m - 1, x1, y1-1, x3, y3, x2, y2);
        printf("\nMove disk from (%d, %d) to (%d, %d)", x1, y1, x2, y2);
        cthap(m - 1, x3, y3, x2, y2-1, x1, y1);
    }
}

int main() {
    int n;
    printf("Enter number of disks (n): ");
    scanf("%d", &n);
    cthap(n, 10, 24, 30, 22, 50, 23);
    printf("\n");
    return 0;
}
