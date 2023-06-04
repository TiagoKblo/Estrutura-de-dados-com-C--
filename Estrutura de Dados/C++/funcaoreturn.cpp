#include <stdio.h>
#include <locale.h>
float somar(float x, float y){
	
return(x+y);
	}
	float quadrado(float resultado){
		return(resultado * resultado);
	}
int main() {
	setlocale(LC_ALL,"");
	float x, y, resultado;
	printf("Entre com o valor de x: ");
	scanf("%f",&x);
	printf("Entre com valor de y: ");
	scanf("%f",&y);
	resultado = somar(x,y);
	printf("Soma: %f\n",resultado);
	printf("Quadrado: %f", quadrado(resultado));
}
