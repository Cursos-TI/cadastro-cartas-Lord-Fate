#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2; // armazena a letra do estado das cartas (1 e 2)
  char codigo1[4], codigo2[4]; // armazena o código da carta (ex:A01, B02)
  char cidade1[50], cidade2[50]; // armazena o nome da cidade
  
  unsigned long int populacao1, populacao2; // alteração do tipo da população para suportar números maiores
  
  float area1, area2; // armazena a área da cidade
  float pib1, pib2; // armazena o PIB da cidade
  int pontosTuristicos1, pontosTuristicos2; // armazena o número de pontos turísticos

  float densidade1, densidade2; // armazena a densidade populacional das cidades
  float pibPerCapita1, pibPerCapita2; // armazena o PIB per capita das cidades
  
  float superPoder1, superPoder2; // novas variáveis para armazenar o super poder de cada carta

  // Área para entrada de dados

  printf("Cadastro da Carta 1\n"); // exibe mensagem de início do cadastro da carta 1
  
  printf("Digite a letra do estado (A-H): "); // solicita ao usuário a letra do estado
  scanf(" %c", &estado1); // lê a letra do estado digitada pelo usuário
  
  printf("Digite o código da carta (ex:A01): "); // solicita o código da carta
  scanf("%s", codigo1); // lê o código da carta

  printf("Digite o nome da cidade: "); // solicita o nome da cidade
  scanf("%s", cidade1); // lê o nome da cidade

  printf("Digite a populacão da cidade: "); // solicita a população da cidade
  scanf("%lu", &populacao1); // lê a população da carta 1 como unsigned long int
  
  printf("Digite a área da cidade: "); // solicita a área da cidade
  scanf("%f", &area1); // lê a área digitada
  
  printf("Digite o PIB da cidade: "); // solicita o PIB da cidade
  scanf("%f", &pib1); // lê o PIB digitado

  printf("Digite o número de pontos turísticos: "); // solicita o número de pontos turísticos
  scanf("%d", &pontosTuristicos1); // lê a quantidade de pontos turísticos

  printf("\nCadastro da Carta 2\n"); // exibe a mensagem indicando o início do cadastro de cartas 2

  printf("Digite a letra do estado (A-H): "); // solicita a letra do estado
  scanf(" %c", &estado2); // lê a letra do estado digitada

  printf("Digite o código da carta (ex: B02): "); // solicita o código da carta
  scanf("%s", codigo2); // lê o código da carta

  printf("Digite o nome da cidade: "); // solicita o nome da cidade
  scanf("%s", cidade2); //lê o nome da cidade

  printf("Digite a populacão da cidade: "); // solicita a população da cidade
  scanf("%lu", &populacao2); // lê a população da carta 2 como unsigned long int

  printf("Digite a área da cidade: "); // solicita a área da cidade
  scanf("%f", &area2); // lê a área digitada

  printf("Digite o PIB da cidade: "); // solicita o PIB da cidade
  scanf("%f", &pib2); // lê o PIB digitado

  printf("Digite o número de pontos turísticos: "); // solicita o número de pontos turísticos
  scanf("%d", &pontosTuristicos2); // lê a quantidade de pontos turísticos

  // Cálculos

  densidade1 = populacao1 / area1; // calcula a densidade populacional da carta 1
  densidade2 = populacao2 / area2; // calcula a densidade populacional da carta 2

  pibPerCapita1 = pib1 / populacao1; // calcula o PIB per capita da carta 1
  pibPerCapita2 = pib2 / populacao2; // calcula o PIB per capita da carta 2

  // cálculo do super poder da carta 1
  // soma todos os atributos numéricos + inverso da densidade
  superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1); 
  
  // cálculo do super poder da carta 2
  superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

  // Comparações entre as cartas (1 = carta 1 vence, 0 = carta 2 vence)

  int resultadoPopulacao = populacao1 > populacao2; // população: maior valor vence
  int resultadoArea = area1 > area2; // área: maior valor vence
  int resultadoPIB = pib1 > pib2; // PIB: maior valor vence
  int resultadoPontos = pontosTuristicos1 > pontosTuristicos2; // pontos turísticos: maior valor vence
  int resultadoDensidade = densidade1 < densidade2; // menor valor vence 
  int resultadoPIBPerCapita = pibPerCapita1 > pibPerCapita2; // PIB per capita: maior valor vence
  int resultadoSuperPoder = superPoder1 > superPoder2; // super poder: maior valor vence

  // Área para exibição dos dados da cidade
  
  printf("\n--- Carta 1 ---\n"); // imprime título da primeira carta 
  printf("Estado: %c\n", estado1); // exibe o estado da carta
  printf("Código: %s\n", codigo1); // exibe o código da carta
  printf("Cidade: %s\n", cidade1); // exibe o nome da cidade
  printf("Populacão: %lu\n", populacao1); // exibe a população
  printf("Área: %.2f km²\n", area1); // exibe a área da cidade
  printf("PIB: %.2f\n", pib1); // exibe o PIB da cidade
  printf("Pontos Turísticos: %d\n", pontosTuristicos1); // exibe o número de pontos turísticos
  printf("Densidade Populacional: %.2f\n", densidade1); // exibe a densidade populacional
  printf("PIB per Capita: %.2f\n", pibPerCapita1); // exibe o PIB per capita

  printf("\n --- Carta 2 ---\n"); // imprime o título da segunda carta
  printf("Estado: %c\n", estado2); // exibe o estado da carta
  printf("Código: %s\n", codigo2); // exibe o código da carta
  printf("Cidade: %s\n", cidade2); // exibe o nome da cidade
  printf("Populacão: %lu\n", populacao2); // exibe a população
  printf("Área: %.2f km²\n", area2); // exibe a área da cidade
  printf("PIB: %.2f\n", pib2); // exibe o PIB da cidade
  printf("Pontos Turísticos: %d\n", pontosTuristicos2); // exibe o número de pontos turísticos 
  printf("Densidade Populacional: %.2f\n", densidade2); // exibe a densidade populacional
  printf("PIB per Capita: %.2f\n", pibPerCapita2); // exibe o PIB per capita

  // exibição dos resultados das comparações entre as cartas
  // Carta 1 venceu = 1 - Carta 2 venceu = 0

  printf("\nComparação de Cartas:\n");

  printf("Populacão: Carta 1 venceu  (%d)\n", resultadoPopulacao); 
  printf("Área: Carta 1 venceu (%d)\n", resultadoArea);
  printf("PIB: Carta 1 venceu (%d)\n", resultadoPIB);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", resultadoPontos);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultadoDensidade);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPIBPerCapita);
  printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperPoder);

return 0;
} 
