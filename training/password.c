#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char mk[] = "ABC";

void check_password(void) {
    char ch;
    int i;
    int dung = 1;
    printf("Nhap mat khau: ");
    i = 0;
    while(i < 3) {
        ch = getchar();  // Đọc ký tự từ đầu vào
        if(ch != mk[i]) {
            dung = 0;
            break;
        }
        ++i;
    }
    if(!dung) {
        printf("\nMat khau khong chinh xac\n");
    } else {
        printf("\nDung\n");
    }
}

int main() {
    check_password();
    return 0;
}



