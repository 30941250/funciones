#include <stdio.h>
#include <math.h>
int es_primo(int n) {

  if (n <= 1) {
    return 0;
  }

  if (n == 2 || n == 3) {
    return 1;
  }

  if (n % 2 == 0 || n % 3 == 0) {
    return 0;
  }
   int raiz = sqrt(n);

  for (int i = 5; i <= raiz; i += 6) {

    if (n % i == 0 || n % (i + 2) == 0) {
      return 0;
    }
  }
   return 1;
}

void mostrar_primos(int a, int b) {
  for (int n = a; n <= b; n++) {
    if (es_primo(n)) {
      printf("%d ", n);
    }
  }
  printf("\n");
}

int main() {
  int a, b;
  printf("Ingrese el límite inferior y superior del rango: ");
  scanf("%d %d", &a, &b);
  mostrar_primos(a, b);
  // Retornar 0
  return 0;
}
