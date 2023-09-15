#include <stdio.h>

int añoBisiesto(int year) {
    int esBisiesto = 0;

    if (year % 4 == 0) {
        esBisiesto = 1;
    }

    if (year % 100 == 0) {
        esBisiesto = 0;
    }

    if (year % 400 == 0) {
        esBisiesto = 1;
    }

    return esBisiesto;
}

int main() {
    int year;
    printf("Año: ");
    scanf("%d", &year);

    if (añoBisiesto(year)) {
        printf("%d es un año bisiesto.\n", year);
    } else {
        printf("%d no es un año bisiesto.\n", year);
    }

    return 0;
}