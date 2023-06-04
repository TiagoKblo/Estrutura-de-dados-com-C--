#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

struct pilha {
	int valor;
	struct pilha* prox;
};

struct pilha* topo = NULL;

void push(int i) {
	struct pilha* novo = (struct pilha*)malloc(sizeof(struct pilha));
	novo->valor = i;
	if (topo == NULL)
		novo->prox = NULL;
	else
		novo->prox = topo;
	topo = novo;
}

void imprime() {
	struct pilha* aux;
	if (topo != NULL) {
		for (aux = topo; aux != NULL; aux = aux->prox)
			printf("valor = %d\n", aux->valor);
	}
	else
		printf("\nTentou imprimir de uma Pilha Vazia\n");
		getche();
}

int pop() {
	int valor;
	struct pilha* aux;
	if (topo != NULL) {
		aux = topo;
		valor = topo->valor;
		topo = topo->prox;
		free(aux);
		return valor;
	}
	else {
		printf("\nTentou remover de uma Pilha Vazia\n");
		return 0;
	}
}
	
int main() {
	int op, valor, retorno;
	
	while (op != 4) {
		system("cls");
		printf("\nProgramação para Manipulação de Pilha");
		printf("\nDigite 1 para Inserir Elemento na Pilha");
		printf("\nDigite 2 para Imprimir a Pilha");
		printf("\nDigite 3 para Remover Elemento da pilha");
		printf("\nDigite 4 para Sair");
		printf("\nEntre com a Opção Desejada: ");
		scanf("%d", &op);
		switch (op) {
			case 1:
				printf("Entre com um elemento inteiro para a pilha: ");
				scanf("%d", &valor);
				push(valor);
				break;
			case 2:
				imprime();
				break;
			case 3:
				retorno = pop();
				if (retorno != 0)
					printf("\nO valor removido foi: %i", retorno);
				getchar();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Opção Invalida!\n");
		}
	}
	return 0;
}

