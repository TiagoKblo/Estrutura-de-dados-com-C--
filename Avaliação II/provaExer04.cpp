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
        printf("Erro: a pilha est� cheia.\n");
        return;
    }
    pilha->itens[++pilha->topo] = valor;
}

int desempilhar(struct Pilha *pilha) {
    if (vazia(pilha)) {
        printf("Erro: a pilha est� vazia.\n");
        return -1;
    }
    return pilha->itens[pilha->topo--];
}

int topo(struct Pilha *pilha) {
    if (vazia(pilha)) {
        printf("Erro: a pilha est� vazia.\n");
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
        int maior = desempilhar(pilha);

        while (!vazia(&pilhaAux) && topo(&pilhaAux) > maior) {
            empilhar(pilha, desempilhar(&pilhaAux));
        }

        empilhar(&pilhaAux, maior);
    }

    while (!vazia(&pilhaAux)) {
        empilhar(pilha, desempilhar(&pilhaAux));
    }
}


void imprimirPilha(struct Pilha *pilha) {
    if (vazia(pilha)) {
        printf("A pilha est� vazia.\n");
        return;
    }

    printf("Conte�do da pilha: ");

    for (int i = pilha->topo; i >= 0; i--) {
        printf("%d ", pilha->itens[i]);
    }

    printf("\n");
}

int main() {
    struct Pilha pilha;
    inicializar(&pilha);

    int opcao;
    int valor;

    do {
        printf("Selecione uma op��o:\n");
        printf("1. Inserir n�mero\n");
        printf("2. Exibir n�meros\n");
        printf("3. Ordenar n�meros\n");
        printf("0. Sair\n");
        printf("Op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um n�mero: ");
                scanf("%d", &valor);
                empilhar(&pilha, valor);
                break;
            case 2:
                printf("N�meros na pilha:\n");
                imprimirPilha(&pilha);
                break;
            case 3:
                ordenarPilha(&pilha);
                printf("Pilha ordenada.\n");
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }

        printf("\n");

    } while (opcao != 0);

    return 0;
}

