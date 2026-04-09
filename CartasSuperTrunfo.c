#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo1[4];  // tamanho 4 para caber a letra, dois números e o \0
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pTuristicos2;
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

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pTuristicos2);

return 0;
} 
