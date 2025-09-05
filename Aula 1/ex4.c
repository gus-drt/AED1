#include <stdio.h>

int main() {
    int a,b,c;
    int soma;
    float media;

    printf("Digite três números: "); 
    scanf("%d %d %d", &a, &b, &c);
    soma = a+b+c;
    media = (float)soma / 3;
    printf("\nSoma: %d\nMédia: %.2f", soma, media);

    return 0;
}