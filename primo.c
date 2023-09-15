#include <stdio.h>
#include <math.h>

int numeroPrimo(int num) {
    int esPrimo = 1;

    if (num <= 1) {
        esPrimo = 0;
    } else if (num == 2) {
        esPrimo = 1;
    } else {
        for (int i = 3; i <= sqrt(num); i++) {
            if (num % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    return esPrimo;
}

int main() {
    int num;
    printf("Numero: ");
    scanf("%d", &num);

    if (checkPrime(num)) {
        printf("%d es primo.\n", num);
    } else {
        printf("%d no es primo.\n", num);
    }

    return 0;
}