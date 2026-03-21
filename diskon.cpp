#include <stdio.h>

int main() {
    int belanja;

    printf("Total belanja: ");
    scanf("%d", &belanja);

    if(belanja >= 100000)
        printf("Diskon 20%%\n");
    else if(belanja >= 50000)
        printf("Diskon 10%%\n");
    else
        printf("Tidak ada diskon\n");
}