#include <stdio.h>

int powerMod(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp / 2;
        base = (base * base) % mod;
    }
    return result;
}

int main() {
    int base = 2, exp = 5, mod = 3;
    printf("Perpangkatan Modular: %d\n", powerMod(base, exp, mod)); // 2^5 % 3 = 2
    return 0;
}
