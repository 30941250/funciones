
#include <stdio.h>
int suma_ numeros(int n) {

  return n * (n + 1) / 2;
}


int main() {

  int n;  printf("Ingrese el n�mero: ");

  scanf("%d", &n);

  int suma = suma_numeros(n);

  printf("La suma de los primeros %d n�meros naturales es %d\n", n, suma);
  // Retornar 0
  return 0;
}
