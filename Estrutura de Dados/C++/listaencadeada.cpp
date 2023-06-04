#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
struct lista{
	int valor;
	struct lista * prox;
};
struct lista *aux, *inicio=NULL, * final=NULL;

struct lista *insere_final(){
	int x;
	printf("Entre com um número inteiro: ");
	scanf("%i", &x);
	aux = (struct lista*)malloc(sizeof(struct lista));
	aux->valor =x;
	aux->prox = (struct lista*)NULL;
	if(inicio==NULL){ 
	inicio = final= aux;
}
else{
	final->prox = aux;
	final=aux;
}
return inicio;
}
void imprime(struct lista *novo){
	if(novo !=NULL){
		aux=novo;
		while(aux !=(struct lista*)NULL){
			printf("\nValor da Lista: %i", aux->valor);
			aux = aux->prox;
		}
	}
}
struct lista* excluir(lista *novo, int valor){
	struct lista *ant = NULL;
	aux = novo;
	if(novo != NULL){
		while(aux!= NULL && aux->valor !=valor){
			ant=aux;
			aux=aux->prox;
		}
		if(aux==NULL){
			printf("/nNão foi possível excluir. Elemento não existe");
			return novo;
		}
		if(ant == NULL){
			novo=aux->prox;
		}
		else{
			ant->prox= aux->prox;
		}
		free(aux);
		printf("\nElemento removido");
		return novo;
	}
	else{
		printf("\nNão foi possível excluir.Lista Vazia");
		return inicio;
	}
	
}

int main(){
	int op, remover;
	struct lista *novo= NULL;
	while(op !=4){
		printf("\nLista Encadeada");
		printf("\nDigite 1 para Inserir");
		printf("\nDigite 2 para Remover");
		printf("\nDigite 3 para Imprimir");
		printf("\nDigite 4 para Sair");
		printf("\nEntre com a Opção: ");
			scanf("%i", &op);
			switch(op){
				case 1:
					novo=insere_final();
					break;
				case 2:
					printf("\nDigite o Valor a remover: ");
					scanf("%i", &remover);
					novo= excluir(novo, remover);
					break;
				case 3:
					imprime(novo);
					break;
				case 4:
					exit(1);
			}
	}
}
