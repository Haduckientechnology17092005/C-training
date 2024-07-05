#include<stdio.h>
#include<math.h>

void dem_so_luong_tien(){
    int tong = 200000;
    int dem  = 0;
    for(int i = 0; i<= tong/1000; i++){
        for(int j = 0; j<= tong/2000; j++){ 
            for(int k = 0; k<= tong/5000; k++){
                if(1000*i + 2000*j + 5000*k == tong){
                    printf("%d + %d + %d = 200000\n", 1000*i, 2000*j, 5000*k);
                    dem++;
                }
            }
        }
    }
    printf("Co %d cach tinh tien\n", dem); 
}

int main(){
    dem_so_luong_tien();
    return 0;
}