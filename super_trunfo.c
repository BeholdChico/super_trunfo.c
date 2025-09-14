#include <stdio.h>

int main(){

    // Declarando variáveis CARTA 01.
    char estado;
    char codigo_da_carta[10];
    char nome_cidade[50];
    int populacao;
    float area_km;
    float pib;
    int numero_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

    // Solicitando dados da carta 01 ao jogador.
    printf("Digite os dados da carta 01: \n");

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf("%s", codigo_da_carta);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área(km): ");
    scanf("%f", &area_km);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    // Cálculos da carta 1
    densidade_populacional = populacao / area_km;  // habitantes por km²
    pib_per_capita = (pib * 1000000000) / populacao; // PIB per capita em reais

    // Declarando variáveis CARTA 02.
    char estado2;
    char codigo_da_carta2[10];
    char nome_cidade2[50];
    int populacao2;
    float area_km2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // Solicitando dados da carta 02 ao jogador.
    printf("\nDigite os dados da carta 02: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo_da_carta2);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área(km): ");
    scanf("%f", &area_km2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    // Cálculos da carta 2
    densidade_populacional2 = populacao2 / area_km2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Saída das informações da CARTA 01
    printf("\nCarta 01:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    // Saída das informações da CARTA 02
    printf("\nCarta 02:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
