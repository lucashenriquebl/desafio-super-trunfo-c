/*
 * DESAFIO: SUPER TRUNFO DE PAÍSES (NÍVEL NOVATO)
 *
 * Objetivo: Ler os dados de 2 cartas do Super Trunfo, armazenar
 * em variáveis e exibir na tela.
 *
 * REGRAS: Sem laços (for/while) e sem condicionais (if/else).
 */

// 1. Incluir a biblioteca padrão de Entrada e Saída
#include <stdio.h>

int main() {
    
    // --- Declaração das Variáveis da Carta 1 ---
    // (Uma variável para cada informação da carta)
    char estado1;
    char codigo1[5];      // "A01" (3) + caractere nulo '\0' (1) = 4. Usamos 5 por segurança.
    char cidade1[100];    // Um buffer de 100 caracteres para o nome da cidade.
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Declaração das Variáveis da Carta 2 ---
    // (Repetimos as variáveis para a segunda carta)
    char estado2;
    char codigo2[5];
    char cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    // --- Entrada de Dados (Carta 1) ---
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o Estado (A-H): ");
    // Usamos " %c" (com espaço) para consumir qualquer 'Enter'
    // que possa ter ficado no buffer de entrada.
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    // Usamos " %[^\n]" para ler a linha inteira, incluindo espaços.
    // O espaço inicial consome o 'Enter' deixado pelo scanf anterior.
    scanf(" %[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // --- Entrada de Dados (Carta 2) ---
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o Estado (A-H): ");
    // O " %c" aqui é crucial para consumir o 'Enter'
    // deixado pelo último 'scanf("%d", ...)' da Carta 1.
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- Exibição dos Dados (Saída) ---

    // Exibindo Carta 1
    printf("\n\n--- CARTA 1 CADASTRADA ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    // Usamos "%.2f" para formatar o float com 2 casas decimais
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibindo Carta 2
    printf("\n--- CARTA 2 CADASTRADA ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Indica que o programa terminou com sucesso
    return 0;
}
