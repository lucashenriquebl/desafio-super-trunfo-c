/*
 * DESAFIO: SUPER TRUNFO DE PAÍSES (NÍVEL AVENTUREIRO)
 *
 * Objetivo: Ler dados de 2 cartas, exibir um menu interativo
 * e comparar as cartas com base na escolha do usuário,
 * usando 'switch' e 'if-else'.
 *
 * Regras de Comparação:
 * - Maior vence: População, Área, PIB, Pontos Turísticos.
 * - Menor vence: Densidade Demográfica.
 */

#include <stdio.h>

int main() {
    
    // --- Declaração das Variáveis da Carta 1 ---
    char pais1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1; // Calculado

    // --- Declaração das Variáveis da Carta 2 ---
    char pais2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2; // Calculado

    // --- Variável de controle do menu ---
    int opcao;

    // --- Entrada de Dados (Carta 1) ---
    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Nome do País: ");
    // Lê a string (incluindo espaços)
    scanf(" %[^\n]", pais1); 

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

    printf("Digite o Nome do País: ");
    scanf(" %[^\n]", pais2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    
    // --- Cálculos (Ambas as Cartas) ---
    // (Cast) Converte 'populacao' para 'float' antes da divisão
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;


    // --- Exibição das Cartas (Opcional, mas bom para o usuário) ---
    printf("\n\n--- CARTAS PRONTAS PARA A BATALHA ---\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);


    // --- Menu Interativo ---
    printf("\n--- ESCOLHA O ATRIBUTO DA BATALHA ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica (Menor vence!)\n");
    printf("Digite sua escolha (1-5): ");
    
    scanf("%d", &opcao);

    // --- Lógica da Batalha (Switch Case) ---
    switch (opcao) {
        
        case 1: // População (Maior vence)
            printf("\n--- Batalha: População ---\n");
            printf("Carta 1 (%s): %d\n", pais1, populacao1);
            printf("Carta 2 (%s): %d\n", pais2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área (Maior vence)
            printf("\n--- Batalha: Área ---\n");
            printf("Carta 1 (%s): %.2f km²\n", pais1, area1);
            printf("Carta 2 (%s): %.2f km²\n", pais2, area2);
            
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB (Maior vence)
            printf("\n--- Batalha: PIB ---\n");
            printf("Carta 1 (%s): %.2f bilhões\n", pais1, pib1);
            printf("Carta 2 (%s): %.2f bilhões\n", pais2, pib2);
            
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos (Maior vence)
            printf("\n--- Batalha: Pontos Turísticos ---\n");
            printf("Carta 1 (%s): %d\n", pais1, pontosTuristicos1);
            printf("Carta 2 (%s): %d\n", pais2, pontosTuristicos2);
            
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (Menor vence)
            printf("\n--- Batalha: Densidade Demográfica (Menor Vence) ---\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", pais1, densidade1);
            printf("Carta 2 (%s): %.2f hab/km²\n", pais2, densidade2);
            
            // ATENÇÃO: A lógica está invertida (menor vence)
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default: // Caso o usuário digite uma opção inválida
            printf("\nOpção inválida! Por favor, execute o programa novamente e escolha um número de 1 a 5.\n");
            break;
    }

    return 0; // Fim do programa
}
