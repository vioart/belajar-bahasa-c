#include <stdio.h>

// Fungsi untuk mencari irisan antara dua himpunan
void irisan(int A[], int B[], int n, int m) {
    printf("Irisan: ");
    
    // Looping untuk memeriksa elemen-elemen dalam himpunan A
    for (int i = 0; i < n; i++) {
        // Looping untuk memeriksa elemen-elemen dalam himpunan B
        for (int j = 0; j < m; j++) {
            // Jika elemen A[i] ada dalam himpunan B, maka itu adalah elemen irisan
            if (A[i] == B[j]) {
                printf("%d ", A[i]); // Menampilkan elemen yang merupakan irisan
            }
        }
    }
    printf("\n"); // Pindah ke baris baru setelah menampilkan irisan
}

int main() {
    // Mendeklarasikan dua himpunan A dan B
    int A[] = {1, 2, 3, 4, 5}; // Himpunan A
    int B[] = {3, 4, 5, 6, 7}; // Himpunan B
    int n = 5, m = 5; // Ukuran masing-masing himpunan A dan B

    // Memanggil fungsi irisan untuk menampilkan irisan dari himpunan A dan B
    irisan(A, B, n, m);
    
    return 0; // Mengembalikan 0 untuk menandakan program selesai
}
