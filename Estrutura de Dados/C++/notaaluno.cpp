#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    float media, frequencia;

    printf("Digite a sua média: ");
    scanf("%f", &media);

    printf("Digite a sua frequência em percentual: ");
    scanf("%f", &frequencia);

    if (media >= 6 && frequencia >= 75) {
        printf("Parabéns! Você foi aprovado.\n");
    } else if (media >= 6 && frequencia < 75) {
        printf("Você foi reprovado por frequência.\n");
    } else if (media < 6 && frequencia >= 75) {
        printf("Você foi reprovado por nota.\n");
    } else {
        printf("Você foi reprovado por nota e frequência.\n");
    }

}

