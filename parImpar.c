#include <stdio.h>
int esPar(int num) {
    return num % 2 == 0;
}
int main() {
    int num;
    printf("Numero: ");
    scanf("%d", &num);
    if (esPar(num)) {
        printf("%d es par\n", num);
    } else {
        printf("%d es impar\n", num);
    }
    return 0;
}