#include <stdio.h>

int main() {
    char nama[50];
    int umur;

    printf("Masukkan nama depan: ");
    scanf("%s", nama);
    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Halo %s, umur kamu %d tahun\n", nama, umur);
    return 0;
}