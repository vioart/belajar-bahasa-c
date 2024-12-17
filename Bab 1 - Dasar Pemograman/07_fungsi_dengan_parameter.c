#include <stdio.h>

int tambah(int a, int b) { // Fungsi dengan parameter
    return a + b;
}

int main() {
    int hasil = tambah(3, 7); // Memanggil fungsi
    printf("Hasil penjumlahan: %d\n", hasil);
    return 0;
}
