#include <stdio.h>

int Prima(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    if (Prima(angka))
        printf("Prima\n");
    else
        printf("Bukan Prima\n");

    return 0;
}