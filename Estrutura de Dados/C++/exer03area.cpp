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
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);
    area = areaCircunferencia(raio);
    printf("A área da circunferência é: %.2f\n", area);
}
