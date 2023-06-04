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

void obterMinMaxMedia(struct Pilha *pilha, int *maior, int *menor, float *media) {
    if (vazia(pilha)) {
        printf("A pilha está vazia.\n");
        return;
    }
    
    int soma = 0;
    *maior = *menor = topo(pilha);
    
    struct Pilha pilhaAux;
    inicializar(&pilhaAux);
    
    while (!vazia(pilha)) {
        int valor = desempilhar(pilha);
        
        soma += valor;
        
        if (valor > *maior) {
            *maior = valor;
        }
        
        if (valor < *menor) {
            *menor = valor;
        }
        
        empilhar(&pilhaAux, valor);
    }
    
    while (!vazia(&pilhaAux)) {
        empilhar(pilha, desempilhar(&pilhaAux));
    }
    
    *media = (float)soma / (pilha->topo + 1);
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
    
    int maior, menor;
    float media;

    obterMinMaxMedia(&pilha, &maior, &menor, &media);

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média aritmética: %.2f\n", media);

    return 0;
}

