#include <stdio.h>
#include <locale.h>

void media() {
   float nota1, nota2, nota3, media;

   printf("Digite a nota 1: ");
   scanf("%f", &nota1);

   printf("Digite a nota 2: ");
   scanf("%f", &nota2);

   printf("Digite a nota 3: ");
   scanf("%f", &nota3);

   media = (nota1 + nota2 + nota3) / 3;

   printf("A media do aluno é: %.2f", media);
}
int main() {
   setlocale(LC_ALL,"");
   media();
}
