#include <stdio.h>

float konversi(float c) {
    return (c * 9/5) + 32;
}

int main() {
    float c;
    printf ("Masukkan nilai celcius = ");
    scanf("%f", &c);

    printf("%.2f\n", konversi(c));
}