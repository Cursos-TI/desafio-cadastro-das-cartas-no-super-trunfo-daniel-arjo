#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Variáveis primeira cidade
    int pop1, pontos1;
    float area1, pib1;
    
    // Variáveis segunda cidade
    int pop2, pontos2;
    float area2, pib2;

    // Cadastro da primeira cidade
    printf("Dados da primeira cidade:\n");
    printf("Populacao: ");
    scanf("%d", &pop1);
    printf("Area (km²): ");
    scanf("%f", &area1);
    printf("PIB (milhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da segunda cidade
    printf("\nDados da segunda cidade:\n");
    printf("Populacao: ");
    scanf("%d", &pop2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (milhoes): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Mostrar os dados
    printf("\nResumo:\n");
    
    printf("\nCidade 1:\n");
    printf("Populacao: %d\n", pop1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    
    printf("\nCidade 2:\n");
    printf("Populacao: %d\n", pop2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);

    return 0;
}
