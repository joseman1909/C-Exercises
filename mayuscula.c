#include <stdio.h>
int main() {
    char letra;
    printf("Letra: ");
    scanf(" %c", &letra);
    if (letra >= 'A' && letra <= 'Z') {
        printf("%c es una letra en mayuscula.\n", letra);
    } else {
        printf("%c no es una letra en mayuscula.\n", letra);
    }
    return 0;
}