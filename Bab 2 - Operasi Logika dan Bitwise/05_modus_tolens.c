#include <stdio.h>

int main() {
    int B = 0; // B = False (jalan tidak basah)
    int A;

    if (!B) { // Jika B salah
        A = 0; // Maka A juga salah
        printf("Karena jalan tidak basah, maka tidak hujan.\n");
    }

    return 0;
}
