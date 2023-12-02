#include <stdio.h>
#include <stdlib.h>

void determinar_signo(int n) {

  if (n > 0) {
    printf("El número %d es positivo\n", n);
  }

  else if (n < 0) {
    printf("El número %d es negativo\n", n);
  }

  else {
    printf("El número %d es cero\n", n);
  }
}
