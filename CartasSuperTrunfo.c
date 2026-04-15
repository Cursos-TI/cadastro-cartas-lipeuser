#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Nível Aventureiro
// Objetivo: Calcular e exibir a Densidade Populacional e o PIB per Capita.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo1[4];  // tamanho 4 para caber a letra, dois números e o \0
    char cidade1[50];
    unsigned long int populacao1; // unsigned para armazenar apenas números positivos e long para aumentar a capacidade de armazenamento
    float area1;
    float pib1;
    int pTuristicos1;
    float densidade1; // nova variável
    float pibPerCapita1; // nova variável
    float superPoder1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; // unsigned para armazenar apenas números positivos e long para aumentar a capacidade de armazenamento
    float area2;
    float pib2;
    int pTuristicos2;
    float densidade2; // nova variável
    float pibPerCapita2; // nova variável
    float superPoder2;

  // Área para entrada de dados

    printf("Cadastro da carta 1\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1); //o espaço antes do %c limpa o buffer de entrada

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // lê a string incluindo espaços

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pTuristicos1);

    printf("\n"); // linha em branco para organizar a entrada

    printf("Cadastro da carta 2\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2); //o espaço antes do %c limpa o buffer de entrada

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2); // lê a string incluindo espaços

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pTuristicos2);

    printf("\n");

    // área de cálculos
    // usando (float) antes da população para garantir que o C trate a divisão com casas decimais corretamente
    // multiplicando o PIB por 1 bilhão para que o PIB per capita saia em reais, e não em "bilhões de reais por pessoa"

    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // cálculo do super poder
    // inverso da densidade: 1.0 / densidade
    // somando tudo: população + área + PIB + pontos + pibPerCapita + (1/densidade)
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

  // Área para exibição dos dados da cidade

    printf("DADOS DAS CARTAS CADASTRADAS\n");

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // comparação

    printf("*** Comparação de cartas ***");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pTuristicos1 > pTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // a menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    // obs: só vi o vídeo instruindo a criar uma variável para o resultado depois de concluir a atividade 😢

return 0;
} 
