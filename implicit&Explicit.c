#include <stdio.h>
int main() {
    int a = 15;
    float b = 25.5;
    // Implicit type casting
    int c = a + b; // b se convierte implicitamente a int
    // Explicit type casting
    float d = (float)a + b; // a se convierte explicitamente float
    printf("%d\n", c);
    printf("%f\n", d); 
    return 0;
}