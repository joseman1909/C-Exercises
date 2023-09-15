#include <stdio.h>
int main()
{
    int i;
    printf("Octal:      ");
    for(i=1; i<=10; i++)
    {
        printf("%o ", i);
    }
    printf("\n");
    printf("Decimal:     ");
    for(i=1; i<=10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("Hexadecimal: ");
    for(i=1; i<=10; i++)
    {
        printf("%x ", i);
    }
    return 0;
}
