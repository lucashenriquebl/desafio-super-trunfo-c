/*
 * DESAFIO: SUPER TRUNFO DE PAÍSES (NÍVEL INTERMEDIÁRIO)
 *
 * Objetivo: Ler dados de 2 cartas, calcular Densidade Populacional
 * e PIB per Capita, e exibir tudo.
 *
 * REGRAS: Sem laços (for/while) e sem condicionais (if/else).
 */

// Incluir a biblioteca padrão de Entrada e Saída
#include <stdio.h>

int main() {
    
    // --- Declaração das Variáveis da Carta 1 ---
    char estado1;
    char codigo1[5];      // "A01" (3) + caractere nulo '\0' (1) = 4. Usamos 5 por segurança.
    char cidade1[100];    // Um buffer de 100 caracteres para o nome da cidade.
    int populacao1;
    float area1;
    float pib1;             // Valor em bilhões (ex: 699.28)
    int pontosTuristicos1;
    // (NOVAS) Variáveis para os cálculos
    float densidade1;
    float pibPerCapita1;


    // --- Declaração das Variáveis da Carta 2 ---
    char estado2;
    char codigo2[5];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    // (NOVAS) Variáveis para os cálculos
    float densidade2;
    float pibPerCapita2;


    // --- Entrada de Dados (Carta 1) ---
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões, ex: 699.28): ");
    scanf("%f", &pib1);

    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // --- Entrada de Dados (Carta 2) ---
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- Cálculos (Carta 1) ---
    // (NOVO) Calculando a densidade: População / Área
    // É importante converter a população para float ANTES da divisão
    // para garantir um resultado com casas decimais.
    densidade1 = (float)populacao1 / area1;

    // (NOVO) Calculando o PIB per Capita: (PIB * 1 bilhão) / População
    // Multiplicamos por 1000000000.0 para converter "bilhões" para "reais".
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;


    // --- Cálculos (Carta 2) ---
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;


    // --- Exibição dos Dados (Saída) ---

    // Exibindo Carta 1
    printf("\n\n--- CARTA 1 CADASTRADA ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    // (NOVAS) Linhas de exibição formatadas com 2 casas decimais
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibindo Carta 2
    printf("\n--- CARTA 2 CADASTRADA ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // (NOVAS) Linhas de exibição
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Indica que o programa terminou com sucesso
    return 0;
}
