//04.02.2021
//Aufgabe 3
#include <stdio.h>

int main() {
    float a, b, x, y, max_y = -1e9;

    printf("Geben Sie die Werte für a und b ein: ");
    scanf("%f %f", &a, &b);

    printf("Geben Sie eine Reihe von reellen Zahlen ein (0 zum Beenden): ");
    while (scanf("%f", &x) && x != 0) {
        y = a * x + b;
        printf("y = %.2f\n", y);
        if (y > max_y) max_y = y;
    }

    printf("Maximale berechnete y-Koordinate: %.2f\n", max_y);

    return 0;
}
