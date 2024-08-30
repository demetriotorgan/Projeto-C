#include <stdio.h>

int main() {
  // Declaração de variáveis
  int numeros[5]; // Array de inteiros com 5 elementos
  int soma = 0;   // Variável para armazenar a soma dos elementos
  int i;          // Variável de controle para o loop

  // Entrada de dados: preenchendo o array
  printf("Digite 5 números inteiros:\n");
  for (i = 0; i < 5; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  // Cálculo da soma dos elementos
  for (i = 0; i < 5; i++) {
    soma += numeros[i];
  }

  // Saída do resultado
  printf("A soma dos números é: %d\n", soma);

  return 0;
}