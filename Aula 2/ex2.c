#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a,b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("Antes da troca: 1º numero: %d - 2º numero: %d\n", a, b);
    swap(&a, &b);
    printf("Depois da troca: 1º numero:%d - 2º numero: %d\n", a, b);
    
    return 0;
}