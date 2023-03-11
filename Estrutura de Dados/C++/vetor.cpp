#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
 int vetor[5], i;
    for (i=0; i<=5; i++) {
      printf("Entre com um valor: ");
      scanf("%i",&vetor[i]);
      }
      for (i=0; i<=5; i++) {
   printf("O valor do vetor é: %i\n", vetor[i]);
   
   }
}
