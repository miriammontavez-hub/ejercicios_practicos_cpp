/** Programa tabla de multiplicar */

#include<stdio.h>

int main() {
    int tabla; /*Numero para multiplicar */
    printf("Numero para la tabla: \n");
    scanf("%d", &tabla);
    printf("Tabla del %d\n", tabla);
    printf("==============\n");
    for(int x = 1; x <= 10; x++)
        printf("%d x %d = %d\n", tabla, x, tabla*x);
}