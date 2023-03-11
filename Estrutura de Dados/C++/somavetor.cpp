#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
 int vetorA[5], vetorB[5], vetorC[5];
   for (int i=0; i<=4; i++) {
   	printf("Digite o primeiro valor: \n");
   	scanf("%f",&vetorA[i]);
   		printf("Digite o segundo valor: \n");
   	scanf("%f",&vetorB[i]);
   }
	for(int i=0; i<=4; i++){
	vetorC[5] = (vetorA[5] + vetorB[5]);
	printf("A soma dos valores são: %f\n", vetorC[i]);
   }
}
