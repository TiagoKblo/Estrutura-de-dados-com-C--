#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    float media, frequencia;

    printf("Digite a sua m�dia: ");
    scanf("%f", &media);

    printf("Digite a sua frequ�ncia em percentual: ");
    scanf("%f", &frequencia);

    if (media >= 6 && frequencia >= 75) {
        printf("Parab�ns! Voc� foi aprovado.\n");
    } else if (media >= 6 && frequencia < 75) {
        printf("Voc� foi reprovado por frequ�ncia.\n");
    } else if (media < 6 && frequencia >= 75) {
        printf("Voc� foi reprovado por nota.\n");
    } else {
        printf("Voc� foi reprovado por nota e frequ�ncia.\n");
    }

}

