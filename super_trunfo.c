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

    // Solicitando dados da carta 01 ao jogador.
   
    printf("Digite os dados da carta 01: \n");


    printf("Estado: ");
    scanf(" %c", &estado);
    

    printf("Código: ");
    scanf("%s", &codigo_da_carta);
    

    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade);
    

    printf("População: ");
    scanf("%d", &populacao);
   

    printf("Área(km): ");
    scanf("%f", &area_km);
    

    printf("PIB: ");
    scanf("%f", &pib);
    

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos);
   
   
    // Declarando variáveis CARTA 02.
    char estado2;
    char codigo_da_carta2[10];
    char nome_cidade2[50];
    int populacao2;
    float area_km2;
    float pib2;
    int numero_pontos_turisticos2;

    // Solicitando dados da carta 02 ao jogador.

    printf("\nDigite os dados da carta 02: \n");

    printf("Estado: ");
    scanf(" %c", &estado2);
    

    printf("Código: ");
    scanf("%s", &codigo_da_carta2);
    

    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade2);
    

    printf("População: ");
    scanf("%d", &populacao2);
   

    printf("Área(km): ");
    scanf("%f", &area_km2);
    

    printf("PIB: ");
    scanf("%f", &pib2);
    

    printf("Número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos2);
   
    // Saida das informações passadas da CARTA 01.

    printf("\nCarta 01\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f Km²\n", area_km);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos);

    // Saida das informações passadas da CARTA 02.
    printf("\nCarta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);

    return 0;
}