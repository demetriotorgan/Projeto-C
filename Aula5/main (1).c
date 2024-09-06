#include <stdio.h>
// Versão 01 do game Advinhação
// Criando uma mensagem inicial
// Definir as variáveis
// Criar o laço de tentativas com as verificações

int main() {
  printf("---BEM VINDO AO JOGO DA ADIVINHAÇÃO---\n");
  printf("Descubra meu número secreto em 5 tentativas\n");
  printf("Meu número esta entre 0 e 10\n");
  printf("\n***************************************\n");

  //-----Variáveis
  int numeroSecreto = 7;
  int chute;

  //------Iniciando o FOR
  for (int i = 1; i <= 5; i++) {
    printf("Qual é o seu chute: ");
    scanf("%d", &chute);

    // Verificando o chute digitado
    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto);
    int menor = (chute < numeroSecreto);

    if (acertou) {
      printf("Parabéns você acertou\n");
      break; // Encerrando o laço for
    } else if (maior) {
      printf("Seu chute foi maior que o número Secreto\n");
    } else if (menor) {
      printf("Seu chute foi menor que o núemero Secreto\n");
    }
    printf("Tentativa %d\n", i + 1);
  }
  printf("Fim das tentativas\n");
  return 0;
}