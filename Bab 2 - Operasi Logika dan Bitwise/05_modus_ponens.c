#include <stdio.h>

int main() {
    int A = 1; // A = True (hujan)
    int B;     // B (jalan basah)

    if (A) { // Jika A benar
        B = 1; // Maka B juga benar
        printf("Karena hujan, jalan pasti basah.\n");
    }

    return 0;
}
