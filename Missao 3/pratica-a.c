#include <stdio.h>
#define CAP 100

typedef struct {
    int dados[CAP];
    int tamanho;
} ListaE;

void init(ListaE* L) {
    L->tamanho = 0;
};

int inserir_fim(ListaE* L, int x) {
    if(L->tamanho == CAP){
        printf("Lista cheia!");
        return 0;
    }

    L->dados[L->tamanho++] = x;
    return 1;
};

int inserir_pos(ListaE* L, int x, int k){
    if(L->tamanho == CAP || k < 0 || k > L->tamanho){
        printf("Erro!");
        return 0;
    }

    for(int i = L->tamanho; i > k; i--){
        L->dados[i] = L->dados[i-1];
    }

    L->dados[k] = x;
    L->tamanho++;
    return 1;
};

int remover_pos(ListaE* L, int k) {
    if(k < 0 || k > L->tamanho){
        return 0;
    };

    for(int i = k; i < L->tamanho - 1; i++){
        L->dados[i] = L->dados[i+1];
    };

    L->tamanho--;
    return 1;
};

void imprimirE(const ListaE* L) {
    for(int i = 0; i < L->tamanho; i++) {
        printf("%d ", L->dados[i]);
    }
    printf("\n");
}

int main() {
    //Checkpoint A:
    ListaE* L;
    int x = 0;
    init(L);
    
    for(int i = 0; i < 3; i++){
        x+= 10;
        inserir_fim(L, x);
    };

    printf("Checkpoint A:\n");
    imprimirE(L);

    //Checkpoint B:
    inserir_pos(L, 5, 0);
    inserir_pos(L, 15, 2);
    inserir_pos(L, 40, 5);

    printf("\nCheckpoint B:\n");
    imprimirE(L);

    //Checkpoint C:
    remover_pos(L, 0);
    remover_pos(L, 2);
    remover_pos(L, 3);

    printf("\nCheckpoint C:\n");
    imprimirE(L);
    return 0;
}