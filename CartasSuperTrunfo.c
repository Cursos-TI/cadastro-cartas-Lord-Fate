#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado 2; // armazena a letra do estado das cartas (1 e 2)
  char codigo1[4], codigo2[4]; // armazena o código da carta (ex:A01, B02)
  char cidade1[50], cidade2[50]; // armazena o nome da cidade
  int população1, população2; // armazena a população da cidade
  float pib1, pib2; // armazena o PIB da cidade
  int pontosTuristicos1, pontosTuristicos2; // armazena o número de pontos turísticos
  
  // Área para entrada de dados

  printf("Cadastro da Carta 1\n"); //
  
  printf("Digite a letra do estado (A-H): "); // solicita ao usuário a letra do estado
  scanf("%c, &estado1"); // lê a letra do estado digitada pelo usuário
  
  printf("Digite o codigo da carta (ex:A01): "); // solicita o código da carta
  scanf("%s", codigo1); // lê o código da carta
  
  // Área para exibição dos dados da cidade

return 0;
} 
