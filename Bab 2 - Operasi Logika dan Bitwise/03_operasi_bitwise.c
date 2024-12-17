#include <stdio.h>

int main() {
    unsigned int A = 5;  // 5 dalam biner adalah 0101
    unsigned int B = 3;  // 3 dalam biner adalah 0011

    // Bitwise AND (&)
    /*
    Operator AND (bitwise) menghasilkan 1 hanya jika kedua bit yang sesuai pada kedua angka adalah 1.
    - A = 0101 (5), B = 0011 (3)
    - A & B = 0001 (1), karena hanya bit terakhir yang kedua-duanya 1.
    */
    printf("A & B: %d\n", A & B); // Hasil: 0001 (1)

    // Bitwise OR (|)
    /*
    Operator OR (bitwise) menghasilkan 1 jika salah satu dari dua bit yang sesuai pada kedua angka adalah 1.
    - A = 0101 (5), B = 0011 (3)
    - A | B = 0111 (7), karena jika ada bit 1 di salah satu angka, maka hasilnya 1.
    */
    printf("A | B: %d\n", A | B); // Hasil: 0111 (7)

    // Bitwise XOR (^)
    /*
    Operator XOR (bitwise) menghasilkan 1 jika hanya satu bit dari dua bit yang sesuai adalah 1.
    - A = 0101 (5), B = 0011 (3)
    - A ^ B = 0110 (6), karena bit yang berbeda pada posisi tertentu menghasilkan 1.
    */
    printf("A ^ B: %d\n", A ^ B); // Hasil: 0110 (6)

    // Bitwise NOT (~)
    /*
    Operator NOT (bitwise) membalikkan setiap bit dari angka (1 menjadi 0 dan 0 menjadi 1).
    - A = 0101 (5), ~A akan menjadi 1010 dalam bentuk 2's complement.
    - Karena menggunakan unsigned int, hasilnya adalah angka negatif dalam representasi 2's complement.
    */
    printf("~A: %d\n", ~A);       // Hasil: 11111111111111111111111111111010 (-6 dalam 2's complement)

    // Left Shift (<<)
    /*
    Operator Left Shift menggeser bit-bit ke kiri, dan menambahkan 0 di sisi kanan.
    - A = 0101 (5), A << 1 menghasilkan 1010 (10), karena semua bit digeser ke kiri satu posisi.
    */
    printf("A << 1: %d\n", A << 1); // Hasil: 1010 (10)

    // Right Shift (>>)
    /*
    Operator Right Shift menggeser bit-bit ke kanan, dan untuk unsigned int, menambahkan 0 di sisi kiri.
    - A = 0101 (5), A >> 1 menghasilkan 0010 (2), karena semua bit digeser ke kanan satu posisi.
    */
    printf("A >> 1: %d\n", A >> 1); // Hasil: 0010 (2)

    return 0;
}
