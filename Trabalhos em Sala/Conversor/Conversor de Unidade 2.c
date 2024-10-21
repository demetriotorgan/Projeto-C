#include <stdio.h>

// função para transformar C->F
void transformandoFC(double *resultado, double *t1) {
  (*resultado) = (1.8 * (*t1) + 32);
  printf("O resultado em Fahrenheit é: %.2lf\n", *resultado);
}

// função para transformar C->F
void transformandoCF(double *resultado, double *t1) {
  (*resultado) = ((*t1) - 32) / 1.8;
  printf("O resultado em Celsius é: %.2lf\n", *resultado);
}

int main(void) {
  int opcao;
  double t1;

  printf("Escolha o tipo da conversão: \n");
  printf("1 - Celsius para Fahrenheit \n");
  printf("2 - Fahrenheit para Celsius \n");
  printf("3- Sair \n");

  do {
    printf("Digite uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      printf("Transformando Celsius para Fahrenheit \n");
      printf("Digite a temperatura em Celsius: ");
      scanf("%lf", &t1);
      double resultado = 0;
      transformandoFC(&resultado, &t1);
      break;

    case 2:
      printf("Transformando Fahrenheit para Celsius \n");
      printf("Digite a temperatura em Fahrenheit: ");
      scanf("%lf", &t1);
      double resultado2 = 0;
      transformandoCF(&resultado, &t1);
      break;

    case 3:
      printf("Saindo do programa \n");
      break;

    default:
      printf("Opção inválida \n");
      break;
    }
  } while (opcao != 3);
  return 0;
}