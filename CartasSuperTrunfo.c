#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa 

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char p1nome[50];
    int p1populacao;
    float p1area;
    float p1pib;
    int p1pontosturisticos;
   
    char p2nome[50];
    int p2populacao;
    float p2area;
    float p2pib;
    int p2pontosturisticos;
    
    // Cadastro das Cartas:
    printf("\nRegistre a primeira carta,\n Qual o nome do Pais?\n");
    scanf("%s", p1nome);
    printf("Qual a população do %s?\n", p1nome);
    scanf("%d", &p1populacao);
    printf("Qual a area de %s?\n", p1nome);
    scanf("%f", &p1area);
    printf("Qual o PIB de %s?\n", p1nome);
    scanf("%f", &p1pib);
    printf("Quantos pontos turisticos %s possui?\n", p1nome);
    scanf("%d", &p1pontosturisticos);

    printf("\nRegistre a segunda carta,\n Qual o nome do Pais?\n");
    scanf("%s", p2nome);
    printf("Qual a população do %s?\n", p2nome);
    scanf("%d", &p2populacao);
    printf("Qual a area de %s?\n", p2nome);
    scanf("%f", &p2area);
    printf("Qual o PIB de %s?\n", p2nome);
    scanf("%f", &p2pib);
    printf("Quantos pontos turisticos %s possui?\n", p2nome);
    scanf("%d", &p2pontosturisticos);

    
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    printf("%s\nPopulação: %d\nArea: %.2f m2\nPIB:  R$ %.2f\nPontos turisticos: %d\n", p1nome, p1populacao, p1area, p1pib, p1pontosturisticos);
    printf("%s\nPopulação: %d\nArea: %2f m2\nPIB:  R$ %.2f\nPontos turisticos: %d\n", p2nome, p2populacao, p2area, p2pib, p2pontosturisticos);

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    

    return 0;
}
