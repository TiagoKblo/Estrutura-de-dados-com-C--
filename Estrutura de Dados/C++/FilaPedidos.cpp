#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

struct lista{
    int ID;
    char descricao[100];
    char data[20];
    char hora[20];
    struct lista *prox;
};

struct lista *aux, *inicio=NULL, *final=NULL;

struct lista *insere_final(){
    struct lista *novo;
    novo = (struct lista*)malloc(sizeof(struct lista));
    
    printf("Entre com o ID: ");
    scanf("%i", &novo->ID);
    
    printf("Entre com a Descrição: ");
    getchar();
    fgets(novo->descricao, sizeof(novo->descricao), stdin);
    
    printf("Entre com a Data: ");
    fgets(novo->data, sizeof(novo->data), stdin);
    
    printf("Entre com a Hora: ");
    fgets(novo->hora, sizeof(novo->hora), stdin);
    
    novo->prox = NULL;
    
    if(inicio == NULL){
        inicio = final = novo;
    }
    else{
        final->prox = novo;
        final = novo;
    }
    
    return inicio;
}

void imprime(struct lista *novo){
    if(novo != NULL){
        aux = novo;
        while(aux != NULL){
            printf("\nID: %i", aux->ID);
            printf("\nDescrição: %s", aux->descricao);
            printf("Data: %s", aux->data);
            printf("Hora: %s", aux->hora);
            aux = aux->prox;
        }
    }
}

struct lista* excluir(struct lista *novo, int valor){
    struct lista *ant = NULL;
    aux = novo;
    
    if(novo != NULL){
        while(aux != NULL && aux->ID != valor){
            ant = aux;
            aux = aux->prox;
        }
        
        if(aux == NULL){
            printf("\nNão foi possível excluir. Elemento não existe");
            return novo;
        }
        
        if(ant == NULL){
            novo = aux->prox;
        }
        else{
            ant->prox = aux->prox;
        }
        
        free(aux);
        printf("\nElemento removido");
        return novo;
    }
    else{
        printf("\nNão foi possível excluir. Lista vazia");
        return inicio;
    }
}

int main(){
    int op, remover;
    struct lista *novo = NULL;
    
    while(op != 4){
        printf("\nFila de Pedidos");
        printf("\nDigite 1 para Inserir");
        printf("\nDigite 2 para Remover");
        printf("\nDigite 3 para Imprimir");
        printf("\nDigite 4 para Sair");
        printf("\nEntre com a Opção: ");
        scanf("%i", &op);
        
        switch(op){
            case 1:
                novo = insere_final();
                break;
            case 2:
                printf("\nDigite o ID a remover: ");
                scanf("%i", &remover);
                novo = excluir(novo, remover);
                break;
            case 3:
                imprime(novo);
                break;
            case 4:
                exit(1);
        }
    }
}

