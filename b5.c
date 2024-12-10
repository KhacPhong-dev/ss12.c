#include <stdio.h>

int so(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main(){
    int a,b;
    printf("nhap so thu nhat va so thu 2\n");
    scanf("%d %d",&a,&b);
    if(so(a)){
        printf("so %d la so nguyen to: ",a);
    }else{
        printf("so %d la khong so nguyen to: ",a);
    }
    if(so(b)){
        printf("so %d la so nguyen to: ",b);
    }else{
        printf("so %d la khong so nguyen to: ",b);
    }
}
