#include <stdio.h>

/*
Program: Tabel Kebenaran untuk Operasi Logika Dasar (AND, OR, NOT)
Penjelasan:
1. Konjungsi (AND): A && B akan TRUE (1) hanya jika kedua operand A dan B adalah TRUE (1).
2. Disjungsi (OR): A || B akan TRUE (1) jika salah satu operand A atau B bernilai TRUE (1).
3. Negasi (NOT): !A akan menghasilkan kebalikan dari nilai A.
   - Jika A = TRUE (1), maka !A = FALSE (0).
   - Jika A = FALSE (0), maka !A = TRUE (1).
*/

int main() {
    int A[2] = {0, 1}; // Nilai logika: 0 (False) dan 1 (True)
    int B[2] = {0, 1}; // Kombinasi nilai logika untuk A dan B

    // Tabel Kebenaran Konjungsi (AND)
    printf("Tabel Kebenaran Konjungsi (AND)\n");
    printf("A\tB\tA && B\n");
    /*
    Logika Konjungsi:
    - 0 && 0 = 0
    - 0 && 1 = 0
    - 1 && 0 = 0
    - 1 && 1 = 1
    */
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t%d\t%d\n", A[i], B[j], A[i] && B[j]);
        }
    }

    // Tabel Kebenaran Disjungsi (OR)
    printf("\nTabel Kebenaran Disjungsi (OR)\n");
    printf("A\tB\tA || B\n");
    /*
    Logika Disjungsi:
    - 0 || 0 = 0
    - 0 || 1 = 1
    - 1 || 0 = 1
    - 1 || 1 = 1
    */
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t%d\t%d\n", A[i], B[j], A[i] || B[j]);
        }
    }

    // Tabel Kebenaran Negasi (NOT)
    printf("\nTabel Kebenaran Negasi (NOT)\n");
    printf("A\t!A\n");
    /*
    Logika Negasi:
    - !0 = 1
    - !1 = 0
    */
    for (int i = 0; i < 2; i++) {
        printf("%d\t%d\n", A[i], !A[i]);
    }

    return 0;
}
