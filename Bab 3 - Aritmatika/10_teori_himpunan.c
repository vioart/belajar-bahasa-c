#include <stdio.h>

void irisan(int A[], int B[], int n, int m) {
    printf("Irisan: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
            }
        }
    }
    printf("\n");
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {3, 4, 5, 6, 7};
    int n = 5, m = 5;

    irisan(A, B, n, m);
    return 0;
}
