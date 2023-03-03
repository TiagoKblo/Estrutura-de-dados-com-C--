#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	float peso, altura, imc;

    printf("Digite o seu peso em quilos: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

	 if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso ideal. Parabéns!\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Levemente acima do peso\n");
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("Obesidade grau 1\n");
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("Obesidade grau 2 severa!\n");
    } else {
        printf("Obesidade grau 3 mórbida\n");
    }
}

