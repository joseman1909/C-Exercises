#include <stdio.h>
int main() {
    int n, i, ultimo = 0, penultimo = 1, ans;
    printf("Numero de terminos: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        ans = ultimo + penultimo;
        ultimo = penultimo;
        penultimo = ans;
        printf("%d ", ans);
    }
    return 0;
}