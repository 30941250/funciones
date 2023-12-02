#include <stdio.h>


void imprimir_tabla(int n) {

  for (int i = 1; i <= 10; i++) {

    printf("%d x %d = %d\n", n, i, n * i);
  }
}


int main() {

  int n;

  printf("Ingrese el número: ");

  scanf("%d", &n);

  return 0;
}
