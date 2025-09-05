#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    int *p = &numero;

    printf("Digite um numero: ");
    scanf("%d", *p);

    printf("Valor da variável: %d\n", *p);
    printf("Valor do endereço: %p", p);

    return 0;
}