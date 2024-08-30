#include <stdio.h>

// Fazendo a multiplicação de dois números
int main() {
  // Declarando as variáveis
  float num1, num2, mult;

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  // Calulo do divisao
  mult = num1 * num2;

  // Saida do resultado
  printf("O resultado é: %f\n", mult);

  return 0;
}