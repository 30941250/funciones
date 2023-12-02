#include <stdio.h>
#include <stdlib.h>

nt contar_cifras(int n) {

  if (n < 0) {
    n = -n;
  }

  if (n == 0) {
    return 1;
  }

  int contador = 0;

  while (n > 0) {
    n = n / 10;
    contador++;
  }

  return contador;
}
