#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno {
    int RA;
    char nome[50];
    char email[50];
    char celular[20];
    struct aluno *prox;
};

struct aluno *inicio = NULL;
struct aluno *final = NULL;

void inserirInicio() {
    struct aluno *novo;
    novo = (struct aluno*)malloc(sizeof(struct aluno));
    
    printf("RA: ");
    scanf("%d", &novo->RA);
    printf("Nome: ");
    scanf(" %[^\n]", novo->nome);
    printf("E-mail: ");
    scanf(" %[^\n]", novo->email);
    printf("Celular: ");
    scanf(" %[^\n]", novo->celular);
    
    novo->prox = NULL;
    
    if (inicio == NULL) {
        inicio = final = novo;
    } else {
        novo->prox = inicio;
        inicio = novo;
    }
    
    printf("Aluno inserido no início da lista.\n");
}

void inserirFinal() {
    struct aluno *novo;
    novo = (struct aluno*)malloc(sizeof(struct aluno));
    
    printf("RA: ");
    scanf("%d", &novo->RA);
    printf("Nome: ");
    scanf(" %[^\n]", novo->nome);
    printf("E-mail: ");
    scanf(" %[^\n]", novo->email);
    printf("Celular: ");
    scanf(" %[^\n]", novo->celular);
    
    novo->prox = NULL;
    
    if (inicio == NULL) {
        inicio = final = novo;
    } else {
        final->prox = novo;
        final = novo;
    }
    
    printf("Aluno inserido no final da lista.\n");
}

void removerAluno(int RA) {
    struct aluno *ant = NULL;
    struct aluno *atual = inicio;
    
    while (atual != NULL) {
        if (atual->RA == RA) {
            if (ant == NULL) {
                inicio = atual->prox;
            } else {
                ant->prox = atual->prox;
            }
            
            if (atual == final) {
                final = ant;
            }
            
            free(atual);
            printf("Aluno removido.\n");
            return;
        }
        
        ant = atual;
        atual = atual->prox;
    }
    
    printf("Aluno não encontrado.\n");
}

void buscarAluno(int RA) {
    struct aluno *atual = inicio;
    
    while (atual != NULL) {
        if (atual->RA == RA) {
            printf("RA: %d\n", atual->RA);
            printf("Nome: %s\n", atual->nome);
            printf("E-mail: %s\n", atual->email);
            printf("Celular: %s\n", atual->celular);
            return;
        }
        
        atual = atual->prox;
    }
    
    printf("Aluno não encontrado.\n");
}

void imprimirLista() {
    struct aluno *atual = inicio;
    
    while (atual != NULL) {
        printf("RA: %d\n", atual->RA);
        printf("Nome: %s\n", atual->nome);
        printf("E-mail: %s\n", atual->email);
        printf("Celular: %s\n", atual->celular);
        printf("\n");
        
        atual = atual->prox;
    }
}

int main() {
    int opcao, RA;
    
    while (1) {
        printf("\nLista de Alunos\n");
        printf("1. Inserir Aluno no Início\n");
        printf("2. Inserir Aluno no Final\n");
        printf("3. Remover Aluno\n");
        printf("4. Buscar Aluno\n");
        printf("5. Imprimir Lista de Alunos\n");
        printf("6. Sair\n");
        printf("Entre com a opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                inserirInicio();
                break;
            case 2:
                inserirFinal();
                break;
            case 3:
                printf("RA do aluno a ser removido: ");
                scanf("%d", &RA);
                removerAluno(RA);
                break;
            case 4:
                printf("RA do aluno a ser buscado: ");
                scanf("%d", &RA);
                buscarAluno(RA);
                break;
            case 5:
                imprimirLista();
                break;
            case 6:
                exit(0);
            default:
                printf("Opção inválida.\n");
        }
    }
    
    return 0;
}

