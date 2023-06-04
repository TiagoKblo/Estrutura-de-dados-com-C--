#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct pedido {
    int ID;
    char data[20];
    char horario[20];
    float valor;
    struct pedido *prox;
};

struct pedido *inicio = NULL;
struct pedido *final = NULL;

void inserirPedido() {
    struct pedido *novo;
    novo = (struct pedido*)malloc(sizeof(struct pedido));
    
    printf("ID do Pedido: ");
    scanf("%d", &novo->ID);
    printf("Data: ");
    scanf(" %[^\n]", novo->data);
    printf("Horário: ");
    scanf(" %[^\n]", novo->horario);
    printf("Valor: ");
    scanf("%f", &novo->valor);
    
    novo->prox = NULL;
    
    if (inicio == NULL) {
        inicio = final = novo;
    } else {
        final->prox = novo;
        final = novo;
    }
    
    printf("Pedido inserido.\n");
}

void removerPedido(int ID) {
    struct pedido *ant = NULL;
    struct pedido *atual = inicio;
    
    while (atual != NULL) {
        if (atual->ID == ID) {
            if (ant == NULL) {
                inicio = atual->prox;
            } else {
                ant->prox = atual->prox;
            }
            
            if (atual == final) {
                final = ant;
            }
            
            free(atual);
            printf("Pedido removido.\n");
            return;
        }
        
        ant = atual;
        atual = atual->prox;
    }
    
    printf("Pedido não encontrado.\n");
}

void buscarPedido(int ID) {
    struct pedido *atual = inicio;
    
    while (atual != NULL) {
        if (atual->ID == ID) {
            printf("ID do Pedido: %d\n", atual->ID);
            printf("Data: %s\n", atual->data);
            printf("Horário: %s\n", atual->horario);
            printf("Valor: %.2f\n", atual->valor);
            return;
        }
        
        atual = atual->prox;
    }
    
    printf("Pedido não encontrado.\n");
}

void imprimirPedidos() {
    struct pedido *atual = inicio;
    
    while (atual != NULL) {
        printf("ID do Pedido: %d\n", atual->ID);
        printf("Data: %s\n", atual->data);
        printf("Horário: %s\n", atual->horario);
        printf("Valor: %.2f\n", atual->valor);
        printf("\n");
        
        atual = atual->prox;
    }
}

int main() {
    int opcao, ID;
    
    while (1) {
        printf("\nFila de Pedidos\n");
        printf("1. Inserir Pedido\n");
        printf("2. Remover Pedido\n");
        printf("3. Buscar Pedido\n");
        printf("4. Imprimir Pedidos\n");
        printf("5. Sair\n");
        printf("Entre com a opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                inserirPedido();
                break;
            case 2:
                printf("ID do pedido a ser removido: ");
                scanf("%d", &ID);
                removerPedido(ID);
                break;
            case 3:
                printf("ID do pedido a ser buscado: ");
                scanf("%d", &ID);
                buscarPedido(ID);
                break;
            case 4:
                imprimirPedidos();
                break;
            case 5:
                exit(0);
            default:
                printf("Opção inválida.\n");
        }
    }
    
    return 0;
}

