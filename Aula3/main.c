#include <stdio.h>

int main() {
  float peso, altura, imc;

  // Entrada de dados
  printf("Digite seu peso em kg: ");
  scanf("%f", &peso);

  printf("Digite sua altura em metros: ");
  scanf("%f", &altura);

  // Cálculo do IMC
  imc = peso / (altura * altura);

  // Exibir o resultado
  printf("Seu IMC é: %.2f\n", imc);

  // Classificação do IMC
  if (imc < 18.5) {
    printf("Classificação: Abaixo do peso\n");
  } else if (imc >= 18.5 && imc < 24.9) {
    printf("Classificação: Peso normal\n");
  } else if (imc >= 25 && imc < 29.9) {
    printf("Classificação: Sobrepeso\n");
  } else {
    printf("Classificação: Obesidade\n");
  }

  return 0;
}
