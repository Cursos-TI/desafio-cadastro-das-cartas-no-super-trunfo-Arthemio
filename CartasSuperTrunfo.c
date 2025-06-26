#include <stdio.h>  // Biblioteca para entrada e saída de dados

int main() {
    // Declaração das variáveis para a Carta 1
    char codigo1[4];             // Código da carta 1 (ex: A01)
    int populacao1;              // População da carta 1
    float area1;                 // Área da carta 1 em km²
    float pib1;                  // PIB da carta 1 em bilhões
    int pontosTuristicos1;      // Pontos turísticos da carta 1

    // Declaração das variáveis para a Carta 2
    char codigo2[4];             // Código da carta 2 (ex: B02)
    int populacao2;              // População da carta 2
    float area2;                 // Área da carta 2 em km²
    float pib2;                  // PIB da carta 2 em bilhões
    int pontosTuristicos2;      // Pontos turísticos da carta 2

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo1); // Lê o código da carta 1
    printf("População: ");
    scanf("%d", &populacao1); // Lê a população da carta 1
    printf("Área (em km²): ");
    scanf("%f", &area1); // Lê a área da carta 1
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1); // Lê o PIB da carta 1
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1); // Lê os pontos turísticos da carta 1

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo2); // Lê o código da carta 2
    printf("População: ");
    scanf("%d", &populacao2); // Lê a população da carta 2
    printf("Área (em km²): ");
    scanf("%f", &area2); // Lê a área da carta 2
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2); // Lê o PIB da carta 2
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2); // Lê os pontos turísticos da carta 2

    // Exibição dos dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0; // Fim do programa
}

