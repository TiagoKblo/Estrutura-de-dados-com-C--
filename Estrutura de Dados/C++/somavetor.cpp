#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    
    int vetorA[5], vetorB[5], vetorC[5];
    
    for (int i = 0; i <= 0; i++) {
        printf("Digite o valor de A: \n");
        scanf("%d", &vetorA[i]);
        printf("Digite o valor de B: \n");
        scanf("%d", &vetorB[i]);
        
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    
    for(int i=0; i<=0; i++) {
        printf("A soma dos valores de A e B é: %d\n", vetorC[i]);
    }
}
    
