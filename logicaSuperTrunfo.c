#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Declarando variáveis
    printf("DESAFIO SUPERTRUNFO!\n");
    printf("-------------------------------------------------------------------------\n");

    char estado1;
    char codigo_carta1[5], nome_cidade1[50];
    unsigned long int populacao1;
    int num_pontos_turisticos1;
    double area1, pib1, densidade_populacional1, pib_percapita1, inverso_densidade_populacional1, super_poder1;
    double soma_valores1;

    char estado2;
    char codigo_carta2[5], nome_cidade2[50];
    unsigned long int populacao2;
    int num_pontos_turisticos2;
    double area2, pib2, densidade_populacional2, pib_percapita2, inverso_densidade_populacional2, super_poder2;
    double soma_valores2;

    int opcao1, opcao2;
    
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
    scanf("%lf", &area1);

    printf("PIB - Carta 1: ");
    scanf("%lf", &pib1);

    printf("Número de Pontos Turísticos - Carta 1: ");
    scanf("%d", &num_pontos_turisticos1);

    printf("-------------------------------------------\n");

    printf("Estado - Carta 2 (A - H): ");
    scanf(" %c", &estado2);

    printf("Código - Carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Nome da Cidade - Carta 2: ");
    scanf("%s", nome_cidade2);

    printf("População - Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Área (km²) - Carta 2: ");
    scanf("%lf", &area2);

    printf("PIB - Carta 2: ");
    scanf("%lf", &pib2);

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

    printf("-------------------------------------------------------------------------\n");

    // Criando Menu para a Escolha do Atríbuto
    printf(">> MENU PARA COMPARAÇÃO\n>> 1° OPÇÃO:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("Escolha uma das opções acima: ");
    scanf("%d", &opcao1);

    printf("-------------------------------------------------------------------------\n");

    // Comparação de Cartas:
    // printf(">> INICIANDO COMPARAÇÃO:\n");
    switch (opcao1) {
        case 1:
            printf(">> 2° OPÇÃO:\n");
            printf("1. Área\n");
            printf("2. PIB\n");
            printf("3. Número de Pontos Turísticos\n");
            printf("4. Densidade Populacional\n");
            printf("Escolha uma das opções acima: ");
            scanf("%d", &opcao2);
            printf("-------------------------------------------------------------------------\n");
            switch (opcao2) {
                case 1:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: População & Área\n");
                    printf("Carta 1 - População: %ld - Área: %.2f\n", populacao1, area1);
                    printf("Carta 2 - População: %ld - Área: %.2f\n", populacao2, area2);
                    soma_valores1 = populacao1 + area1;
                    soma_valores2 = populacao2 + area2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 2:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: População & PIB\n");
                    printf("Carta 1 - População: %ld - PIB: %.2f\n", populacao1, pib1);
                    printf("Carta 2 - População: %ld - PIB: %.2f\n", populacao2, pib2);
                    soma_valores1 = populacao1 + pib1;
                    soma_valores2 = populacao2 + pib2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 3:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: População & N° de Pontos Turísticos\n");
                    printf("Carta 1 - População: %ld - N° de Pontos Turísticos: %d\n", populacao1, num_pontos_turisticos1);
                    printf("Carta 2 - População: %ld - N° de Pontos Turísticos: %d\n", populacao2, num_pontos_turisticos2);
                    soma_valores1 = populacao1 + num_pontos_turisticos1;
                    soma_valores2 = populacao2 + num_pontos_turisticos2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 4:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: População & Densidade Populacional\n");
                    printf("Carta 1 - População: %ld - Densidade Populacional: %.2f\n", populacao1, densidade_populacional1);
                    printf("Carta 2 - População: %ld - Densidade Populacional: %.2f\n", populacao2, densidade_populacional2);
                    soma_valores1 = populacao1 + inverso_densidade_populacional1;
                    soma_valores2 = populacao2 + inverso_densidade_populacional2; 
                    printf("-------------------------------------------------------------------------\n");
                break;
                default:
                    printf("Opção Inválida! Tente novamente!\n");
                break;
            }

            if (soma_valores1 > soma_valores2) {
                printf(">> Carta 1 vence! A soma dos atríbutos da Carta 1 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            } else if (soma_valores2 > soma_valores1) {
                printf(">> Carta 2 vence! A soma dos atríbutos da Carta 2 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 1 é: %.2f\n", soma_valores2, soma_valores1);
            } else {
                printf(">> Empate! A soma dos atributos da Carta 1 é igual: %.2f e a da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            }

            // printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            // printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            // printf("Atríbuto: População\n");
            // printf("Carta 1 - População: %ld\n", populacao1);
            // printf("Carta 2 - População: %ld\n", populacao2);
            // if (populacao1 > populacao2) {
            //     printf("Carta 1 Vence! A população da Carta 1 (%s) é maior!\n", nome_cidade1);
            // } else if (populacao1 < populacao2) {
            //     printf("Carta 2 Vence! A população da Carta 2 (%s) é maior!\n", nome_cidade2);
            // } else {
            //     printf("Empate! As cartas apresentam a mesma população!\n");
            // }
        break;
        case 2:
            printf(">> 2° OPÇÃO:\n");
            printf("1. População\n");
            printf("2. PIB\n");
            printf("3. Número de Pontos Turísticos\n");
            printf("4. Densidade Populacional\n");
            printf("Escolha uma das opções acima: ");
            scanf("%d", &opcao2);
            printf("-------------------------------------------------------------------------\n");
            switch (opcao2) {
                case 1: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: Área & População\n");
                    printf("Carta 1 - Área: %.2f\n - População: %ld\n", area1, populacao1);
                    printf("Carta 2 - Área: %.2f\n - População: %ld\n", area2, populacao2);
                    soma_valores1 = area1 + populacao1;
                    soma_valores2 = area2 + populacao2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 2:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: Área & PIB\n");
                    printf("Carta 1 - Área: %.2f\n - PIB: %.2f\n", area1, pib1);
                    printf("Carta 2 - Área: %.2f\n - PIB: %.2f\n", area2, pib2);
                    soma_valores1 = area1 + pib1;
                    soma_valores2 = area2 + pib2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 3: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: Área & N° de Pontos Turísticos\n");
                    printf("Carta 1 - Área: %.2f\n - N° de Pontos Turísticos: %d\n", area1, num_pontos_turisticos1);
                    printf("Carta 2 - Área: %.2f\n - N° de Pontos Turísticos: %d\n", area2, num_pontos_turisticos2);
                    soma_valores1 = area1 + num_pontos_turisticos1;
                    soma_valores2 = area2 + num_pontos_turisticos2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 4: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: Área & Densidade Populacional\n");
                    printf("Carta 1 - Área: %.2f\n - Densidade Populacional: %.2f\n", area1, densidade_populacional1);
                    printf("Carta 2 - Área: %.2f\n - Densidade Populacional: %.2f\n", area2, densidade_populacional2);
                    soma_valores1 = area1 + inverso_densidade_populacional1;
                    soma_valores2 = area2 + inverso_densidade_populacional2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                default:
                    printf("Opção Inválida! Tente novamente!\n");
                break;
            }

            if (soma_valores1 > soma_valores2) {
                printf(">> Carta 1 vence! A soma dos atríbutos da Carta 1 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            } else if (soma_valores2 > soma_valores1) {
                printf(">> Carta 2 vence! A soma dos atríbutos da Carta 2 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 1 é: %.2f\n", soma_valores2, soma_valores1);
            } else {
                printf(">> Empate! A soma dos atributos da Carta 1 é igual: %.2f e a da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            }

            // printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            // printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            // printf("Atríbuto: Área\n");
            // printf("Carta 1 - Área: %.2f\n", area1);
            // printf("Carta 2 - Área: %.2f\n", area2);
            // if (area1 > area2) {
            //     printf("Carta 1 Vence! A área da Carta 1 (%s) é maior!\n", nome_cidade1);
            // } else if (area1 < area2) {
            //     printf("Carta 2 Vence! A área da Carta 2 (%s) é maior!\n", nome_cidade2);
            // } else {
            //     printf("Empate! As cartas apresentam a mesma área!\n");
            // }
        break;
        case 3:
            printf(">> 2° OPÇÃO:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. Número de Pontos Turísticos\n");
            printf("4. Densidade Populacional\n");
            printf("Escolha uma das opções acima: ");
            scanf("%d", &opcao2);
            printf("-------------------------------------------------------------------------\n");
            switch (opcao2) {
                case 1:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: PIB & População\n");
                    printf("Carta 1 - PIB: %.2f - População: %ld\n", pib1, populacao1);
                    printf("Carta 2 - PIB: %.2f - População: %ld\n", pib2, populacao2);
                    soma_valores1 = pib1 + populacao1;
                    soma_valores2 = pib2 + populacao2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 2:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: PIB & Área\n");
                    printf("Carta 1 - PIB: %.2f - Área: %.2f\n", pib1, area1);
                    printf("Carta 2 - PIB: %.2f - Área: %.2f\n", pib2, area2);
                    soma_valores1 = pib1 + area1;
                    soma_valores2 = pib2 + area2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 3: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: PIB & N° de Pontos Turísticos\n");
                    printf("Carta 1 - PIB: %.2f - N° de Pontos Turísticos: %d\n", pib1, num_pontos_turisticos1);
                    printf("Carta 2 - PIB: %.2f - N° de Pontos Turísticos: %d\n", pib2, num_pontos_turisticos2);
                    soma_valores1 = pib1 + num_pontos_turisticos1;
                    soma_valores2 = pib2 + num_pontos_turisticos2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 4: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: PIB & Densidade Populacional\n");
                    printf("Carta 1 - PIB: %.2f - Densidade Populacional: %.2f\n", pib1, densidade_populacional1);
                    printf("Carta 2 - PIB: %.2f - Densidade Populacional: %.2f\n", pib2, densidade_populacional2);
                    soma_valores1 = pib1 + inverso_densidade_populacional1;
                    soma_valores2 = pib2 + inverso_densidade_populacional2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                default:
                    printf("Opção Inválida! Tente novamente!\n");
                break;
            } 
            
            if (soma_valores1 > soma_valores2) {
                printf(">> Carta 1 vence! A soma dos atríbutos da Carta 1 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            } else if (soma_valores2 > soma_valores1) {
                printf(">> Carta 2 vence! A soma dos atríbutos da Carta 2 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 1 é: %.2f\n", soma_valores2, soma_valores1);
            } else {
                printf(">> Empate! A soma dos atributos da Carta 1 é igual: %.2f e a da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            }

            // printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            // printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            // printf("Atríbuto: PIB\n");
            // printf("Carta 1 - PIB: %.2f\n", pib1);
            // printf("Carta 2 - PIB: %.2f\n", pib2);
            // if (pib1 > pib2) {
            //     printf("Carta 1 Vence! O PIB da Carta 1 (%s) é maior!\n", nome_cidade1);
            // } else if (pib1 < pib2) {
            //     printf("Carta 2 Vence! O PIB da Carta 2 (%s) é maior!\n", nome_cidade2);
            // } else {
            //     printf("Empate! As cartas apresentam o mesmo PIB!\n");
            // }
        break;
        case 4:
            printf(">> 2° OPÇÃO:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Densidade Populacional\n");
            printf("Escolha uma das opções acima: ");
            scanf("%d", &opcao2);
            printf("-------------------------------------------------------------------------\n");
            switch (opcao2) {
                case 1: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: N° de Pontos Turísticos & População\n");
                    printf("Carta 1 - N° de Pontos Turísticos: %d - População: %ld\n", num_pontos_turisticos1, populacao1);
                    printf("Carta 2 - N° de Pontos Turísticos: %d - População: %ld\n", num_pontos_turisticos2, populacao2);
                    soma_valores1 = num_pontos_turisticos1 + populacao1;
                    soma_valores2 = num_pontos_turisticos2 + populacao2;
                    printf("-------------------------------------------------------------------------\n");
                break; 
                case 2:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: N° de Pontos Turísticos & Área\n");
                    printf("Carta 1 - N° de Pontos Turísticos: %d - Área: %.2f\n", num_pontos_turisticos1, area1);
                    printf("Carta 2 - N° de Pontos Turísticos: %d - Área: %.2f\n", num_pontos_turisticos2, area2); 
                    soma_valores1 = num_pontos_turisticos1 + area1;
                    soma_valores2 = num_pontos_turisticos2 + area2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 3: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: N° de Pontos Turísticos & PIB\n");
                    printf("Carta 1 - N° de Pontos Turísticos: %d - PIB: %.2f\n", num_pontos_turisticos1, pib1);
                    printf("Carta 2 - N° de Pontos Turísticos: %d - PIB: %.2f\n", num_pontos_turisticos2, pib2);
                    soma_valores1 = num_pontos_turisticos1 + pib1;
                    soma_valores2 = num_pontos_turisticos2 + pib2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 4: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: N° de Pontos Turísticos & Densidade Populacional\n");
                    printf("Carta 1 - N° de Pontos Turísticos: %d - Densidade Populacional: %.2f\n", num_pontos_turisticos1, densidade_populacional1);
                    printf("Carta 2 - N° de Pontos Turísticos: %d - Densidade Populacional: %.2f\n", num_pontos_turisticos2, densidade_populacional2);
                    soma_valores1 = num_pontos_turisticos1 + inverso_densidade_populacional1;
                    soma_valores2 = num_pontos_turisticos2 + inverso_densidade_populacional2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                default:
                    printf("Opção Inválida! Tente novamente!\n");
                break;
            }
            
            if (soma_valores1 > soma_valores2) {
                printf(">> Carta 1 vence! A soma dos atríbutos da Carta 1 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            } else if (soma_valores2 > soma_valores1) {
                printf(">> Carta 2 vence! A soma dos atríbutos da Carta 2 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 1 é: %.2f\n", soma_valores2, soma_valores1);
            } else {
                printf(">> Empate! A soma dos atributos da Carta 1 é igual: %.2f e a da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            }

            // printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            // printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            // printf("Atríbuto: Número de Pontos Turísticos\n");
            // printf("Carta 1 - Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
            // printf("Carta 2 - Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
            // if (num_pontos_turisticos1 > num_pontos_turisticos2) {
            //     printf("Carta 1 Vence! O número de pontos turísticos da Carta 1 (%s) é maior!\n", nome_cidade1);
            // } else if (num_pontos_turisticos1 < num_pontos_turisticos2) {
            //     printf("Carta 2 Vence! O número de pontos turísticos da Carta 2 (%s) é maior!\n", nome_cidade2);
            // } else {
            //     printf("Empate! As cartas apresentam a mesma quantidade de pontos turísticos!\n");
            // }
        break;
        case 5:
            printf(">> 2° OPÇÃO:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Número de Pontos Turísticos\n");
            printf("Escolha uma das opções acima: ");
            scanf("%d", &opcao2);
            printf("-------------------------------------------------------------------------\n");
            switch (opcao2) {
                case 1:
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: Densidade Populacional & População\n");
                    printf("Carta 1 - Densidade Populacional: %.2f\n - População: %ld\n", densidade_populacional1, populacao1);
                    printf("Carta 2 - Densidade Populacional: %.2f\n - População: %ld\n", densidade_populacional1, populacao2);
                    soma_valores1 = inverso_densidade_populacional1 + populacao1;
                    soma_valores2 = inverso_densidade_populacional2 + populacao2;
                    printf("-------------------------------------------------------------------------\n"); 
                break;
                case 2: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: Densidade Populacional & Área\n");
                    printf("Carta 1 - Densidade Populacional: %.2f\n - Área: %.2f\n", densidade_populacional1, area1);
                    printf("Carta 2 - Densidade Populacional: %.2f\n - Área: %.2f\n", densidade_populacional1, area2);
                    soma_valores1 = inverso_densidade_populacional1 + area1;
                    soma_valores2 = inverso_densidade_populacional2 + area2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 3: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: Densidade Populacional & PIB\n");
                    printf("Carta 1 - Densidade Populacional: %.2f\n - PIB: %.2f\n", densidade_populacional1, pib1);
                    printf("Carta 2 - Densidade Populacional: %.2f\n - PIB: %.2f\n", densidade_populacional1, pib2);
                    soma_valores1 = inverso_densidade_populacional1 + pib1;
                    soma_valores2 = inverso_densidade_populacional2 + pib2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                case 4: 
                    printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
                    printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
                    printf("Atríbuto: Densidade Populacional & N° de Pontos Turísticos\n");
                    printf("Carta 1 - Densidade Populacional: %.2f\n - N° de Pontos Turísticos: %d\n", densidade_populacional1, num_pontos_turisticos1);
                    printf("Carta 2 - Densidade Populacional: %.2f\n - N° de Pontos Turísticos: %d\n", densidade_populacional1, num_pontos_turisticos2);
                    soma_valores1 = inverso_densidade_populacional1 + num_pontos_turisticos1;
                    soma_valores2 = inverso_densidade_populacional2 + num_pontos_turisticos2;
                    printf("-------------------------------------------------------------------------\n");
                break;
                default:
                    printf("Opção Inválida! Tente novamente!\n");
                break;
            }
            
            if (soma_valores1 > soma_valores2) {
                printf(">> Carta 1 vence! A soma dos atríbutos da Carta 1 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            } else if (soma_valores2 > soma_valores1) {
                printf(">> Carta 2 vence! A soma dos atríbutos da Carta 2 é igual a: %.2f\n>> E a soma dos atríbutos da Carta 1 é: %.2f\n", soma_valores2, soma_valores1);
            } else {
                printf(">> Empate! A soma dos atributos da Carta 1 é igual: %.2f e a da Carta 2 é: %.2f\n", soma_valores1, soma_valores2);
            }

            // printf("Carta 1: %c%s - %s\n", estado1, codigo_carta1, nome_cidade1);
            // printf("Carta 2: %c%s - %s\n", estado2, codigo_carta2, nome_cidade2);
            // printf("Atríbuto: Densidade Populacional\n");
            // printf("Carta 1 - Densidade Populacional: %.2f\n", densidade_populacional1);
            // printf("Carta 2 - Densidade Populacional: %.2f\n", densidade_populacional2);
            // if (densidade_populacional1 < densidade_populacional2) {
            //     printf("Carta 1 Vence! A densidade populacional da Carta 1 (%s) é menor!\n", nome_cidade1);
            // } else if (densidade_populacional1 > densidade_populacional2) {
            //     printf("Carta 2 Vence! A densidade populacional da Carta 2 (%s) é menor!\n", nome_cidade2);
            // } else {
            //     printf("Empate! As cartas apresentam a mesma Densidade Populacional!\n");
            // }
        break;
        default:
            printf("Opção Inválida! Tente Novamente!\n");
        break;
    }

    printf("-------------------------------------------------------------------------\n");

    return 0;
}
