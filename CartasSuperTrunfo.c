#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Nível Mestre
// Objetivo: Comparar dois atributos, menu dinâmico, soma e operador ternário

int main()
{
    // variáveis de cadastro
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pTuristicos1, pTuristicos2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    // variáveis do jogo
    int opcao1, opcao2;
    float valor1_c1, valor1_c2;          // valores do 1º atributo escolhido para carta 1 e 2
    float valor2_c1, valor2_c2;          // valores do 2º atributo escolhido para carta 1 e 2
    char *nomeAtributo1, *nomeAtributo2; // para guardar os nomes (ex: "população")
    float soma1, soma2;                  // soma total dos dois atributos

    // --- ENTRADA DE DADOS ---
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
    printf("Código da carta (ex: B01): ");
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

    // menu 1
    printf("========================================\n");
    printf("        ESCOLHA O 1º ATRIBUTO           \n");
    printf("========================================\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    // menu 2
    printf("\n========================================\n");
    printf("        ESCOLHA O 2º ATRIBUTO           \n");
    printf("========================================\n");
    // só imprime a opção se ela não foi escolhida no menu 1
    if (opcao1 != 1)
        printf("1. População\n");
    if (opcao1 != 2)
        printf("2. Área\n");
    if (opcao1 != 3)
        printf("3. PIB\n");
    if (opcao1 != 4)
        printf("4. Pontos Turísticos\n");
    if (opcao1 != 5)
        printf("5. Densidade Demográfica\n");
    printf("Escolha (diferente do 1º): ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("\nERRO: Você escolheu o mesmo atributo duas vezes! Fim de jogo.\n");
        return 1; // encerra o programa com erro
    }

    // extraindo valores do atributo 1
    switch (opcao1)
    {
    case 1:
        nomeAtributo1 = "População";
        valor1_c1 = (float)populacao1;
        valor1_c2 = (float)populacao2;
        break;
    case 2:
        nomeAtributo1 = "Área";
        valor1_c1 = area1;
        valor1_c2 = area2;
        break;
    case 3:
        nomeAtributo1 = "PIB";
        valor1_c1 = pib1;
        valor1_c2 = pib2;
        break;
    case 4:
        nomeAtributo1 = "Pontos Turísticos";
        valor1_c1 = (float)pTuristicos1;
        valor1_c2 = (float)pTuristicos2;
        break;
    case 5:
        nomeAtributo1 = "Densidade Demográfica";
        valor1_c1 = densidade1;
        valor1_c2 = densidade2;
        break;
    default:
        printf("Opção 1 inválida!\n");
        return 1;
    }

    // extraindo valores do atributo 2
    switch (opcao2)
    {
    case 1:
        nomeAtributo2 = "População";
        valor2_c1 = (float)populacao1;
        valor2_c2 = (float)populacao2;
        break;
    case 2:
        nomeAtributo2 = "Área";
        valor2_c1 = area1;
        valor2_c2 = area2;
        break;
    case 3:
        nomeAtributo2 = "PIB";
        valor2_c1 = pib1;
        valor2_c2 = pib2;
        break;
    case 4:
        nomeAtributo2 = "Pontos Turísticos";
        valor2_c1 = (float)pTuristicos1;
        valor2_c2 = (float)pTuristicos2;
        break;
    case 5:
        nomeAtributo2 = "Densidade Demográfica";
        valor2_c1 = densidade1;
        valor2_c2 = densidade2;
        break;
    default:
        printf("Opção 2 inválida!\n");
        return 1;
    }

    // soma dos atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // exibição
    printf("\n*** RESULTADO DA GRANDE BATALHA ***\n\n");

    printf("Cartas na mesa: %s vs %s\n\n", cidade1, cidade2);

    printf("- Atributo 1: %s\n", nomeAtributo1);
    printf("  %s: %.2f | %s: %.2f\n", cidade1, valor1_c1, cidade2, valor1_c2);

    printf("- Atributo 2: %s\n", nomeAtributo2);
    printf("  %s: %.2f | %s: %.2f\n\n", cidade1, valor2_c1, cidade2, valor2_c2);

    printf("--- SOMA TOTAL DOS ATRIBUTOS ---\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n\n", cidade2, soma2);

    // se soma1 for maior, escreve nome da cidade1. senão, verifica se soma2 é maior e escreve cidade2. senão, escreve Empate.
    printf(">>> VENCEDOR FINAL: %s <<<\n",
           (soma1 > soma2) ? cidade1 : (soma2 > soma1) ? cidade2
                                                       : "Empate! Foi uma batalha acirrada!");

    return 0;
}