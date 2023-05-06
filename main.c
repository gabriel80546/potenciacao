#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, j;
    double a, b, resultado = 1;

    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    j = (int)b;
    for(i = 0; i < (int)b; i++) {
        resultado *= a;
    }
    printf("a ^ b = %.2lf (b aproximado para: %i)\n", resultado, (int)b);
    return 0;
}
