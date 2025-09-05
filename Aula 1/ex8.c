#include <stdio.h>

int main () {
    int i;
    int n;
    float numero, soma = 0, media, maior, menor;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("A quantidade de números deve ser positiva.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &numero);

        if (i == 0) {
            maior = numero;
            menor = numero;
        }

        soma += numero;

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    media = soma / n;

    printf("\n--- Resultados ---\n");
    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", media);
    printf("Maior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);

    return 0;
}