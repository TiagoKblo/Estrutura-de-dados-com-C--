#include <stdio.h>
#include <locale.h>
float areaCircunferencia(float raio) {
    float area;
    area = 3.14 * (raio * raio);
    return area;
}

int main() {
	setlocale(LC_ALL,"");
    float raio, area;
    printf("Digite o raio da circunfer�ncia: ");
    scanf("%f", &raio);
    area = areaCircunferencia(raio);
    printf("A �rea da circunfer�ncia �: %.2f\n", area);
}
