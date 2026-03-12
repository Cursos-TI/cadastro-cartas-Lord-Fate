#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2; // armazena a letra do estado das cartas (1 e 2)
  char codigo1[4], codigo2[4]; // armazena o código da carta (ex:A01, B02)
  char cidade1[50], cidade2[50]; // armazena o nome da cidade
  int populacao1, populacao2; // armazena a população da cidade
  float area1, area2; // armazena a área da cidade
  float pib1, pib2; // armazena o PIB da cidade
  int pontosTuristicos1, pontosTuristicos2; // armazena o número de pontos turísticos
  
  // Área para entrada de dados

  printf("Cadastro da Carta 1\n"); // exibe mensagem de início do cadastro da carta 1
  
  printf("Digite a letra do estado (A-H): "); // solicita ao usuário a letra do estado
  scanf(" %c", &estado1); // lê a letra do estado digitada pelo usuário
  
  printf("Digite o codigo da carta (ex:A01): "); // solicita o código da carta
  scanf("%s", codigo1); // lê o código da carta

  printf("Digite o nome da cidade: "); // solicita o nome da cidade
  scanf("%s", cidade1); // lê o nome da cidade

  printf("Digite a populacao da cidade: "); // solicita a população da cidade
  scanf("%d", &populacao1); // lê a população digitada
  
  printf("Digite a area da cidade: "); // solicita a área da cidade
  scanf("%f", &area1); // lê a área digitada
  
  printf("Digite o PIB da cidade: "); // solicita o PIB da cidade
  scanf("%f", &pib1); // lê o PIB digitado

  printf("Digite o numero de pontos turisticos: "); // solicita o número de pontos turísticos
  scanf("%d", &pontosTuristicos1); // lê a quantidade de pontos turísticos

  printf("\nCadastro da Carta 2\n"); // exibe a mensagem indicando o início do cadastro de cartas 2

  printf("Digite a letra do estado (A-H): "); // solicita a letra do estado
  scanf(" %c", &estado2); // lê a letra do estado digitada

  printf("Digite o código da carta (ex: B02): "); // solicita o código da carta
  scanf("%s", codigo2); // lê o código da carta

  printf("Digite o nome da cidade: "); // solicita o nome da cidade
  scanf("%s", cidade2); //lê o nome da cidade

  printf("Digite a populacao da cidade: "); // solicita a população da cidade
  scanf("%d", &populacao2); // lê a população digitada

  printf("Digite a area da cidade: "); // solicita a área da cidade
  scanf("%f", &area2); // lê a área digitada

  printf("Digite o PIB da cidade: "); // solicita o PIB da cidade
  scanf("%f", &pib2); // lê o PIB digitado

  printf("Digite o numero de pontos turisticos: "); // solicita o número de pontos turísticos
  scanf("%d", &pontosTuristicos2); // lê a quantidade de pontos turísticos

  // Área para exibição dos dados da cidade
  
  printf("\n--- Carta 1 ---\n"); // imprime título da primeira carta 
  printf("Estado: %c\n", estado1); // exibe o estado da carta
  printf("Codigo: %s\n", codigo1); // exibe o código da carta
  printf("Cidade: %s\n", cidade1); // exibe o nome da cidade
  printf("Populacao: %d\n", populacao1); // exibe a população
  printf("Area: %.2f km²\n", area1); // exibe a área da cidade
  printf("PIB: %.2f\n", pib1); // exibe o PIB da cidade
  printf("Pontos Turisticos: %d\n", pontosTuristicos1); // exibe o número de pontos turísticos

  printf("\n --- Carta 2 ---\n"); // imprime o título da segunda carta
  printf("Estado: %c\n", estado2); // exibe o estado da carta
  printf("Codigo: %s\n", codigo2); // exibe o código da carta
  printf("Cidade: %s\n", cidade2); // exibe o nome da cidade
  printf("Populacao: %d\n", populacao2); // exibe a população
  printf("Area: %.2f km²\n", area2); // exibe a área da cidade
  printf("PIB: %.2f\n", pib2); // exibe o PIB da cidade
  printf("Pontos Turisticos: %d\n", pontosTuristicos2); // exibe o número de pontos turísticos 

return 0;
} 
