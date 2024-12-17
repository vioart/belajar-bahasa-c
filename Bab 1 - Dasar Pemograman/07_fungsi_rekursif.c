#include <stdio.h>

int faktorial(int n) {
    if (n == 1) return 1;
    return n * faktorial(n - 1);
}

int main() {
    int n = 5;
    printf("Faktorial dari %d adalah %d\n", n, faktorial(n));
    return 0;
}
