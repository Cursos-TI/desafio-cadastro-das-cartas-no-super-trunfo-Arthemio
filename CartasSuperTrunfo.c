#include <stdio.h>

int main() {
    // ===== VARIÁVEIS DA CARTA 1 =====
    char codigo1[4];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // ===== VARIÁVEIS DA CARTA 2 =====
    char codigo2[4];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // ===== COMPARAÇÃO (1 = Carta 1 vence, 0 = Carta 2 vence) =====
    int compPopulacao, compArea, compPIB, compPontos, compDensidade, compPerCapita, compSuperPoder;

    // ===== ENTRADA DE DADOS - CARTA 1 =====
    printf("Cadastro da Carta 1:\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // ===== ENTRADA DE DADOS - CARTA 2 =====
    printf("\nCadastro da Carta 2:\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // ===== COMPARAÇÃO =====
    compPopulacao     = (populacao1 > populacao2);
    compArea          = (area1 > area2);
    compPIB           = (pib1 > pib2);
    compPontos        = (pontosTuristicos1 > pontosTuristicos2);
    compDensidade     = (densidade1 < densidade2); // Menor densidade vence
    compPerCapita     = (pibPerCapita1 > pibPerCapita2);
    compSuperPoder    = (superPoder1 > superPoder2);

    // ===== EXIBIÇÃO DAS CARTAS =====
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ===== RESULTADO DAS COMPARAÇÕES =====
    printf("\n--- Comparações ---\n");
    printf("População: %d\n", compPopulacao);
    printf("Área: %d\n", compArea);
    printf("PIB: %d\n", compPIB);
    printf("Pontos turísticos: %d\n", compPontos);
    printf("Densidade Populacional (MENOR vence): %d\n", compDensidade);
    printf("PIB per Capita: %d\n", compPerCapita);
    printf("Super Poder: %d\n", compSuperPoder);

    return 0; // Fim do programa
}


