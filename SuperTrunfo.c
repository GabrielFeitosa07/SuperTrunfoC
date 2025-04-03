#include <stdio.h>
#include <string.h>

int main() {

    //Variáveis da primeira carta
    float area, pib;
    int population, tourist_attrations, number_card;
    char city[50];
    char state;

    //Variáveis da segunda carta
    float area1, pib1;
    int population1, tourist_attrations1, number_card1;
    char city1[50];
    char state1;

    //Leitura dos dados da primeira carta
    printf("PREENCHA OS DADOS DA PRIMEIRA CARTA\n");
    printf("\n");
    printf("Digite uma letra de A a H (representando os estados): ");
    scanf("%c", &state);
    printf("Digite um número de 1 a 9: ");
    scanf("%d", &number_card);

    //Limpa o buffer de entrada
    scanf("%*[^\n]");
    scanf("%*c");

    printf("Nome da cidade: ");
    fgets(city, 50, stdin);
    city[strcspn(city, "\n")] = 0;
    printf("Número de pessoas que residem na cidade: ");
    scanf("%d", &population);
    printf("Área da cidade: ");
    scanf("%f", &area);
    printf("PIB da cidade: ");
    scanf("%f", &pib);
    printf("Número de pontos turísticos da cidade: ");
    scanf("%d", &tourist_attrations);

    //Limpa o buffer de entrada após a primeira carta
    scanf("%*[^\n]");
    scanf("%*c");

    //Leitura dos dados da segunda carta
    printf("\n");
    printf("PREENCHA OS DADOS DA SEGUNDA CARTA\n");
    printf("\n");
    printf("Digite uma letra de A a H (Representando os estados): ");
    scanf("%c", &state1);
    printf("Digite um número de 1 a 9: ");
    scanf("%d", &number_card1);

    //Limpa o buffer de entrada
    scanf("%*[^\n]");
    scanf("%*c");

    printf("Nome da cidade: ");
    fgets(city1, 50, stdin);
    city1[strcspn(city1, "\n")] = 0;
    printf("Número de pessoas que residem na cidade: ");
    scanf("%d", &population1);
    printf("Área da cidade: ");
    scanf("%f", &area1);
    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos da cidade: ");
    scanf("%d", &tourist_attrations1);

    //Limpa o buffer de entrada após a segunda carta
    scanf("%*[^\n]");
    scanf("%*c");

    //Exibição dos dados da primeira carta
    printf("\n");
    printf("CARTA 1:\n");
    printf("\n");
    printf("Estado: %c\n", state);
    printf("Código da carta: %c%d\n", state, number_card);
    printf("Cidade: %s\n", city);
    printf("População: %d de pessoas\n", population);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", tourist_attrations);

    //Exibição dos dados da segunda carta
    printf("\n");
    printf("CARTA 2:\n");
    printf("\n");
    printf("Estado: %c\n", state1);
    printf("Código da carta: %c%d\n", state1, number_card1);
    printf("Cidade: %s\n", city1);
    printf("População: %d de pessoas\n", population1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", tourist_attrations1);

    return 0;
}
