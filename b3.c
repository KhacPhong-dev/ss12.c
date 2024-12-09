#include <stdio.h>
int giaithua(int n){
    int so=1;
    for(int i=1;i<=n;i++){
        so *=i;
    }
    printf("%d",so);

}
int main(){
    int a;
    printf("nhap so ban muon tinh giai thua \n");
    scanf("%d",&a);
    giaithua(a);
}