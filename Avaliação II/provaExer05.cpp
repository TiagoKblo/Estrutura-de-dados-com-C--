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

void exibirMaiorMenorMedia(struct Pilha *pilha) {
    if (vazia(pilha)) {
        printf("A pilha está vazia.\n");
        return;
    }

    int maior = pilha->itens[0];
    int menor = pilha->itens[0];
    int soma = 0;
    int quantidade = 0;

    for (int i = 0; i <= pilha->topo; i++) {
        int valor = pilha->itens[i];

        if (valor > maior) {
            maior = valor;
        }

        if (valor < menor) {
            menor = valor;
        }

        soma += valor;
        quantidade++;
    }

    float media = (float) soma / quantidade;

    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média de todos os valores: %.2f\n", media);
}

void exibirListaInserida(struct Pilha *pilha) {
    if (vazia(pilha)) {
        printf("A pilha está vazia.\n");
        return;
    }

    printf("Lista inserida na pilha:\n");

    for (int i = pilha->topo; i >= 0; i--) {
        printf("%d\n", pilha->itens[i]);
    }

    printf("\n");
}

int main() {
    struct Pilha pilha;
    inicializar(&pilha);

    int opcao;
    int numero;

    do {
        printf("Selecione uma opção:\n");
        printf("1. Inserir número\n");
        printf("2. Exibir lista inserida\n");
        printf("3. Exibir maior, menor e média\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &numero);
                empilhar(&pilha, numero);
                break;
            case 2:
                exibirListaInserida(&pilha);
                break;
            case 3:
                exibirMaiorMenorMedia(&pilha);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }

        printf("\n");
    } while (opcao != 0);

    return 0;
}

