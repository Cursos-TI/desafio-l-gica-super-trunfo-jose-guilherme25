#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declarando variáveis
    printf("DESAFIO SUPERTRUNFO!\n");
    printf("-------------------------------------------\n");

    char estado1;
    char codigo_carta1[5], nome_cidade1[50];
    unsigned long int populacao1;
    int num_pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_percapita1, inverso_densidade_populacional1, super_poder1;

    char estado2;
    char codigo_carta2[5], nome_cidade2[50];
    unsigned long int populacao2;
    int num_pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_percapita2, inverso_densidade_populacional2, super_poder2;

    int opcao;
    
    // Cadastro das Cartas:
    // Recebendo valores do usuário
    printf(">> CADASTRO DE CARTAS:\n");

    printf("Estado - Carta 1 (A - H): ");
    scanf("%c", &estado1);

    printf("Código - Carta 1: ");
    scanf("%s", codigo_carta1);

    printf("Nome da Cidade - Carta 1: ");
    scanf("%s", nome_cidade1);

    printf("População - Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Área (km²) - Carta 1: ");
    scanf("%f", &area1);

    printf("PIB - Carta 1: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos - Carta 1: ");
    scanf("%d", &num_pontos_turisticos1);

    printf("---\n");

    printf("Estado - Carta 2 (A - H): ");
    scanf(" %c", &estado2);

    printf("Código - Carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade - Carta 2: ");
    scanf("%s", nome_cidade2);

    printf("População - Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Área (km²) - Carta 2: ");
    scanf("%f", &area2);

    printf("PIB - Carta 2: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos - Carta 2: ");
    scanf("%d", &num_pontos_turisticos2);

    // Realizando cálculos das variáveis
    densidade_populacional1 = populacao1 / area1;
    densidade_populacional2 = populacao2 / area2;

    inverso_densidade_populacional1 = 1 / densidade_populacional1;
    inverso_densidade_populacional2 = 1 / densidade_populacional2;

    pib_percapita1 = pib1 / populacao1;
    pib_percapita2 = pib2 / populacao2;

    super_poder1 = (float)populacao1 + area1 + pib1 + (float)num_pontos_turisticos1 + pib_percapita1 + inverso_densidade_populacional1;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)num_pontos_turisticos2 + pib_percapita2 + inverso_densidade_populacional2;

    printf("-------------------------------------------\n");

    // Criando Menu para a Escolha do Atríbuto
    printf(">> MENU PARA COMPARAÇÃO:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha uma das opções acima: ");
    scanf("%d", &opcao);

    printf("-------------------------------------------\n");

    // Comparação de Cartas:
    printf(">> INICIANDO COMPARAÇÃO:\n");
    switch (opcao) {
        case 1:
            printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            printf("Atríbuto: População\n");
            printf("Carta 1 - População: %ld\n", populacao1);
            printf("Carta 2 - População: %ld\n", populacao2);
            if (populacao1 > populacao2) {
                printf("Carta 1 Vence! A população da Carta 1 (%s) é maior!\n", nome_cidade1);
            } else if (populacao1 < populacao2) {
                printf("Carta 2 Vence! A população da Carta 2 (%s) é maior!\n", nome_cidade2);
            } else {
                printf("Empate! As cartas apresentam a mesma população!\n");
            }
        break;
        case 2:
            printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            printf("Atríbuto: Área\n");
            printf("Carta 1 - Área: %.2f\n", area1);
            printf("Carta 2 - Área: %.2f\n", area2);
            if (area1 > area2) {
                printf("Carta 1 Vence! A área da Carta 1 (%s) é maior!\n", nome_cidade1);
            } else if (area1 < area2) {
                printf("Carta 2 Vence! A área da Carta 2 (%s) é maior!\n", nome_cidade2);
            } else {
                printf("Empate! As cartas apresentam a mesma área!\n");
            }
        break;
        case 3:
            printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            printf("Atríbuto: PIB\n");
            printf("Carta 1 - PIB: %.2f\n", pib1);
            printf("Carta 2 - PIB: %.2f\n", pib2);
            if (pib1 > pib2) {
                printf("Carta 1 Vence! O PIB da Carta 1 (%s) é maior!\n", nome_cidade1);
            } else if (pib1 < pib2) {
                printf("Carta 2 Vence! O PIB da Carta 2 (%s) é maior!\n", nome_cidade2);
            } else {
                printf("Empate! As cartas apresentam o mesmo PIB!\n");
            }
        break;
        case 4:
            printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            printf("Atríbuto: Número de Pontos Turísticos\n");
            printf("Carta 1 - Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
            printf("Carta 2 - Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
            if (num_pontos_turisticos1 > num_pontos_turisticos2) {
                printf("Carta 1 Vence! O número de pontos turísticos da Carta 1 (%s) é maior!\n", nome_cidade1);
            } else if (num_pontos_turisticos1 < num_pontos_turisticos2) {
                printf("Carta 2 Vence! O número de pontos turísticos da Carta 2 (%s) é maior!\n", nome_cidade2);
            } else {
                printf("Empate! As cartas apresentam a mesma quantidade de pontos turísticos!\n");
            }
        break;
        case 5:
            printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            printf("Atríbuto: Densidade Demográfica\n");
            printf("Carta 1 - Densidade Demográfica: %.2f\n", densidade_populacional1);
            printf("Carta 2 - Densidade Demográfica: %.2f\n", densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {
                printf("Carta 1 Vence! A densidade populacional da Carta 1 (%s) é menor!\n", nome_cidade1);
            } else if (densidade_populacional1 > densidade_populacional2) {
                printf("Carta 2 Vence! A densidade populacional da Carta 2 (%s) é menor!\n", nome_cidade2);
            } else {
                printf("Empate! As cartas apresentam a mesma Densidade Populacional!\n");
            }
        break;
        default:
            printf("Opção Inválida! Tente Novamente!\n");
        break;
    }

    printf("---------------------------------------------------------------\n");

    return 0;
}
