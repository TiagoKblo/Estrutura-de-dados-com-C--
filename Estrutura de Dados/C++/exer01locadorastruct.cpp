#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct locadora {
	float preco;
	int ano;
	char artista[30], nome_album[30], estilo_musical[30], gravadora[30];
}; struct locadora l;

void cadastra(){
	printf("\nCadastro de Dvds: ");
	printf("\nArtista: ");
	scanf("%s", &l.artista);
	printf("\nNome do Albúm: ");
	scanf("%s", &l.nome_album);
	printf("\nEstilo Musical: ");
	scanf("%s", &l.estilo_musical);
	printf("\nGravadora: ");
	scanf("%s", &l.gravadora);
	printf("\nAno de lançamento: ");
	scanf("%i", &l.ano);
	printf("\nPreço: ");
	scanf("%f", &l.preco);
}
void exibe(){
	printf("\nCadastro de Dvds: ");
	printf("\nArtista: %s", l.artista);
	printf("\nNome do Albúm: %s", l.nome_album);
	printf("\nEstilo Musical: %s", l.estilo_musical);
	printf("\nGravadora: %s", l.gravadora);
	printf("\nCAno do Lançamento: %i", l.ano);
	printf("\nPreço: %f", l.ano);
}
int main() {
	setlocale(LC_ALL,"");
	int op =0;
	while(op!=3){
	
	printf("\nMenu Locadora");
	printf("\nDigite 1 para Cadastrar");
	printf("\nDigite 2 para Exibir");
	printf("\nDigite 3 para Sair");
	printf("\nOpção: ");
	scanf("%i", &op);
	switch(op){
		case 1: cadastra(); break;
		case 2: exibe(); break;
		case 3: exit(1);
		default:printf("\nOpção Inválida");
	}
}
	
	}
