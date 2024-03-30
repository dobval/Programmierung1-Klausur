#include <stdio.h>

int triangular(int arr[], int n) {
    int min_val = 1e9, min_idx = -1;
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * (arr[i] + 1) / 2;
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_idx = i;
        }
    }
    return min_idx;
}

int main() {
    int nt;
    printf("Geben Sie einen Wert für nt ein: ");
    scanf("%d", &nt);

    if (nt <= 0 || nt > 30) {
        printf("Ungültiger Wert für nt.\n");
        return 0;
    }

    int tri[nt];
    printf("Geben Sie die Elemente der Reihe ein: ");
    for (int i = 0; i < nt; i++) {
        scanf("%d", &tri[i]);
    }

    int min_idx = triangular(tri, nt);

    printf("Elemente der Reihe nach der Verarbeitung: ");
    for (int i = 0; i < nt; i++) {
        printf("%d ", tri[i]);
    }
    printf("\n");

    printf("Minimale berechnete Dreieckszahl: %d, Index: %d\n", tri[min_idx], min_idx);

    return 0;
}
