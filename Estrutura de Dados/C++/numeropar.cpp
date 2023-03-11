 #include <stdio.h>
#include <locale.h>
int main() {
 int i, count = 0;
   
   for (i = 1; i <= 30; i++) {
      if (i % 2 == 0) {
         count++;
      }
   }
   
   printf("Existem %d numeros pares de 1 a 30\n", count);
}
