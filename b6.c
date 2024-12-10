#include <stdio.h>
#include <stdbool.h>

bool kiem_tra_hoan_hao(int n) {
    if (n <= 1) {
        return false;
    }

    int tong = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }

    return tong == n;
}

int main() {
    int so_1, so_2;

    printf("Nhập số nguyên thứ nhất: ");
    scanf("%d", &so_1);

    printf("Nhập số nguyên thứ hai: ");
    scanf("%d", &so_2);

    printf("Số %d là số hoàn hảo: %s\n", so_1, kiem_tra_hoan_hao(so_1) ? "True" : "False");
    printf("Số %d là số hoàn hảo: %s\n", so_2, kiem_tra_hoan_hao(so_2) ? "True" : "False");

    return 0;
}