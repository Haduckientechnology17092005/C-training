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
        printf("Khoi luong thu %d: %d\nThoi gian thu %d: %.2f\n", i, *pkk, i, *ptt);
        pkk++;
        ptt++;
    }
}

// Hàm tính số lượng hàng trên đơn vị thời gian
float tinh_so_luong_tren_thoi_gian(int m, int i) {
    int *pkk;
    float *ptt, tong_so_luong = 0.0, tong_thoi_gian = 0.0;
    if(i < 1 || i > m) {
        printf("%s\n", thongb);
        return 0.0;
    }
    pkk = pk[i-1];
    ptt = pt[i-1];
    while(pkk < pk[i]) {
        tong_so_luong += *pkk;
        tong_thoi_gian += *ptt;
        pkk++;
        ptt++;
    }
    if (tong_thoi_gian == 0) {
        return 0.0; // Tránh chia cho 0
    }
    return tong_so_luong / tong_thoi_gian;
}

// Hàm tính tổng số lượng hàng trên đơn vị thời gian của tất cả các chuyến xe
float tinh_tong_so_luong_tren_thoi_gian(int m) {
    int *pkk;
    float *ptt, tong_so_luong = 0.0, tong_thoi_gian = 0.0;
    for (int i = 1; i <= m; i++) {
        pkk = pk[i-1];
        ptt = pt[i-1];
        while(pkk < pk[i]) {
            tong_so_luong += *pkk;
            tong_thoi_gian += *ptt;
            pkk++;
            ptt++;
        }
    }
    if (tong_thoi_gian == 0) {
        return 0.0; // Tránh chia cho 0
    }
    return tong_so_luong / tong_thoi_gian;
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
        printf("So luong hang/thoi gian: %.2f\n", tinh_so_luong_tren_thoi_gian(m, i));
    }
    printf("Tong so luong hang/thoi gian: %.2f\n", tinh_tong_so_luong_tren_thoi_gian(m));
    return 0;
}


