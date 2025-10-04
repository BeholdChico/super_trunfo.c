#include <stdio.h>

int main() {
    // Declaração das variáveis das duas cartas
    char estado1[3], codigo1[10], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    char estado2[3], codigo2[10], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // Cadastro da Carta 1
    printf("Digite os dados da carta 01:\n");
    printf("Estado (sigla): ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Cadastro da Carta 2
    printf("\nDigite os dados da carta 02:\n");
    printf("Estado (sigla): ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Menu de escolha do atributo
    int opcao;
    printf("\n--- MENU DE COMPARAÇÃO ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO ---\n");

    switch (opcao) {
        case 1:
            printf("Comparação por População:\n");
            printf("%s: %d habitantes\n", nome_cidade1, populacao1);
            printf("%s: %d habitantes\n", nome_cidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedora: %s (maior população)\n", nome_cidade1);
            else if (populacao2 > populacao1)
                printf("Vencedora: %s (maior população)\n", nome_cidade2);
            else
                printf("Empate! Ambas têm a mesma população.\n");
            break;

        case 2:
            printf("Comparação por Área:\n");
            printf("%s: %.2f km²\n", nome_cidade1, area1);
            printf("%s: %.2f km²\n", nome_cidade2, area2);
            if (area1 > area2)
                printf("Vencedora: %s (maior área)\n", nome_cidade1);
            else if (area2 > area1)
                printf("Vencedora: %s (maior área)\n", nome_cidade2);
            else
                printf("Empate! Ambas têm a mesma área.\n");
            break;

        case 3:
            printf("Comparação por PIB:\n");
            printf("%s: %.2f bilhões de reais\n", nome_cidade1, pib1);
            printf("%s: %.2f bilhões de reais\n", nome_cidade2, pib2);
            if (pib1 > pib2)
                printf("Vencedora: %s (maior PIB)\n", nome_cidade1);
            else if (pib2 > pib1)
                printf("Vencedora: %s (maior PIB)\n", nome_cidade2);
            else
                printf("Empate! Ambas têm o mesmo PIB.\n");
            break;

        case 4:
            printf("Comparação por Pontos Turísticos:\n");
            printf("%s: %d pontos\n", nome_cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", nome_cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("Vencedora: %s (mais pontos turísticos)\n", nome_cidade1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("Vencedora: %s (mais pontos turísticos)\n", nome_cidade2);
            else
                printf("Empate! Ambas têm o mesmo número de pontos turísticos.\n");
            break;

        case 5:
            printf("Comparação por Densidade Demográfica:\n");
            printf("%s: %.2f hab/km²\n", nome_cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nome_cidade2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedora: %s (menor densidade, vence neste atributo)\n", nome_cidade1);
            else if (densidade2 < densidade1)
                printf("Vencedora: %s (menor densidade, vence neste atributo)\n", nome_cidade2);
            else
                printf("Empate! Ambas têm a mesma densidade.\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
