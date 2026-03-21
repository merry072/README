#include <stdio.h>

int main() {
    int n, reverse = 0, sisa;

    printf("Masukkan angka: ");
    scanf("%d", &n);

    while (n != 0) {
        sisa = n % 10;
        reverse = reverse * 10 + sisa;
        n /= 10;
    }

    printf("Reverse = %d\n", reverse);
    return 0;
}