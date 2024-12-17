#include <stdio.h>

int main() {
    int pilihan;
    printf("Pilih angka 1-3: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            printf("Kamu memilih 1\n");
            break;
        case 2:
            printf("Kamu memilih 2\n");
            break;
        case 3:
            printf("Kamu memilih 3\n");
            break;
        default:
            printf("Pilihan tidak valid\n");
    }

    return 0;
}
