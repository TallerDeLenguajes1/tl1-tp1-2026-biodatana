// codigo_roto.c
#include <stdio.h> // Error sintaxis (Faltaba liberias)

void duplicar_numero(int *numero) { // sea corrigió '*numero' por 'numero' 
    *numero = (*numero) * 2;
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1); // Error Segmentation Fault (faltaba &)

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2; // Error sintaxis (faltaba ;)
    printf("La suma es: %d\n", suma);

    duplicar_numero(&valor1);
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0; // Error sintaxis (faltaba ;)
}