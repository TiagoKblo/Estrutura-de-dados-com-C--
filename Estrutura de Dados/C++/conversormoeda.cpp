#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
    float real, dolar, euro, libra, peso;
    
	printf("Digite a quantidade de Reais a ser convertida: ");
    scanf("%f", &real);

    dolar = real / 5.15;
    euro = real / 5.73;
    libra = real / 7.01;
    peso = real / 0.057;

    printf("Valor convertido em:\n");
    printf("D�lar Americano: %.2f\n", dolar);
    printf("Euro: %.2f\n", euro);
    printf("Libra: %.2f\n", libra);
    printf("Peso: %.2f\n", peso);

    return 0;
}
