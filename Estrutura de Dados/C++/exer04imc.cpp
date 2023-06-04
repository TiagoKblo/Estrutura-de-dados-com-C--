#include <stdio.h>
#include <locale.h>

float calculoImc(float altura, float peso){
	float imc;
    
	printf("Digite o seu peso em quilos: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);
    
	imc = peso/(altura * altura);
	return imc;
}
	
int main() {
	setlocale(LC_ALL,"");
	float imc, peso, altura;
    
    imc = calculoImc(altura,peso);
    printf("Seu IMC é: %.2f\n", imc);
}

