#include <stdio.h>

}


int aprobado(double p) {
  return p >= 5;
}

int main() {

  double nota1, nota2, nota3;

  printf("Ingrese la primera nota: ");
  scanf("%lf", &nota1);
  printf("Ingrese la segunda nota: ");
  scanf("%lf", &nota2);
  printf("Ingrese la tercera nota: ");
  scanf("%lf", &nota3);
 double prom = promedio(nota1, nota2, nota3);


  int res = aprobado(prom);

  if (res == 1) {
    printf("El estudiante aprobó el curso con un promedio de %.2f.\n", prom);
  } else {
    printf("El estudiante no aprobó el curso con un promedio de %.2f.\n", prom);
  }

  return 0;
}
