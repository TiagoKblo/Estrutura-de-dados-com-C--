#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    float nota1, nota2, media, mediageral;
    for(int cont = 0; cont<10; cont++) {
    	printf("\nEntre com a nota um: ");
    	scanf("%f",&nota1);
    	printf("\nEntre com a nota dois: ");
    	scanf("%f", &nota2);
    	media =(nota1+nota2)/2;
    	if(media >=6){
    		printf("\nAprovado");
		}
		else{
			printf("\nReprovado");
		}
    	mediageral = mediageral + media;
   } 
   printf("\nMedia geral %f",mediageral/10);

}




