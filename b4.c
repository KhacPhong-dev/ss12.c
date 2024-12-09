#include <stdio.h>
int so_lon(){
    int mang[5]={1,2,3,4,5};
    int a = mang[0];
    int b;
    for (int i =0;i<5;i++){
        if (a<mang[i]){
            a=mang[i];
        }
    }
    printf("%d",a);
}
int main(){
    so_lon();
}