#include <stdio.h>

// Fazendo a divisao de dois números
int main() {
  // Declarando as variáveis
  float num1, num2, divisao;

  printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  // Calulo do divisao
  divisao = num1 / num2;

  // Saida do resultado
  printf("O resultado é: %f\n", divisao);

  return 0;
}