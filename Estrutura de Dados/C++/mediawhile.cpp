#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    float nota1, nota2, media, mediageral;
    int cont =0;
    while(cont < 10) {
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
    	cont++;
   } 
   printf("\nMedia geral %f",mediageral/10);

}




