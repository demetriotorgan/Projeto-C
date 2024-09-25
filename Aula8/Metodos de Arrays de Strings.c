#include <stdio.h>
#include <string.h>

int main(void) {
  // Declarando um Array de String
  char string[100] = "";

  // Utilizando o método strlen
  int tamanho = strlen(string);
  // printf("O comprimento da string é: %d\n", tamanho);

  // Utilizando o método strcpy
  char strCopy[100] = "A";
  strcpy(strCopy, string);
  // printf("Copia da string %s\n", strCopy);

  // Método strcat
  char str2[100] = " Programando em C";
  strcat(string, str2);
  // printf("String concatenada: %s\n", string);

  // Método strcmp comparando duas strings
  int comparacao = strcmp(string, strCopy);
  // printf("Valor da comparação: %d", comparacao);
  if (comparacao == 0) {
    // printf("As strings são iguais");
  } else {
    // printf("As strings são diferentes");
  }

  // Exemplo de como manipular arrays de inteiros
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[2]);
  printf("O tamnho do array é: %d", n);
  return 0;
}