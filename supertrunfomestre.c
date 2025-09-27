#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;  // Mudança para unsigned long int
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;
    
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;  // Mudança para unsigned long int
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;
    
    // Variáveis para armazenar os resultados das comparações
    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade;
    int resultado_pib_per_capita;
    int resultado_super_poder;
    
    printf("=== SUPER TRUNFO DE PAÍSES - BATALHA DE CARTAS ===\n\n");
    
    // Cadastro da primeira carta
    printf("CADASTRO DA PRIMEIRA CARTA:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);  // %lu para unsigned long int
    
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculos para a primeira carta
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;  // PIB em reais (bilhões convertidos)
    
    // Cálculo do Super Poder para a primeira carta
    // Soma: população + área + PIB + pontos turísticos + PIB per capita + (1/densidade populacional)
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    
    printf("\n");
    
    // Cadastro da segunda carta
    printf("CADASTRO DA SEGUNDA CARTA:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // %lu para unsigned long int
    
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculos para a segunda carta
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;  // PIB em reais (bilhões convertidos)
    
    // Cálculo do Super Poder para a segunda carta
    // Soma: população + área + PIB + pontos turísticos + PIB per capita + (1/densidade populacional)
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);
    
    printf("\n");
    
    // Exibição dos dados cadastrados
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    // Exibição da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\n");
    
    // Exibição da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    printf("\n");
    
    // Comparações entre as cartas
    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    resultado_densidade = densidade_populacional1 < densidade_populacional2;  // Menor densidade vence
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;
    
    // Exibição dos resultados das comparações
    printf("=== BATALHA DE CARTAS ===\n\n");
    printf("Comparação de Cartas:\n");
    
    printf("População: ");
    if (resultado_populacao == 1) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    printf("Área: ");
    if (resultado_area == 1) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    printf("PIB: ");
    if (resultado_pib == 1) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    printf("Pontos Turísticos: ");
    if (resultado_pontos_turisticos == 1) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    printf("Densidade Populacional: ");
    if (resultado_densidade == 1) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    printf("PIB per Capita: ");
    if (resultado_pib_per_capita == 1) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    printf("Super Poder: ");
    if (resultado_super_poder == 1) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }
    
    return 0;
}