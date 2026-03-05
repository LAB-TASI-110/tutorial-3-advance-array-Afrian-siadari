//12s25003-Afrian Josse siadari
#include <stdio.h>

int main() {
    int n;
    int i;
    int nilai;
    int total_nilai = 0;
    double rata_rata;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nilai);
        total_nilai += nilai;
    }

    rata_rata = (double)total_nilai / n;

    printf("%d\n", total_nilai);

    printf("%.2f\n", rata_rata);

    return 0;
}
