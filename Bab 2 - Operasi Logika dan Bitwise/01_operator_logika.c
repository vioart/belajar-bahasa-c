#include <stdio.h>

/*
Program: Demonstrasi Operator Logika dalam Bahasa C
Penjelasan:
1. AND (&&)  : Mengembalikan True (1) jika kedua operand bernilai True (1).
2. OR (||)   : Mengembalikan True (1) jika salah satu operand bernilai True (1).
3. NOT (!)   : Membalikkan nilai logika operand (True menjadi False, False menjadi True).
*/

int main() {
    int A = 1; // Nilai logika True (benar)
    int B = 0; // Nilai logika False (salah)

    // Operator AND (&&)
    /*
    Logika AND:
    - A && B akan True (1) hanya jika A = 1 dan B = 1.
    - Jika salah satu bernilai 0 (False), hasilnya adalah 0 (False).
    Contoh:
        A = 1, B = 0 -> A && B = 0
    */
    printf("A && B: %d\n", A && B); // Hasil: 0 (False)

    // Operator OR (||)
    /*
    Logika OR:
    - A || B akan True (1) jika salah satu operand (A atau B) bernilai 1 (True).
    - Akan False (0) hanya jika kedua operand bernilai 0 (False).
    Contoh:
        A = 1, B = 0 -> A || B = 1
    */
    printf("A || B: %d\n", A || B); // Hasil: 1 (True)

    // Operator NOT (!)
    /*
    Logika NOT:
    - Membalikkan nilai operand:
        - Jika A = 1 (True), maka !A = 0 (False).
        - Jika B = 0 (False), maka !B = 1 (True).
    */
    printf("!A: %d\n", !A); // Hasil: 0 (False)
    printf("!B: %d\n", !B); // Hasil: 1 (True)

    return 0;
}
