#include <stdio.h>
#include <math.h>

main() {
  float area, raio;

  printf("\nDigite o raio: ");
  scanf("%f", &raio);

  area = M_PI * pow(raio, 2);

  printf("A �rea de um c�rculo com di�metro igual a %f � %f\n", raio + raio, area);
}