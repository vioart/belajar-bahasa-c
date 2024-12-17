#include <stdio.h>

/*
Program: Tabel Kebenaran Implikasi (A → B) dan Biimplikasi (A ↔ B)
Penjelasan:
1. Implikasi (A → B): Hasilnya false (0) hanya jika A benar (1) dan B salah (0). 
   Rumus: !A || B
2. Biimplikasi (A ↔ B): Hasilnya true (1) jika A dan B memiliki nilai yang sama.
   Rumus: (A && B) || (!A && !B)
*/

int main() {
    // Definisi nilai A dan B (0 dan 1)
    int A[2] = {0, 1};
    int B[2] = {0, 1};

    // Header tabel
    printf("Tabel Kebenaran Implikasi (A → B) dan Biimplikasi (A ↔ B)\n");
    printf("A\tB\tA → B\tA ↔ B\n");

    // Loop untuk semua kombinasi A dan B
    for (int i = 0; i < 2; i++) {          // Iterasi untuk A
        for (int j = 0; j < 2; j++) {      // Iterasi untuk B
            int implikasi = !A[i] || B[j]; // Rumus Implikasi
            int biimplikasi = (A[i] && B[j]) || (!A[i] && !B[j]); // Rumus Biimplikasi

            // Output hasil
            printf("%d\t%d\t%d\t%d\n", A[i], B[j], implikasi, biimplikasi);
        }
    }

    return 0;
}
