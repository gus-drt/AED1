#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: "); 
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("\n%d -> Par!", num);
    } else {
        printf("\n%d -> Ímpar!", num);
    }

    return 0;
}