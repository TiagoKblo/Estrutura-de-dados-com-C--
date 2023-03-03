#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"");
	float nota1, nota2, media;
	printf("Entre com a nota 1: ");
	scanf("%f", &nota1);
	printf("Entre com a nota 2: ");
	scanf("%f", &nota2);
	media = (nota1+nota2)/2;
	printf("Sua média é:%.2f", media);
	if(media >=6)
{
	printf("Aprovado");
	}
	else if(media >=3 && media <6)
	{
	printf("Aluno em Exame");
	}	
	else
{
	printf("Reprovado");
	}
}
