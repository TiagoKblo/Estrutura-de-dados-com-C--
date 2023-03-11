#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	float notas[5], media_geral;
 	media_geral=0;
   for (int i=0; i<=5; i++) {
   printf("Digite a nota do aluno: ");
   scanf("%f",&notas[i]);
   }
   for(int i=0; i<=5; i++)
   media_geral = media_geral + notas[i];
   printf("Media das notas: %.2f\n", media_geral/5);
}
