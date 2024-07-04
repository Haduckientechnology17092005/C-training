#include<stdio.h>
#include<math.h>
void print_ascii(){
    for(int i = 33; i<=255; i++){
        printf("%c ", i);
    }
    printf("\n");
}

int main(){
    print_ascii();
    return 0;
}