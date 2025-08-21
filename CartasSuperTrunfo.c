#include <stdio.h>

int main() {
    // primeira carta
    char estado1;
    int cidade1;
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // segunda carta
    char estado2;
    int cidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro da primeira carta
    printf("Primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Cidade (1-4): ");
    scanf("%d", &cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda carta
    printf("\nSegunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Cidade (1-4): ");
