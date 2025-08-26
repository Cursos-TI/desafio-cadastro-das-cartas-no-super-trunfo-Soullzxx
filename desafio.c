#include <stdio.h>

int main() {

    char codigo_da_carta[3];
    char letra;
    char  nome[50];
    unsigned long int populacao1, populacao2;
    float area_km2_1, area_km2_2;
    float PIB1, PIB2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;  
    float superPoder1, superPoder2;

    printf("Bem vindo ao Desafio Super Trunfo! \n");

    printf("***/Carta 1/***.\n");

    printf("Digite uma letra para o Estado de A a H: \n");
    scanf(" %c", &letra);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);


    printf("Digite o numero populacional dessa Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area dessa cidade em km²: \n");
    scanf("%f", &area_km2_1);

    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos dessa cidade: \n");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area_km2_1;

    printf("Densidade populacional da carta 1: %.2f \n", densidade1);

    pib_per_capita1 = PIB1 / populacao1;

    printf("O PIB per capita da carta 1 é: %.2f \n", pib_per_capita1);

    superPoder1 = populacao1 + area_km2_1 + PIB1 + pib_per_capita1 + (densidade1 / 1) + turistico1;

    printf("o super poder da sua carta 1 é: %.3f\n", superPoder1);

    printf("Vamos para a sua segunda carta.\n");

    printf("***/Carta 2./***\n");

    printf("Digite uma letra para o seu segundo Estado de A a H: \n");
    scanf(" %c", &letra);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);


    printf("Digite o numero populacional dessa Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area dessa cidade em km²: \n");
    scanf("%f", &area_km2_2);

    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos dessa cidade: \n");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area_km2_2;

     printf("Densidade populacional da carta 2: %.2f \n", densidade2);

     pib_per_capita2 = PIB2 / populacao2;

     printf("O PIB per capita da carta 1 é: %.2f \n", pib_per_capita2);

       superPoder2 = populacao2 + area_km2_2 + PIB2 + pib_per_capita2 + (densidade2 / 1) + turistico2;

    printf("o super poder da sua carta 2 é: %.3f\n", superPoder2);

    printf("***comparação das cartas***\n");
    printf("lembrando que, 1 para verdadeiro e 0 para falso\n");
    printf("População: Carta 1 venceu ? %d\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu ? %d\n", area_km2_1 > area_km2_2);
    printf("PIB: Carta 1 venceu ? %d\n", PIB1 > PIB2);
    printf("Pontos turisticos: Carta 1 venceu ? %d\n", turistico1 > turistico2);
    printf("Densidade Populacional: Carta 2 venceu ? %d\n", densidade2 > densidade1);
    printf("PIB per capita: Carta 2 venceu ? %d\n", pib_per_capita2 > pib_per_capita1);
    printf("Superpoder: Carta 2 venceu  ? %d\n", superPoder2 > superPoder1);




    return 0;
}
