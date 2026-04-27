#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int populacao1, turisticos1, populacao2, turisticos2;
  float area1, pib1, area2, pib2;
  char nome1[50], codigo1[4], estado1, nome2[50], codigo2[4], estado2;

  // Área para entrada de dados
  printf("Carta 1:\n");
  printf("Informe o Estado da Carta 1:\n");
  scanf(" %c", &estado1);

  printf("Informe o Código da Carta 1:\n");
  scanf("%s", codigo1);

  printf("Informe o Nome da Cidade 1:\n");
  scanf("%s", nome1);

  printf("Informe a População da Carta 1:\n");
  scanf("%d", &populacao1);

  printf("Informe a Área da Carta 1:\n");
  scanf("%f", &area1);

  printf("Informe o PIB da Carta 1:\n");
  scanf("%f", &pib1);

  printf("Informe o número de Pontos Turisticos da carta 1:\n");
  scanf("%d", &turisticos1);

  // Entrada de dados da Carta 2

  printf("Carta 2:\n");
  printf("Informe o Estado da Carta 2:\n");
  scanf(" %c", &estado2);

  printf("Informe o Código da Carta 2:\n");
  scanf("%s", codigo2);

  printf("Informe o Nome da Cidade 2:\n");
  scanf("%s", nome2);

  printf("Informe a População da Carta 2:\n");
  scanf("%d", &populacao2);

  printf("Informe a Área da Carta 2:\n");
  scanf("%f", &area2);

  printf("Informe o PIB da Carta 2:\n");
  scanf("%f", &pib2);

  printf("Informe o número de Pontos Turisticos da carta 2:\n");
  scanf("%d", &turisticos2);


  // Área para exibição dos dados da cidade

  printf("\n=== Carta 1 ===\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome: %s\n", nome1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f de reais\n", pib1);
  printf("Pontos Turisticos: %d\n", turisticos1);

  printf("\n=== Carta 2 ===\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome: %s\n", nome2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f de reais\n", pib2);
  printf("Pontos Turisticos: %d\n", turisticos2);

return 0;
} 
