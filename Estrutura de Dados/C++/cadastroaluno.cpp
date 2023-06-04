#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct cadastro {
    int ra, celular;
    char nome[30], e_mail[30], curso[30];
};

struct cadastrar {
    struct cadastro c;
}; struct cadastrar cad;

void cadastra(){
    printf("\nCadastro de alunos");
    
    printf("\nR.A.: ");
    scanf("%i", &cad.c.ra);
    printf("\nCelular: ");
    scanf("%i", &cad.c.celular);
    printf("\nNome: ");
    scanf("%s", cad.c.nome);
    printf("\nE-mail: ");
    scanf("%s", cad.c.e_mail);
    printf("\nCurso: ");
    scanf("%s", cad.c.curso);
}

void exibe(){
    printf("\nDados Cadastrados: ");
    
    printf("\nR.A.: %i", cad.c.ra);
    printf("\nCelular: %i", cad.c.celular);
    printf("\nNome: %s", cad.c.nome);
    printf("\nE-mail: %s", cad.c.e_mail);
    printf("\nCurso: %s", cad.c.curso);
}

int main() {
    setlocale(LC_ALL,"");
    int op = 0;
    struct cadastrar cadastro_alunos; 
    while(op != 3){
        
        printf("\nStruct Cadastro");
        printf("\nDigite 1 para Cadastrar");
        printf("\nDigite 2 para Exibir");
        printf("\nDigite 3 para Sair");
        printf("\nOpção: ");
        scanf("%i", &op);
        
        switch(op){
            case 1: cadastra(); break; 
            case 2: exibe(); break; 
            case 3: exit(1);
            default: printf("\nOpção Inválida");
        }
    }
}

