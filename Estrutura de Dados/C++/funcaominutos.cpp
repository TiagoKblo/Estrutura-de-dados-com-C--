#include<stdio.h>
#include <locale.h>

int minutos()
{
     int hora, min;
     printf("Entre com a hora: ");
     scanf("%d", &hora);
     printf("Entre com os minutos: ");
     scanf("%d", &min);
     return(hora*60 + min);
}
main()
{
	  setlocale(LC_ALL,"");
      int mins1, mins2;
      mins1 = minutos();
      mins2 = minutos();
      printf("A diferença e %d minutos.", mins2-mins1);
}

