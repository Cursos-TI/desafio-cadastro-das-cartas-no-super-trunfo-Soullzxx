
#include <stdio.h>

int main() {

    char codigo_da_carta[3];
    char letra;
    char  nome[50];
    int populacao;
    float area_km2;
    float PIB;
    int numero_de_ponto_turistico;

    printf("Bem vindo ao Desafio Xadrez! \n");

    printf("Digite uma letra para o Estado de A a H: \n");
    scanf(" %c", &letra);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);


    printf("Digite o numero populacional dessa Cidade: \n");
    scanf("%d", &populacao);

    printf("Digete a Area dessa cidade em km²: \n");
    scanf("%f", &area_km2);

    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos dessa cidade: \n");
    scanf("%d", &numero_de_ponto_turistico);

    return 0;











}