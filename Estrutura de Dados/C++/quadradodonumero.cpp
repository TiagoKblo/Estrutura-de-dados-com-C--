#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	int i;
	for(i = 1; i < 21; i++){
      printf("o quadrado do numero %d é: = %d\n", i, i*i);
	}
}
