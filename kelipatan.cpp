#include <stdio.h>
int main (){
    int angka;
    printf ("Masukkan angka positif = ");
    scanf ("%d", &angka);

    if (angka % 2 == 0){
        printf ("angka genap");
    } else {
        printf ("angka ganjil");
    }

return 0;
}