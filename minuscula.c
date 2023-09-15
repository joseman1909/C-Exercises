#include <stdio.h>
int main() {
    char letra;
    printf("Letra: ");
    scanf(" %c", &letra);
    if (letra >= 'a' && letra <= 'z') {
        printf("%c es una letra en minuscula.\n", letra);
    } else {
        printf("%c no es una letra en minuscula.\n", letra);
    }
    return 0;
}