#include <stdio.h>
#include <float.h>

int main() {
    float prev, curr, diff, max_diff = FLT_MIN;

    printf("Geben Sie eine Reihe von reellen Zahlen ein (0 zum Beenden): ");
    scanf("%f", &prev);
    while (scanf("%f", &curr) && curr != 0) {
        diff = curr - prev;
        printf("Unterschied: %.2f\n", diff);
        if (diff > max_diff) max_diff = diff;
        prev = curr;
    }

    printf("Maximale gefundene Unterschied: %.2f\n", max_diff);

    return 0;
}
