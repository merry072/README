#include <stdio.h>

int hitung(int pilihan, int a, int b) {
    if (pilihan == 1) {
        return a + b;
    } else if (pilihan == 2) {
        return a - b;
    }
    return 0;
}

int main() {
    int pilihan = 0, a, b;

    while (pilihan != 3) {
        printf("1. Tambah\n2. Kurang\n3. Keluar\n");
        printf("Silakan pilih menu = ");
        scanf("%d", &pilihan);

        if (pilihan == 1 || pilihan == 2) {
            printf("Masukkan angka pertama = ");
            scanf("%d", &a);

            printf("Masukkan angka kedua = ");
            scanf("%d", &b);

            int hasil = hitung(pilihan, a, b);
            printf("Hasil nya adalah %d\n", hasil);
        } 
        else if (pilihan == 3) {
            printf("Keluar...\n");
        } 
        else {
            printf("Pilihan tidak valid\n");
        }
    }

    return 0;
}