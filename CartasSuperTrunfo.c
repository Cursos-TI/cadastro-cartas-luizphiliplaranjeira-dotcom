#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao, npontoTuristico;
  float area, pib;
  char nomePais[100];
  
  // Área para entrada de dados
  printf("Por favor informe os dados das cartas:\n");

  printf("Informe o nome do país:\n");
  scanf("%s", nomePais);

  printf("Por favor digite a população:\n");
  scanf("%d", &populacao);

  printf("Por favor digite o número de ponto turísticos: \n");
  scanf("%d", &npontoTuristico);

  printf("O tamanho da área do país: \n");
  scanf("%f", &area);

  printf("O valor do PIB do país: \n");
  scanf("%f", &pib);

  // Área para exibição dos dados da cidade
  printf("Dados da cidade:\n");

  printf("Nome do país: %s\n", nomePais);

  printf("População: %d\n", populacao);

  printf("Número de pontos turísticos: %d\n", npontoTuristico);
  
  printf("Área: %.2f\n", area);

  printf("PIB: %.2f\n", pib);

  return 0;
}
