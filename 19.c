#include <stdio.h>
int es_par(int n) {
   return n % 2 == 0;
}

int main() {

  int numero;

  printf("Ingrese un n�mero: ");
   scanf("%d", &numero);

  int resultado = es_par(numero);
    if (resultado == 1) {
    printf("El n�mero %d es par.\n", numero);
  } else {
    printf("El n�mero %d es impar.\n", numero);
  }

  return 0;
}
