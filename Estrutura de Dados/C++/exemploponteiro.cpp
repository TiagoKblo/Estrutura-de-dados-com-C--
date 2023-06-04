#include <stdio.h>
#include <locale.h>
void altera(int *px, int *py)
{
	*px=3;
	*py=5;
}
int main()
{
setlocale(LC_ALL,"");
int x, y;
x=2;
y=4;
printf("Valor de x: %i e valor de y: %i", x,y);
altera(&x, &y);
printf("\nNo primeiro é %i e o segundo valor: %i", x,y);
}
