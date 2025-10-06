#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int v;
    struct No* prox;
} No;

void imprimir(const No* h){
    for(const No* p = h; p; p = p->prox) {
        printf("%d ", p->v);
    };
    printf("\n");
};

No* inserir_inicio(No* head, int x) {
    No* n = malloc(sizeof *n);
    if(!n) return head;

    n->v = x;
    n->prox = head;

    return n;
};

No* buscar(No*h, int x) {
    for(No*p = h; p; p=p->prox){
        if(p->v == x) {
            return p;
        }
    };
    return NULL;
};

No* remover(No*h, int x){
    if(!h) return NULL;
    //Caso especial: remover head
    if(h->v == x) {
        No* novo_head = h->prox;
        free(h);
        return novo_head;
    }

    //Buscar predescessor do nó a remover
    for(No*p = h; p->prox; p = p->prox) {
        if(p->prox->v == x){
            No*temp = p->prox;
            p->prox = temp->prox;
            free(temp);
            break;
        }
    }
    return h;
};

int main () {
    //Checkpoint D:
    No* h;
    No* b;
    int x;
    h = NULL;

    h = inserir_inicio(h, 30);
    h = inserir_inicio(h, 20);
    h = inserir_inicio(h, 10);

    printf("Checkpoint D\n");
    imprimir(h);

    //Checkpoint E (Buscar):
    b = buscar(h, 30);
    printf("Checkpoint E: (busca)\n");
    imprimir(b);

    //Checkpoint E (Remover):
    remover(h, 30);
    printf("Checkpoint E: (remocao)\n");
    imprimir(h);

    //Checkpoint F:
    
    return 0;
};