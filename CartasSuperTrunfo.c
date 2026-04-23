#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Nível Aventureiro
// Objetivo: Menu interativo com switch e comparação de atributos.

int main() {
    // área para definição das variáveis
    int opcao; // variável para o menu
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // entrada de dados
    printf("Cadastro da carta 1\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf(" %lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pTuristicos1);

    printf("\nCadastro da carta 2\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pTuristicos2);
    printf("\n");

    // cálculos
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // exibição
    printf("DADOS DAS CARTAS CADASTRADAS\n");
    printf("Carta 1: \nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pTuristicos1, densidade1, pibPerCapita1);
    
    printf("Carta 2: \nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pTuristicos2, densidade2, pibPerCapita2);

    // menu interativo e switch
    printf("========================================\n");
    printf("        HORA DA BATALHA! Escolha:       \n");
    printf("========================================\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Digite o número da sua escolha: ");
    scanf("%d", &opcao);

    printf("\n*** RESULTADO DA COMPARAÇÃO ***\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: Carta 1 (%s)!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: Carta 1 (%s)!\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: Carta 1 (%s)!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d\n", cidade1, pTuristicos1);
            printf("Carta 2 - %s: %d\n", cidade2, pTuristicos2);
            if (pTuristicos1 > pTuristicos2) {
                printf("Vencedor: Carta 1 (%s)!\n", cidade1);
            } else if (pTuristicos2 > pTuristicos1) {
                printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            // menor densidade vence
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) { 
                printf("Vencedor: Carta 1 (%s)!\n", cidade1);
            } else if (densidade2 < densidade1) { 
                printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Erro: Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    return 0;
}