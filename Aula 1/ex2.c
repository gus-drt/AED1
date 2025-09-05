#include <stdio.h>

int main() {
    int num;
    int dobro;

    printf("Digite um número inteiro: "); 
    scanf("%d", &num);
    dobro = num*2;
    printf("O dobro de %d é %d", num, dobro);

    return 0;
}