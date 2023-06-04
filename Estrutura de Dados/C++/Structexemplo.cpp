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
	printf("\nCartão de Débito: ");
	scanf("%i", &b.c.cart_deb);
	printf("\nCartão de Crédido: ");
	scanf("%i", &b.c.cart_cred);
	printf("\nCartão do Plano de Saúde: ");
	scanf("%i", &b.c.cart_ps);
	printf("\nCarteira Nacional de trânsito: ");
	scanf("%i", &b.c.cnh);
	printf("\nRG: ");
	scanf("%i", &b.c.rg);
	printf("\nCadastro de Pessoa Física: ");
	scanf("%i", &b.c.cpf);
	printf("\nRemédio: ");
	scanf("%s", &b.c.remedio);
	printf("\nCaderno: ");
	scanf("%s", b.caderno);
	printf("\nEstojo: ");
	scanf("%s", b.estojo);
}
void exibe(){
	printf("\nDados Cadastrados: ");
	printf("\nDinheiro: %f", b.c.dinheiro);
	printf("\nCartão de Débito: %i", b.c.cart_deb);
	printf("\nCartão de crédito: %i", b.c.cart_cred);
	printf("\nCartão do Plano de Saúde: %i", b.c.cart_ps);
	printf("\nCarteira Nacional de trânsito: %i", b.c.cnh);
	printf("\nRG: %i", b.c.rg);
	printf("\nCadastro de Pessoa Física: %i", b.c.cpf);
	printf("\nRemédio: %s", b.c.remedio);
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
