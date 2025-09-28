#include <stdio.h>

int main() {
    // Declarando variáveis CARTA 01.
    char estado;
    char codigo_da_carta[10];
    char nome_cidade[50];
    unsigned long int populacao;
    float area_km;
    float pib;
    int numero_pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;

    // Solicitando dados da carta 01 ao jogador.
    printf("Digite os dados da carta 01: \n");

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Código: ");
    scanf("%s", codigo_da_carta);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade);

    printf("População: ");
    scanf("%lu", &populacao);

    printf("Área(km): ");
    scanf("%f", &area_km);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);

    // Cálculos da carta 1
    densidade_populacional = populacao / area_km;
    pib_per_capita = (pib * 1000000000) / populacao;
    super_poder = (float)populacao + area_km + pib + numero_pontos_turisticos + pib_per_capita + (1 / densidade_populacional);

    // Declarando variáveis CARTA 02.
    char estado2;
    char codigo_da_carta2[10];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area_km2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Solicitando dados da carta 02 ao jogador.
    printf("\nDigite os dados da carta 02: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo_da_carta2);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área(km): ");
    scanf("%f", &area_km2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);

    // Cálculos da carta 2
    densidade_populacional2 = populacao2 / area_km2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float)populacao2 + area_km2 + pib2 + numero_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", 
           (populacao > populacao2 ? 1 : 2), 
           (populacao > populacao2 ? 1 : 0));

    printf("Área: Carta %d venceu (%d)\n", 
           (area_km > area_km2 ? 1 : 2), 
           (area_km > area_km2 ? 1 : 0));

    printf("PIB: Carta %d venceu (%d)\n", 
           (pib > pib2 ? 1 : 2), 
           (pib > pib2 ? 1 : 0));

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (numero_pontos_turisticos > numero_pontos_turisticos2 ? 1 : 2), 
           (numero_pontos_turisticos > numero_pontos_turisticos2 ? 1 : 0));

    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (densidade_populacional < densidade_populacional2 ? 1 : 2), 
           (densidade_populacional < densidade_populacional2 ? 1 : 0));

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (pib_per_capita > pib_per_capita2 ? 1 : 2), 
           (pib_per_capita > pib_per_capita2 ? 1 : 0));

    printf("Super Poder: Carta %d venceu (%d)\n", 
           (super_poder > super_poder2 ? 1 : 2), 
           (super_poder > super_poder2 ? 1 : 0));

    return 0;
}
