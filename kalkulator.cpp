#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Masukkan: angka operator angka (contoh: 5 + 3)\n");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("Hasil: %d", a + b); break;
        case '-': printf("Hasil: %d", a - b); break;
        case '*': printf("Hasil: %d", a * b); break;
        case '/': printf("Hasil: %d", a / b); break;
        default: printf("Operator tidak valid");
    }
}