#include <stdio.h>

int main() {
  int numeros[10]; // Array para armazenar 10 números inteiros
  int i;
  int maior, menor;
  int positivos = 0, negativos = 0, zeros = 0;

  // Entrada de dados: preenchendo o array
  printf("Digite 10 números inteiros:\n");
  for (i = 0; i < 10; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  // Inicializa maior e menor com o primeiro elemento do array
  maior = menor = numeros[0];

  // Processamento: encontrar maior, menor, e contar positivos, negativos e
  // zeros
  for (i = 0; i < 10; i++) {
    if (numeros[i] > maior) {
      maior = numeros[i];
    }
    if (numeros[i] < menor) {
      menor = numeros[i];
    }
    if (numeros[i] > 0) {
      positivos++;
    } else if (numeros[i] < 0) {
      negativos++;
    } else {
      zeros++;
    }
  }

  // Saída dos resultados
  printf("Maior número: %d\n", maior);
  printf("Menor número: %d\n", menor);
  printf("Quantidade de números positivos: %d\n", positivos);
  printf("Quantidade de números negativos: %d\n", negativos);
  printf("Quantidade de zeros: %d\n", zeros);

  return 0;
}
