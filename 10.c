

#include <stdio.h>


int potencia(int base, int exponente) {

  int potencia = 1;

  for (int i = 0; i < exponente; i++) {

    potencia = potencia * base;
  }

  return potencia;
}


int main() {

  int bases[] = {2, 3, 4, 5, 6};
  int exponentes[] = {0, 1, 2, 3, 4};

  for (int i = 0; i < 5; i++) {
    int base = bases[i];
    int exponente = exponentes[i];
    printf("La potencia de %d elevado a %d es %d\n", base, exponente, potencia(base, exponente));
  }
  return 0;
