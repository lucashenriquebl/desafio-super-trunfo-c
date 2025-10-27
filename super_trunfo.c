/*
 * DESAFIO: SUPER TRUNFO DE PAÍSES (NÍVEL MESTRE)
 *
 * Objetivo: Batalha final usando a SOMA de DOIS atributos
 * escolhidos pelo usuário.
 *
 * Destaques:
 * - Cartas pré-cadastradas (hardcoded).
 * - Menu 1 para Atributo 1.
 * - Menu 2 DINÂMICO (esconde a opção do Menu 1).
 * - Lógica para impedir escolha de atributos repetidos.
 * - Normalização da Densidade (1.0 / densidade) para a soma.
 * - Comparação final baseada na SOMA dos dois atributos.
 * - Uso do Operador Ternário para exibir o vencedor.
 */

#include <stdio.h>
#include <string.h> // Para usar a função strcpy

int main() {
    
    // --- Cartas Pré-Cadastradas (Simplificação) ---

    // Carta 1
    char pais1[100] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8510000.0;
    float pib1 = 1600.0; // Em bilhões
    int pontosTuristicos1 = 150;
    float densidade1 = (float)populacao1 / area1;

    // Carta 2
    char pais2[100] = "Japao";
    int populacao2 = 125000000;
    float area2 = 377000.0;
    float pib2 = 5100.0; // Em bilhões
    int pontosTuristicos2 = 200;
    float densidade2 = (float)populacao2 / area2;

    // --- Variáveis de Controle da Batalha ---
    int opcao1, opcao2;
    char nomeAttr1[50], nomeAttr2[50];
    
    // val1_C1 = Valor do Atributo 1 para a Carta 1
    float val1_C1, val1_C2, val2_C1, val2_C2;
    float soma1, soma2;

    
    printf("--- BATALHA SUPER TRUNFO: NÍVEL MESTRE ---\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n", pais2);


    // --- Menu 1: Escolha do Primeiro Atributo ---
    printf("\n--- ESCOLHA O ATRIBUTO 1 ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica (Menor vence)\n");
    printf("Digite sua escolha (1-5): ");
    
    scanf("%d", &opcao1);

    // switch para "pegar" o valor do atributo 1
    switch (opcao1) {
        case 1:
            val1_C1 = (float)populacao1;
            val1_C2 = (float)populacao2;
            strcpy(nomeAttr1, "População");
            break;
        case 2:
            val1_C1 = area1;
            val1_C2 = area2;
            strcpy(nomeAttr1, "Área");
            break;
        case 3:
            val1_C1 =
