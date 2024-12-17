#include <stdio.h>

int isPrima(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n = 17;
    if (isPrima(n)) {
        printf("%d adalah bilangan prima\n", n);
    } else {
        printf("%d bukan bilangan prima\n", n);
    }
    return 0;
}
