#include <stdio.h>
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int n;
    printf("Numero: ");
    scanf("%d", &n);
    printf("El factorial de %d es %d.\n", n, factorial(n));
    return 0;
}