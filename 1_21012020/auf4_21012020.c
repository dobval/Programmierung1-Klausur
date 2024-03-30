#include <stdio.h>

int sum_lim(float arr[], int n, float lim, float *sum) {
    *sum = 0;
    int count = 0;
    for (int i = 0; i < n && *sum + arr[i] < lim; i++) {
        *sum += arr[i];
        count++;
    }
    return count;
}

int main() {
    int nf;
    float lim;

    printf("Geben Sie einen Wert für nf ein: ");
    scanf("%d", &nf);

    if (nf <= 0 || nf > 30) {
        printf("Ungültiger Wert für nf.\n");
        return 0;
    }

    printf("Geben Sie einen Wert für lim ein: ");
    scanf("%f", &lim);

    float f[nf];
    printf("Geben Sie die Elemente der Reihe ein: ");
    for (int i = 0; i < nf; i++) {
        scanf("%f", &f[i]);
    }

    float sum;
    int count = sum_lim(f, nf, lim, &sum);

    printf("Elemente der Reihe: ");
    for (int i = 0; i < nf; i++) {
        printf("%.2f ", f[i]);
    }
    printf("\n");

    printf("Gefundene Summe: %.2f, Anzahl der summierten Elemente: %d\n", sum, count);

    return 0;
}
