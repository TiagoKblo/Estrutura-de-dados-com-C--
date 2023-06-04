#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aviao {
    char nome[50];
    int identificador;
    char cor[20];
    struct aviao *prox;
};

struct aviao *inicio = NULL;
struct aviao *final = NULL;

int contarAvioes() {
    struct aviao *atual = inicio;
    int contador = 0;
    
    while (atual != NULL) {
        contador++;
        atual = atual->prox;
    }
    
    return contador;
}

void decolarAviao() {
    if (inicio != NULL) {
        struct aviao *temp = inicio;
        inicio = inicio->prox;
        
        printf("Decolando avião: %s (ID: %d, Cor: %s)\n", temp->nome, temp->identificador, temp->cor);
        
        free(temp);
    } else {
        printf("Não há aviões na fila de espera.\n");
    }
}

void adicionarAviao() {
    struct aviao *novo;
    novo = (struct aviao*)malloc(sizeof(struct aviao));
    
    printf("Nome do avião: ");
    scanf(" %[^\n]", novo->nome);
    printf("Identificador: ");
    scanf("%d", &novo->identificador);
    printf("Cor: ");
    scanf(" %[^\n]", novo->cor);
    
    novo->prox = NULL;
    
    if (inicio == NULL) {
        inicio = final = novo;
    } else {
        final->prox = novo;
        final = novo;
    }
    
    printf("Avião adicionado à fila de espera.\n");
}

void listarAvioes() {
    struct aviao *atual = inicio;
    
    while (atual != NULL) {
        printf("Avião: %s (ID: %d, Cor: %s)\n", atual->nome, atual->identificador, atual->cor);
        
        atual = atual->prox;
    }
    
    if (inicio == NULL) {
        printf("Não há aviões na fila de espera.\n");
    }
}

void listarPrimeiroAviao() {
    if (inicio != NULL) {
        struct aviao *primeiro = inicio;
        printf("Avião: %s (ID: %d, Cor: %s)\n", primeiro->nome, primeiro->identificador, primeiro->cor);
    } else {
        printf("Não há aviões na fila de espera.\n");
    }
}

int main() {
    int opcao;
    
    while (1) {
        printf("\nControle de Pista de Decolagem\n");
        printf("1. Listar número de aviões na fila de espera\n");
        printf("2. Autorizar decolagem do primeiro avião\n");
        printf("3. Adicionar avião à fila de espera\n");
        printf("4. Listar todos os aviões na fila de espera\n");
        printf("5. Listar características do primeiro avião\n");
        printf("6. Sair\n");
        printf("Entre com a opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                printf("Número de aviões na fila de espera: %d\n", contarAvioes());
                break;
            case 2:
                decolarAviao();
                break;
            case 3:
                adicionarAviao();
                break;
            case 4:
                listarAvioes();
                break;
            case 5:
                listarPrimeiroAviao();
                break;
            case 6:
                exit(0);
            default:
                printf("Opção inválida.\n");
        }
    }
    
    return 0;
}

