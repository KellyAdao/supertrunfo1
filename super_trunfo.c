#include <stdio.h>
#include <string.h> 

int main() {
    // Declaração de variaveis da primeira carta
    char estado1[5];  
    char codigo1[5];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Estado (A-H): ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';  // Remove o '\n' da string lida

    printf("Codigo da Carta (ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0'; 

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';  

    printf("Populacao: ");
    scanf("%d", &populacao1);
    getchar(); // Limpar o buffer para a próxima leitura com fgets

    printf("Area (km2): ");
    scanf("%f", &area1);
    getchar(); 

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);
    getchar(); 

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    getchar(); 

    // Declaração de variaveis da segunda carta
    char estado2[5];
    char codigo2[5]; 
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da segunda carta
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (A-H): ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';  // Remove o '\n' da string lida

    printf("Codigo da Carta (ex: B02): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';  

    printf("Populacao: ");
    scanf("%d", &populacao2);
    getchar(); // Limpar o buffer para a próxima leitura com fgets

    printf("Area (km2): ");
    scanf("%f", &area2);
    getchar(); 

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);
    getchar(); 

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    getchar(); 

    // Exibição dos dados das cartas cadastradas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}