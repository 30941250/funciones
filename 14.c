#include <stdio.h>


void imprimir_patron(int n) {

  int num = 1;

  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= i; j++) {

      printf("%d ", num);

      num++;
    }

    printf("\n");
  }
}


int main() {

  int n;

  printf("Ingrese el número de filas: ");

  scanf("%d", &n);



  return 0;
}
