#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    
    int Populacao, PontosTuristicos;
    float Area, PIB;
    char Estado, Codigo, Cidade;

   
    printf("Carta 01: \n");
    printf("Estado: ");
    scanf("%s", &Estado);
    printf("Codigo: ");
    scanf("%s", &Codigo);
    printf("Cidade: ");
    scanf("%s", &Cidade);
    printf("Populacao: ");
    scanf("%f", &Populacao);
    printf("Area (em km²): ");
    scanf("%d", &Area);
    printf("PIB: ");
    scanf("%d", &PIB);
    printf("Número de pontos Turisticos: ");
    scanf("%d", &PontosTuristicos);

    printf("Carta 02: \n");
    printf("Estado: ");
    scanf("%s", &Estado);
    printf("Codigo: ");
    scanf("%s", &Codigo);
    printf("Cidade: ");
    scanf("%s", &Cidade);
    printf("Populacao: ");
    scanf("%f", &Populacao);
    printf("Area (em km²): ");
    scanf("%d", &Area);
    printf("PIB: ");
    scanf("%d", &PIB);
    printf("Número de pontos Turisticos: ");
    scanf("%d", &PontosTuristicos);
    
    return 0;


}