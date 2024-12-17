#include <stdio.h>

int main() {
    int a = 10, b = 5;
    if (a % b == 0) {
        printf("%d habis dibagi %d\n", a, b);
    } else {
        printf("%d tidak habis dibagi %d\n", a, b);
    }
    return 0;
}
