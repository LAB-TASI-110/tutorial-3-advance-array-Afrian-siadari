#include <stdio.h>

int main() {
    int n;
    int i;
    int nilai[100]; // Asumsi jumlah mahasiswa maksimal 100, bisa disesuaikan jika perlu
    int total_nilai = 0;
    double rata_rata;
    int count_above_average = 0;
    int min_val, max_val; // Variabel baru untuk nilai minimum dan maksimum

    scanf("%d", &n);

    if (n > 0) {
        // Baca nilai pertama untuk inisialisasi min_val dan max_val
        scanf("%d", &nilai[0]);
        total_nilai += nilai[0];
        min_val = nilai[0];
        max_val = nilai[0];

        // Loop untuk membaca nilai-nilai berikutnya dan mencari min/max
        for (i = 1; i < n; i++) {
            scanf("%d", &nilai[i]);
            total_nilai += nilai[i];
            if (nilai[i] < min_val) {
                min_val = nilai[i];
            }
            if (nilai[i] > max_val) {
                max_val = nilai[i];
            }
        }
    } else {
        // Jika n adalah 0, set nilai default atau tangani sesuai kebutuhan
        // Karena n diasumsikan positif, ini hanya sebagai fallback sederhana
        min_val = 0;
        max_val = 0;
    }

    rata_rata = (double)total_nilai / n;

    // Menghitung banyaknya mahasiswa yang nilainya di atas atau sama dengan rata-rata
    for (i = 0; i < n; i++) {
        if (nilai[i] >= rata_rata) {
            count_above_average++;
        }
    }

    int rentang_nilai = max_val - min_val; // Menghitung rentang nilai

    printf("%d\n", total_nilai);
    printf("%.2f\n", rata_rata);
    printf("%d\n", count_above_average);
    printf("%d\n", rentang_nilai); // Menampilkan rentang nilai.

    return 0;
}
