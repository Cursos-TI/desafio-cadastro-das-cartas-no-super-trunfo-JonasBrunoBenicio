#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    
    int População, PontosTurísticos;
    float Área, PIB;
    char Estado, Código, Cidade;

   
    printf("Carta 01: \n");
    printf("Estado: ");
    scanf("%s", &Estado);
    printf("Código: ");
    scanf("%s", &Código);
    printf("Cidade: ");
    scanf("%s", &Cidade);
    printf("População: ");
    scanf("%f", &População);
    printf("Área (em km²): ");
    scanf("%d", &Área);
    printf("PIB: ");
    scanf("%d", &PIB);
    printf("Número de pontos Turísticos: \n");
    scanf("%d", &PontosTurísticos);

    return 0;
}
