#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct carteira {
	float dinheiro;
	int cart_deb, cart_cred, cart_ps, cnh, rg, cpf;
	char remedio[30];
}; 

struct bolsa{
	char caderno[30], estojo[10];
	struct carteira c;
}; struct bolsa b;

void cadastra(){
	printf("\nDados da carteira");
	printf("\nDinheiro: ");
	scanf("%f", &b.c.dinheiro);
	printf("\nCart�o de D�bito: ");
	scanf("%i", &b.c.cart_deb);
	printf("\nCart�o de Cr�dido: ");
	scanf("%i", &b.c.cart_cred);
	printf("\nCart�o do Plano de Sa�de: ");
	scanf("%i", &b.c.cart_ps);
	printf("\nCarteira Nacional de tr�nsito: ");
	scanf("%i", &b.c.cnh);
	printf("\nRG: ");
	scanf("%i", &b.c.rg);
	printf("\nCadastro de Pessoa F�sica: ");
	scanf("%i", &b.c.cpf);
	printf("\nRem�dio: ");
	scanf("%s", &b.c.remedio);
	printf("\nCaderno: ");
	scanf("%s", b.caderno);
	printf("\nEstojo: ");
	scanf("%s", b.estojo);
}
void exibe(){
	printf("\nDados Cadastrados: ");
	printf("\nDinheiro: %f", b.c.dinheiro);
	printf("\nCart�o de D�bito: %i", b.c.cart_deb);
	printf("\nCart�o de cr�dito: %i", b.c.cart_cred);
	printf("\nCart�o do Plano de Sa�de: %i", b.c.cart_ps);
	printf("\nCarteira Nacional de tr�nsito: %i", b.c.cnh);
	printf("\nRG: %i", b.c.rg);
	printf("\nCadastro de Pessoa F�sica: %i", b.c.cpf);
	printf("\nRem�dio: %s", b.c.remedio);
	printf("\nCaderno: %s", b.caderno);
	printf("\nEstojo: %s", b.estojo);
	
}
int main() {
	setlocale(LC_ALL,"");
	int op =0;
	while(op!=3){
	
	printf("\nStruct Carteira");
	printf("\nDigite 1 para Cadastrar");
	printf("\nDigite 2 para Exibir");
	printf("\nDigite 3 para Sair");
	printf("\nOp��o: ");
	scanf("%i", &op);
	switch(op){
		case 1: cadastra(); break;
		case 2: exibe(); break;
		case 3: exit(1);
		default:printf("\nOp��o Inv�lida");
	}
}
	
	}
