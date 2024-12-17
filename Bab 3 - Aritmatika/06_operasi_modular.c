#include <stdio.h>

int main() {
    int a = 15, b = 7, mod = 5;

    printf("Penjumlahan Modular: %d\n", (a + b) % mod); // (15+7) % 5 = 2
    printf("Pengurangan Modular: %d\n", (a - b) % mod); // (15-7) % 5 = 3
    printf("Perkalian Modular: %d\n", (a * b) % mod);   // (15*7) % 5 = 0
    return 0;
}
