#include <math.h> // Biblioteca necessária para a função sqrt()
#include <stdio.h>

int main() {
  float cateto1, cateto2, hipotenusa;

  // Entrada de dados
  printf("Digite o valor do primeiro cateto: ");
  scanf("%f", &cateto1);

  printf("Digite o valor do segundo cateto: ");
  scanf("%f", &cateto2);

  // Cálculo da hipotenusa usando o Teorema de Pitágoras
  hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));

  // Saída do resultado
  printf("A hipotenusa do triângulo é: %.1f\n", hipotenusa);

  return 0;
}
