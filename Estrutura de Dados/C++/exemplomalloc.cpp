#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*função para cálculo da média*/
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
	printf("\nQuantas notas serâo lidas?: ");
	scanf("%i",&n);
	/*alocação dinâmica*/
	v= (float*) malloc (n*sizeof(float));
	if(v == NULL) {
		printf("Memória Insulficiente");
		return 1;
	}
	/*leitura dos valores*/
	for(i==0; i<n; i++){
		printf("Entre com nota %i: ",i);
		scanf("%f", &v[i]);
	}
	med= media(n,v);
	printf("Media: %.2f ", med);
	/*libera memória*/
	free(v);
	
}
