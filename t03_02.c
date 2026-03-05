#include <stdio.h>

int main() {
    int n;
    int i;
    int nilai[100]; // Asumsi jumlah mahasiswa maksimal 100, bisa disesuaikan jika perlu
    int total_nilai = 0;
    double rata_rata;
    int count_above_average = 0; // Variabel untuk menghitung mahasiswa di atas/sama dengan rata-rata

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nilai[i]); // Membaca setiap nilai dan menyimpannya ke array
        total_nilai += nilai[i];
    }

    rata_rata = (double)total_nilai / n;

    // Menghitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    for (i = 0; i < n; i++) {
        if (nilai[i] >= rata_rata) {
            count_above_average++;
        }
    }

    printf("%d\n", total_nilai);
    printf("%.2f\n", rata_rata);
    printf("%d\n", count_above_average);

    return 0;
}
