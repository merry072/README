#include <stdio.h>

float luasLingkaran(float r) {
    return 3.14 * r * r;
}

int main() {
    float r;
    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    printf("Luas: %.2f\n", luasLingkaran(r));
    return 0;
}