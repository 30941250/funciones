
#include <stdio.h>
#include <math.h>


int es_primo(int n) {

  if (n <= 1) {
    return 0;
  }

  if (n == 2) {
    return 1;
  }

  if (n % 2 == 0) {
    return 0;
  }

  for (int i = 3; i <= sqrt(n); i += 2) {

    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}


int main() {

  int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 97, 100, 101, 102, 103};

  for (int i = 0; i < 15; i++) {
    int n = numeros[i];
    printf("%d es %s\n", n, es_primo(n) ? "primo" : "no primo");
  }
  return 0;
}
