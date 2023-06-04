#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*fun��o para c�lculo da m�dia*/
float media(int n, float *v)
{
	int i;
	float s= 0.0f;
	for(i=0; i<n; i++)
	{
	s+= v[i];
}
return s/n;
}
int main()
{
	setlocale(LC_ALL,"");
	int i, n;
	float *v;
	float med;
	printf("\nQuantas notas ser�o lidas?: ");
	scanf("%i",&n);
	/*aloca��o din�mica*/
	v= (float*) malloc (n*sizeof(float));
	if(v == NULL) {
		printf("Mem�ria Insulficiente");
		return 1;
	}
	/*leitura dos valores*/
	for(i==0; i<n; i++){
		printf("Entre com nota %i: ",i);
		scanf("%f", &v[i]);
	}
	med= media(n,v);
	printf("Media: %.2f ", med);
	/*libera mem�ria*/
	free(v);
	
}
