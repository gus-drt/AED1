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

No* inserir_pos(No* h, int x, int k){
    if(k == 0) {
        return inserir_inicio(h, x);
    }

    No* p = h;
    for(int i=0;i<k-1&&p; i++) {
        p = p->prox;
    }

    if(!p) return h; //k inválido

    No* novo = malloc(sizeof *novo);
    if(!novo) return h;

    novo->v = x;
    novo->prox = p->prox;
    p->prox = novo;
    return h;
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

void liberar_lista(No* h) {
    while(h){
        No* temp = h;
        h = h->prox;
        free(temp);
    }
}

int main () {
    //Checkpoint D:
    No* h;
    No* b;
    No* check_f;
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
    printf("Checkpoint F");
    check_f = inserir_inicio(check_f, 30);
    check_f = inserir_inicio(check_f, 20);
    check_f = inserir_inicio(check_f, 10);
    
    check_f = inserir_pos(check_f, 5, 0);
    check_f = inserir_pos(check_f, 15, 2);
    check_f = inserir_pos(check_f, 40, 5);

    imprimir(check_f);

    liberar_lista(h);
    liberar_lista(b);
    liberar_lista(check_f);

    return 0;
};