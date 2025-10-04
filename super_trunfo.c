#include <stdio.h>

int main() {
    // --------------------------
    // Declaração das variáveis das duas cartas
    // --------------------------
    char estado1[3], codigo1[10], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_per_capita1;

    char estado2[3], codigo2[10], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_per_capita2;

    // --------------------------
    // Cadastro da Carta 1
    // --------------------------
    printf("Digite os dados da carta 01:\n");
    printf("Estado (sigla): "); scanf("%s", estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da cidade: "); scanf(" %[^\n]", nome_cidade1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (em bilhões de reais): "); scanf("%f", &pib1);
    printf("Número de pontos turísticos: "); scanf("%d", &pontos_turisticos1);

    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // --------------------------
    // Cadastro da Carta 2
    // --------------------------
    printf("\nDigite os dados da carta 02:\n");
    printf("Estado (sigla): "); scanf("%s", estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da cidade: "); scanf(" %[^\n]", nome_cidade2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (em bilhões de reais): "); scanf("%f", &pib2);
    printf("Número de pontos turísticos: "); scanf("%d", &pontos_turisticos2);

    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // --------------------------
    // Menu dinâmico para escolher os dois atributos
    // --------------------------
    int attr1, attr2;

    printf("\n--- MENU DE ATRIBUTOS ---\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n");
    printf("Escolha o PRIMEIRO atributo: ");
    scanf("%d", &attr1);

    // Valida primeiro atributo
    while(attr1 < 1 || attr1 > 5){
        printf("Opção inválida! Escolha novamente: ");
        scanf("%d", &attr1);
    }

    // Menu para segundo atributo excluindo o primeiro
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for(int i=1;i<=5;i++){
        if(i != attr1){
            switch(i){
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    printf("Escolha o SEGUNDO atributo: ");
    scanf("%d", &attr2);

    while(attr2 < 1 || attr2 > 5 || attr2 == attr1){
        printf("Opção inválida! Escolha novamente: ");
        scanf("%d", &attr2);
    }

    // --------------------------
    // Função auxiliar para pegar valor do atributo
    // --------------------------
    float valor1_attr1=0, valor2_attr1=0, valor1_attr2=0, valor2_attr2=0;
    char nome_attr1[50], nome_attr2[50];

    switch(attr1){
        case 1: valor1_attr1=populacao1; valor2_attr1=populacao2; sprintf(nome_attr1,"População"); break;
        case 2: valor1_attr1=area1; valor2_attr1=area2; sprintf(nome_attr1,"Área"); break;
        case 3: valor1_attr1=pib1; valor2_attr1=pib2; sprintf(nome_attr1,"PIB"); break;
        case 4: valor1_attr1=pontos_turisticos1; valor2_attr1=pontos_turisticos2; sprintf(nome_attr1,"Pontos Turísticos"); break;
        case 5: valor1_attr1=densidade1; valor2_attr1=densidade2; sprintf(nome_attr1,"Densidade Demográfica"); break;
    }

    switch(attr2){
        case 1: valor1_attr2=populacao1; valor2_attr2=populacao2; sprintf(nome_attr2,"População"); break;
        case 2: valor1_attr2=area1; valor2_attr2=area2; sprintf(nome_attr2,"Área"); break;
        case 3: valor1_attr2=pib1; valor2_attr2=pib2; sprintf(nome_attr2,"PIB"); break;
        case 4: valor1_attr2=pontos_turisticos1; valor2_attr2=pontos_turisticos2; sprintf(nome_attr2,"Pontos Turísticos"); break;
        case 5: valor1_attr2=densidade1; valor2_attr2=densidade2; sprintf(nome_attr2,"Densidade Demográfica"); break;
    }

    // --------------------------
    // Comparação usando operador ternário
    // --------------------------
    int pontos_carta1=0, pontos_carta2=0;

    // Atributo 1
    if(attr1==5){ // Densidade demográfica -> menor vence
        pontos_carta1 += (valor1_attr1 < valor2_attr1) ? 1 : 0;
        pontos_carta2 += (valor2_attr1 < valor1_attr1) ? 1 : 0;
    } else {
        pontos_carta1 += (valor1_attr1 > valor2_attr1) ? 1 : 0;
        pontos_carta2 += (valor2_attr1 > valor1_attr1) ? 1 : 0;
    }

    // Atributo 2
    if(attr2==5){
        pontos_carta1 += (valor1_attr2 < valor2_attr2) ? 1 : 0;
        pontos_carta2 += (valor2_attr2 < valor1_attr2) ? 1 : 0;
    } else {
        pontos_carta1 += (valor1_attr2 > valor2_attr2) ? 1 : 0;
        pontos_carta2 += (valor2_attr2 > valor1_attr2) ? 1 : 0;
    }

    // --------------------------
    // Soma dos valores dos atributos
    // --------------------------
    float soma_carta1 = valor1_attr1 + valor1_attr2;
    float soma_carta2 = valor2_attr1 + valor2_attr2;

    // --------------------------
    // Exibição dos resultados
    // --------------------------
    printf("\n--- RESULTADO FINAL ---\n");
    printf("%s: %.2f (%s), %.2f (%s) | Soma: %.2f\n", nome_cidade1, valor1_attr1, nome_attr1, valor1_attr2, nome_attr2, soma_carta1);
    printf("%s: %.2f (%s), %.2f (%s) | Soma: %.2f\n", nome_cidade2, valor2_attr1, nome_attr1, valor2_attr2, nome_attr2, soma_carta2);

    if(soma_carta1 > soma_carta2) printf("Vencedora: %s\n", nome_cidade1);
    else if(soma_carta2 > soma_carta1) printf("Vencedora: %s\n", nome_cidade2);
    else printf("Empate!\n");

    return 0;
}
