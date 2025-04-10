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
    int num_pontos_turisticos1, contador1 = 0;
    float area1, pib1, densidade_populacional1, pib_percapita1, inverso_densidade_populacional1, super_poder1;

    char estado2;
    char codigo_carta2[5], nome_cidade2[50];
    unsigned long int populacao2;
    int num_pontos_turisticos2, contador2 = 0;
    float area2, pib2, densidade_populacional2, pib_percapita2, inverso_densidade_populacional2, super_poder2;

    int resultado_populacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade_populacional, resultado_pib_percapita, resultado_super_poder;

    char *vencedor_populacao, *vencedor_area, *vencedor_pib, *vencedor_densidade_populacional, *vencedor_pib_percapita;
    char *carta_vencedora;
    
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

    // Comparação de Cartas:
    printf(">> COMPARANDO ATRÍBUTOS:\n");
    if (populacao1 > populacao2) {
        printf("A população da Carta 1 (%s) é maior!\n", nome_cidade1);
        vencedor_populacao = "Carta 1";
        contador1++;
    } else {
        printf("A população da Carta 2 (%s) é maior!\n", nome_cidade2);
        vencedor_populacao = "Carta 2";
        contador2++;
    }

    if (area1 > area2) {
        printf("A área da Carta 1 (%s) é maior!\n", nome_cidade1);
        vencedor_area = "Carta 1";
        contador1++;
    } else {
        printf("A área da Carta 2 (%s) é maior!\n", nome_cidade2);
        vencedor_area = "Carta 2";
        contador2++;
    }

    if (pib1 > pib2) {
        printf("O PIB da Carta 1 (%s) é maior!\n", nome_cidade1);
        vencedor_pib = "Carta 1";
        contador1++;
    } else {
        printf("O PIB da Carta 2 (%s) é maior!\n", nome_cidade2);
        vencedor_pib = "Carta 2";
        contador2++;
    }

    if (densidade_populacional1 < densidade_populacional2) {
        printf("A densidade populacional da Carta 1 (%s) é menor!\n", nome_cidade1);
        vencedor_densidade_populacional = "Carta 1";
        contador1++;
    } else {
        printf("A densidade populacional da Carta 2 (%s) é menor!\n", nome_cidade2);
        vencedor_densidade_populacional = "Carta 2";
        contador2++;
    }

    if (pib_percapita1 > pib_percapita2) {
        printf("O PIB per Capita da Carta 1 (%s) é maior!\n", nome_cidade1);
        vencedor_pib_percapita = "Carta 1";
        contador1++;
    } else {
        printf("O PIB per Capita da Carta 2 (%s) é maior!\n", nome_cidade2);
        vencedor_pib_percapita = "Carta 2";
        contador2++;
    }

    printf("-------------------------------------------\n");
    printf(">> RESULTADO:\n");

    if (contador1 > contador2) {
        carta_vencedora = "Carta 1";
        printf("A cidade vencedora é: \n%s!!! Com %d pontos.\n", carta_vencedora, contador1);
    } else {
        carta_vencedora = "Carta 2";
        printf("A cidade vencedora é: \n%s!!! Com %d pontos.\n", carta_vencedora, contador2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("-------------------------------------------\n");

    return 0;
}
