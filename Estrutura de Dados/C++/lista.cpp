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
struct lista* excluir(struct lista *novo){
	int valor;
	struct lista *aux;
	if(novo !=NULL){
		aux=novo;
		valor= aux->valor;
		novo=novo->prox;
		free(aux);
	}
	else{
		printf("\nFila Vazia");
	}
	return novo;
	
	}
	
int main(){
	int op;
	struct lista *novo= NULL;
	while(op !=4){
		printf("\nFila Encadeada");
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
					novo= excluir(novo);
					break;
				case 3:
					imprime(novo);
					break;
				case 4:
					exit(1);
			}
	}
}
