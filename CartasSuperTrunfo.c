#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char e1sigla[3] = "";
    char e1cidade[50] = "";
    int e1populacao = 0;
    float e1area = 0.0;
    float e1pib = 0.0;
    int e1pontosturisticos = 0;
   
    char e2sigla[3] = "";
    char e2cidade[50] = "";
    int e2populacao = 0;
    float e2area = 0.0;
    float e2pib = 0.0;
    int e2pontosturisticos = 0;

    char siglas[200] = "AC - AL - AP - AM - BA - CE - DF \n ES - GO - MA - MT - MS - MG - PA \n PB - PR - PE - PI - RJ - RN - RS \n RO - RR - SC - SP - SE - TO";
    char dgaq[20] = "Digite aqui:";
    char sde[30] = " Qual o sigla do Estado?";
    char qndc[30] = "Qual o nome da cidade em ";
    char qppd[30] = "Qual a população de ";
    char qard[30] = "Qual a area de ";
    char qpbd[30] = "Qual o PIB de ";
    char qptd[30] = "Quantos pontos turisticos ";
    char possui[20] =" possui?";
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\nRegistre a primeira carta,\n%s\n %s\n%s",sde,siglas, dgaq);
    scanf("%s", e1sigla);
    printf("%s%s? \n%s", qndc, e1sigla, dgaq);
    scanf(" %s", e1cidade);
    printf("%s%s/%s?\n%s",qppd, e1cidade, e1sigla, dgaq);
    scanf("%d", &e1populacao);
    printf("%s%s/%s?\n%s",qard,e1cidade, e1sigla, dgaq);
    scanf("%f", &e1area);
    printf("%s%s/%s?\n%s",qpbd,e1cidade, e1sigla, dgaq);
    scanf("%f", &e1pib);
    printf("%s%s/%s%s\n%s", qptd, e1cidade, e1sigla, possui,dgaq);
    scanf("%d", &e1pontosturisticos);

    printf("\nRegistre a segunda carta,\n%s\n %s\n%s",sde,siglas, dgaq);
    scanf("%s", e2sigla);
    printf("%s%s? \n%s", qndc, e2sigla, dgaq);
    scanf("%s", e2cidade);
    printf("%s%s/%s?\n%s",qppd,e2cidade, e2sigla, dgaq);
    scanf("%d", &e2populacao);
    printf("%s%s/%s?\n%s",qard,e2cidade, e2sigla, dgaq);
    scanf("%f", &e2area);
    printf("%s%s/%s?\n%s",qpbd,e2cidade, e2sigla, dgaq);
    scanf("%f", &e2pib);
    printf("%s%s/%s%s\n%s",qptd,e2cidade, e2sigla, possui,dgaq);
    scanf("%d", &e2pontosturisticos);
  
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n%s-%s\nPopulação: %d\nArea: %.2f m²\nPIB: R$ %.2f\nPontos turisticos: %d\n", e1cidade, e1sigla, e1populacao, e1area, e1pib, e1pontosturisticos);
    printf("\n%s-%s\nPopulação: %d\nArea: %.2f m²\nPIB: R$ %.2f\nPontos turisticos: %d\n", e2cidade, e2sigla, e2populacao, e2area, e2pib, e2pontosturisticos);
    return 0;
}
