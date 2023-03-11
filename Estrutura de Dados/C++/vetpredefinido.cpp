#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
 int vetor[6]={10,20,30,40,50,60};
   for (int i=0; i<=5; i++) {
   printf("O valor do vetor é: %i\n",vetor[i]);
   }
}
