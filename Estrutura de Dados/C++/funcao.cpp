#include <stdio.h>
#include <locale.h>
void somar(float x, float y){
	
	printf("Soma: %f\n",x+y);
	
}
int main() {
	setlocale(LC_ALL,"");
	float x, y;
	printf("Entre com o valor de x: ");
	scanf("%f",&x);
	printf("Entre com valor de y: ");
	scanf("%f",&y);
	somar(x,y);

}
