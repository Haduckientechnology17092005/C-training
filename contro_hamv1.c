#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define M_PI 3.14159265358979323846
#include<alloca.h>
#include<memory.h>
#include<string.h>
void sort(void *buf, int size, int n, int(*ss)(void*, void*));
int tang(void *a, void *b);
int tang(void *a, void *b){
    return (*((float*)a)<=(*((float*)b)));
}
void sort (void *buf, int size, int n, int(*ss)(void*, void*)){
    void *tg; char *p; int i,j;
    p = (char*)buf;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(!ss(p+i*size, p+j*size)){
                memcpy(tg, p+i*size, size);
                memcpy(p+i*size, p+j*size, size);
                memcpy(p+j*size, tg, size);
            }
        }
    }
}
float x[]={20, 25, 10, 5, 15};
int main(){
    sort(x, sizeof(float), 5, tang);
    for(int i=0;i<5;i++){
        printf("%f\n", x[i]);
    }
    return 0;
}