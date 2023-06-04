#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct pilha {
	char nomeLivro[100];
	char autor[100];
	int edicao;
	int ano;
	char editora[100];
	struct pilha* prox;
};

struct pilha* topo = NULL;

void push(char nome[], char autor[], int edicao, int ano, char editora[]) {
	struct pilha* novo = (struct pilha*)malloc(sizeof(struct pilha));
	strcpy(novo->nomeLivro, nome);
	strcpy(novo->autor, autor);
	novo->edicao = edicao;
	novo->ano = ano;
	strcpy(novo->editora, editora);
	if (topo == NULL)
		novo->prox = NULL;
	else
		novo->prox = topo;
	topo = novo;
}

void imprime() {
	struct pilha* aux;
	if (topo != NULL) {
		for (aux = topo; aux != NULL; aux = aux->prox) {
			printf("Nome do Livro: %s\n", aux->nomeLivro);
			printf("Autor: %s\n", aux->autor);
			printf("Edição: %d\n", aux->edicao);
			printf("Ano: %d\n", aux->ano);
			printf("Editora: %s\n", aux->editora);
			printf("\n");
		}
	}
	else
		printf("\nPilha de Livros Vazia\n");
	getche();
}

int pop() {
	char nome[100];
	struct pilha* aux;
	if (topo != NULL) {
		aux = topo;
		strcpy(nome, topo->nomeLivro);
		topo = topo->prox;
		free(aux);
		printf("\nLivro removido: %s\n", nome);
		return 1;
	}
	else {
		printf("\nPilha de Livros Vazia\n");
		return 0;
	}
}

int main() {
	int op, edicao, ano, retorno;
	char nome[100], autor[100], editora[100];

	while (op != 4) {
		system("cls");
		printf("\nManipulação da Pilha de Livros");
		printf("\nDigite 1 para Inserir Livro na Pilha");
		printf("\nDigite 2 para Imprimir a Pilha");
		printf("\nDigite 3 para Remover Livro da Pilha");
		printf("\nDigite 4 para Sair");
		printf("\nEntre com a Opção Desejada: ");
		scanf("%d", &op);
		switch (op) {
		case 1:
			printf("Entre com o Nome do Livro: ");
			getchar();
			fgets(nome, sizeof(nome), stdin);

			printf("Entre com o Autor: ");
			fgets(autor, sizeof(autor), stdin);

			printf("Entre com a Edição: ");
			scanf("%d", &edicao);

			printf("Entre com o Ano: ");
			scanf("%d", &ano);

			printf("Entre com a Editora: ");
			getchar();
			fgets(editora, sizeof(editora), stdin);

			push(nome, autor, edicao, ano, editora);
			break;
		case 2:
			imprime();
			break;
		case 3:
			retorno = pop();
			if (retorno != 0)
				getchar();
			break;
		case 4:
			exit(1);
			break;
		default:
			printf("Opção Inválida!\n");
		}
	}
	return 0;
}

