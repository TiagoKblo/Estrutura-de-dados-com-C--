#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    float salario_base, salario_final, acumulasalario=0;
    int pontos;
    for(int cont =0; cont < 20; cont++) {

	    printf("Digite o sal�rio base do funcion�rio: ");
	    scanf("%f", &salario_base);
	
	    printf("Digite a pontua��o obtida pelo funcion�rio: ");
	    scanf("%i", &pontos);
	
	    if (pontos >= 1000) {
	        salario_final = salario_base + 500;
	    } else if (pontos >= 500 && pontos <= 999) {
	        salario_final = salario_base + 300;
	    } else if (pontos >= 100 && pontos <= 499) {
	        salario_final = salario_base + 100;
	    } else if (pontos >= 1 && pontos <= 99) {
	        salario_final = salario_base + 25;
	    } else {
	        salario_final = salario_base;
	    
	    }
		printf("O sal�rio final do funcion�rio �: %.2f\n", salario_final);
	    
	    acumulasalario = acumulasalario + salario_final;
	    } 
}




