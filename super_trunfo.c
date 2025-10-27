/*
 * DESAFIO: SUPER TRUNFO DE PAÍSES (NÍVEL AVANÇADO)
 *
 * Objetivo: Ler dados de 2 cartas, calcular atributos (incluindo Super Poder)
 * e comparar as duas cartas, atributo por atributo, para declarar um vencedor.
 *
 * Destaques:
 * - 'populacao' agora é 'unsigned long int' (%lu)
 * - Cálculo do 'superPoder'
 * - Bloco de comparação usando operadores relacionais e ternários.
 */

#include <stdio.h>

int main() {
    
    // --- Declaração das Variáveis da Carta 1 ---
    char estado1;
    char codigo1[5];
    char cidade1[100];
    unsigned long int populacao1; // MUDANÇA: de int para unsigned long int
    float area1;
    float pib1;             
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;            // NOVO: Atributo Super Poder

    // --- Declaração das Variáveis da Carta 2 ---
    char estado2;
    char codigo2[5];
    char cidade2[100];
    unsigned long int populacao2; // MUDANÇA: de int para unsigned long int
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;            // NOVO: Atributo Super Poder


    // --- Entrada de Dados (Carta 1) ---
    printf("--- CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%lu", &populacao1); // MUDANÇA: de %d para %lu

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
    scanf("%lu", &populacao2); // MUDANÇA: de %d para %lu

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões, ex: 300.50): ");
    scanf("%f", &pib2);

    printf("Digite o N° de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // --- Cálculos (Carta 1) ---
    // (Cast de 'unsigned long int' para 'float' para a divisão)
    densidade1 = (float)populacao1 / area1; 
    
    // (Multiplica o PIB por 1 bilhão para ter o valor real)
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1; 

    // NOVO: Cálculo do Super Poder
    // Soma todos os atributos, convertendo os não-float para float.
    // (1.0 / densidade1) inverte o valor (menor densidade = maior poder)
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);


    // --- Cálculos (Carta 2) ---
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;
    
    // NOVO: Cálculo do Super Poder
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);


    // --- Exibição dos Dados (Saída) ---

    // Exibindo Carta 1
    printf("\n\n--- CARTA 1 CADASTRADA ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1); // MUDANÇA: de %d para %lu
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1); // NOVO: Exibe o Super Poder

    // Exibindo Carta 2
    printf("\n--- CARTA 2 CADASTRADA ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2); // MUDANÇA: de %d para %lu
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2); // NOVO: Exibe o Super Poder


    // --- NOVO: Bloco de Comparação das Cartas ---
    printf("\n\n--- COMPARAÇÃO DAS CARTAS ---\n");

    // Compara População (Maior vence)
    // (populacao1 > populacao2) -> 1 se for verdadeiro, 0 se for falso
    printf("População: %s (%d)\n", 
           (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu", 
           (populacao1 > populacao2));

    // Compara Área (Maior vence)
    printf("Área: %s (%d)\n", 
           (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu", 
           (area1 > area2));

    // Compara PIB (Maior vence)
    printf("PIB: %s (%d)\n", 
           (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu", 
           (pib1 > pib2));

    // Compara Pontos Turísticos (Maior vence)
    printf("Pontos Turísticos: %s (%d)\n", 
           (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 venceu" : "Carta 2 venceu", 
           (pontosTuristicos1 > pontosTuristicos2));

    // Compara Densidade Populacional (Menor vence)
    // Nota: A lógica da comparação está invertida (densidade1 < densidade2)
    printf("Densidade Populacional: %s (%d)\n", 
           (densidade1 < densidade2) ? "Carta 1 venceu" : "Carta 2 venceu", 
           (densidade1 < densidade2));

    // Compara PIB per Capita (Maior vence)
    printf("PIB per Capita: %s (%d)\n", 
           (pibPerCapita1 > pibPerCapita2) ? "Carta 1 venceu" : "Carta 2 venceu", 
           (pibPerCapita1 > pibPerCapita2));

    // Compara Super Poder (Maior vence)
    printf("Super Poder: %s (%d)\n", 
           (superPoder1 > superPoder2) ? "Carta 1 venceu" : "Carta 2 venceu", 
           (superPoder1 > superPoder2));


    return 0; // Fim do programa
}
