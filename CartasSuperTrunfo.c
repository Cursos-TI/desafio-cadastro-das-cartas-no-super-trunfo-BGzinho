#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta (Salvador)
    char estado1 = 'B'; // Bahia
    char codigo1[] = "B01";
    char nomeCidade1[] = "Salvador";
    int populacao1 = 2886698;
    float area1 = 693.83;
    float pib1 = 63.82;
    int pontosTuristicos1 = 25;

    // Declaração de variáveis para a segunda carta (Belo Horizonte)
    char estado2 = 'M'; // Minas Gerais
    char codigo2[] = "M01";
    char nomeCidade2[] = "Belo Horizonte";
    int populacao2 = 2375129;
    float area2 = 331.40;
    float pib2 = 94.34;
    int pontosTuristicos2 = 30;

    // Exibição das informações da primeira carta (Salvador)
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição das informações da segunda carta (Belo Horizonte)
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
