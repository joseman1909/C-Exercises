#include <stdio.h>
int power(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * power(base, exponente - 1);
    }
}
int main() {
    int base, exponente;
    printf("Base: ");
    scanf("%d", &base);
    printf("Exponente: ");
    scanf("%d", &exponente);
    printf("%d^%d es %d.\n", base, exponente, power(base, exponente));
    return 0;
}