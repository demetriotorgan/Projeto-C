#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo uma estrutura para armazenar os dados do cliente
struct Cliente {
  char nome[100];
  int idade;
  char endereco[150];
  char cidade[50];
  char estado[50];
  char fone[50];
};

int main(void) {
  struct Cliente cliente;
  FILE *arquivo;

  printf("+++++Cadastro de Clientes Inteligente+++++\n");

  // Solicitando o nome do cliente
  printf("Digite o nome do cliente: ");
  fgets(cliente.nome, 100, stdin);
  cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

  // Solicitando a idade do cliente
  printf("Digite a idade do cliente: ");
  scanf("%d", &cliente.idade);
  getchar(); // Limpando o valor de memoria do scanf

  // Solicitando o end. do cliente
  printf("Digite o endereço do cliente: ");
  fgets(cliente.endereco, 150, stdin);
  cliente.endereco[strcspn(cliente.endereco, "\n")] = '\0';
  // Salvando os dados no arquivo
  arquivo = fopen("cliente.txt", "a");
  if (arquivo == NULL) {
    printf("Erro a abrir o arquivo \n");
    return 1;
  }

  // Grvando os dados no arquivo
  fprintf(arquivo, "Nome: %s\n Idade: %d\n Endereço: %s\n", cliente.nome,
          cliente.idade, cliente.endereco);
  fclose(arquivo);
  printf("Dados do cliente salvos");

  // Exibindo os dados digitados
  printf("----Exibindo os dados digitados----\n");
  printf("Nome: %s\n", cliente.nome);
  printf("Idade: %d\n", cliente.idade);
  printf("Endereço: %s\n", cliente.endereco);

  return 0;
}