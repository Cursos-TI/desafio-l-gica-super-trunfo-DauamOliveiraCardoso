#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
       // =========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // =========================

    // Carta 1
    char estado1;                
    char codigo1[4]; 
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;


    // =========================
    // ENTRADA DE DADOS - CARTA 1
    // =========================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Lê um caractere (letra do estado)

    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1); // Lê uma string (código)

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1); // Lê texto com espaços (nome da cidade)

    printf("Populacao: ");
    scanf("%d", &populacao1); // Lê número inteiro

    printf("Area (km²): ");
    scanf("%f", &area1); // Lê número decimal

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);



    // ENTRADA DE DADOS - CARTA 2
    // =========================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);



    // CÁLCULOS
    // =========================

    // Densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita = PIB / população
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

       // COMPARAÇÃO (ATRIBUTO ESCOLHIDO: PIB)

    printf("\n===== COMPARACAO DE CARTAS =====\n");
    printf("Atributo escolhido: PIB\n\n");

    // Mostrando os valores das duas cartas
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n\n", cidade2, estado2, pib2);


    // LÓGICA DE DECISÃO (PARTE MAIS IMPORTANTE)
    // =========================

    if (pib1 > pib2) {
        // Se o PIB da Carta 1 for maior, ela vence
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (pib2 > pib1) {
        // Se o PIB da Carta 2 for maior, ela vence
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        // Caso os valores sejam iguais (empate)
        printf("Resultado: Empate!\n");
    }


    return 0;
}
