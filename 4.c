#include <stdio.h>
#include <stdlib.h>

void determinar_signo(int n) {

  if (n > 0) {
    printf("El n�mero %d es positivo\n", n);
  }

  else if (n < 0) {
    printf("El n�mero %d es negativo\n", n);
  }

  else {
    printf("El n�mero %d es cero\n", n);
  }
}
