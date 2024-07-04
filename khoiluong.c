#include <stdio.h>
#include <math.h>

#define N 1000
#define L 20

int k[N];
float t[N];
int *pk[L];
float *pt[L];
char *thongb = "Khong tim thay";

// Hàm nhập khối lượng và thời gian
void vao_khoi_luong(int m) {
    int i, *pkk;
    float *ptt;
    pkk = pk[0] = k;
    ptt = pt[0] = t;

    for(i = 1; i <= m; i++) {
        while (1) {
            printf("Khoi luong thu %d: ", i);
            scanf("%d", pkk);
            if (*pkk == 0) {
                break;
            }
            printf("Thoi gian thu %d: ", i);
            scanf("%f", ptt);
            pkk++;
            ptt++;
        }

        pk[i] = pkk;
        pt[i] = ptt;
    }
}

// Hàm in khối lượng và thời gian
void in_khoi_luong(int m, int i) {
    int *pkk;
    float *ptt;

    if(i < 1 || i > m) {
        printf("%s\n", thongb);
        return;
    }

    pkk = pk[i-1];
    ptt = pt[i-1];
    while (pkk < pk[i]) {
        printf("Khoi luong thu %d: %d\nThoi gian thu %d: %f\n", i, *pkk, i, *ptt);
        pkk++;
        ptt++;
    }
}

// Hàm tính tổng khối lượng
float tinh_khoi_luong(int m, int i) {
    int *pkk;
    float *ptt, s = 0.0;

    if(i < 1 || i > m) {
        printf("%s\n", thongb);
        return 0.0;
    }

    pkk = pk[i-1];
    ptt = pt[i-1];

    while(pkk < pk[i]) {
        s += (*pkk) * (*ptt);
        pkk++;
        ptt++;
    }

    return s;
}

// Hàm main
int main() {
    int m;
    int i;

    printf("So khoi luong: ");
    scanf("%d", &m);

    vao_khoi_luong(m);

    for(i = 1; i <= m; i++) {
        printf("Khoi luong thu %d:\n", i);
        in_khoi_luong(m, i);
        printf("Tong khoi luong: %f\n", tinh_khoi_luong(m, i));
    }

    return 0;
}
