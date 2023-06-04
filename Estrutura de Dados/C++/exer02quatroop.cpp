#include <stdio.h>
#include <locale.h>

float somar(float num1, float num2){
	return(num1+num2);
}

float subtrair(float num1, float num2){
	return(num1-num2);
}

float multiplicar(float num1, float num2){
	return(num1*num2);
}

float dividir(float num1, float num2){
	return(num1/num2);
}

int main() {
   setlocale(LC_ALL,"");
   float num1, num2;

   printf("Digite o primeiro numero: ");
   scanf("%f", &num1);

   printf("Digite o segundo numero: ");
   scanf("%f", &num2);
   
   printf("Soma: %.2f\n",somar(num1, num2));
   
   printf("Subtraído: %.2f\n",subtrair(num1, num2));
   
   printf("Multiplicado: %.2f\n",multiplicar(num1, num2));
   
   printf("Dividido: %.2f\n",dividir(num1, num2));
}
