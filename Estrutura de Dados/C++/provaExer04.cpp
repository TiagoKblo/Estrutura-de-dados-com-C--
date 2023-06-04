#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Pilha {
    int itens[MAX_SIZE];
    int topo;
};

void inicializar(struct Pilha *pilha) {
    pilha->topo = -1;
}

int vazia(struct Pilha *pilha) {
    return pilha->topo == -1;
}

int cheia(struct Pilha *pilha) {
    return pilha->topo == MAX_SIZE - 1;
}

void empilhar(struct Pilha *pilha, int valor) {
    if (cheia(pilha)) {
        printf("Erro: a pilha está cheia.\n");
        return;
    }
    pilha->itens[++pilha->topo] = valor;
}

int desempilhar(struct Pilha *pilha) {
    if (vazia(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return -1;
    }
    return pilha->itens[pilha->topo--];
}

int topo(struct Pilha *pilha) {
    if (vazia(pilha)) {
        printf("Erro: a pilha está vazia.\n");
        return -1;
    }
    return pilha->itens[pilha->topo];
}

void ordenarPilha(struct Pilha *pilha) {
    if (vazia(pilha))
        return;

    struct Pilha pilhaAux;
    inicializar(&pilhaAux);

    while (!vazia(pilha)) {
        int menor = desempilhar(pilha);

        while (!vazia(&pilhaAux) && topo(&pilhaAux) < menor) {
            empilhar(pilha, desempilhar(&pilhaAux));
        }

        empilhar(&pilhaAux, menor);
    }

    while (!vazia(&pilhaAux)) {
        empilhar(pilha, desempilhar(&pilhaAux));
    }
}

void imprimirPilha(struct Pilha *pilha) {
    if (vazia(pilha)) {
        printf("A pilha está vazia.\n");
        return;
    }

    printf("Conteúdo da pilha: ");

    for (int i = pilha->topo; i >= 0; i--) {
        printf("%d ", pilha->itens[i]);
    }

    printf("\n");
}

int main() {
    struct Pilha pilha;
    inicializar(&pilha);

    // Exemplo de uso
    empilhar(&pilha, 5);
    empilhar(&pilha, 3);
    empilhar(&pilha, 9);
    empilhar(&pilha, 1);
    empilhar(&pilha, 7);

    printf("Pilha original:\n");
    imprimirPilha(&pilha);

    ordenarPilha(&pilha);

    printf("Pilha ordenada:\n");
    imprimirPilha(&pilha);

    return 0;
}

