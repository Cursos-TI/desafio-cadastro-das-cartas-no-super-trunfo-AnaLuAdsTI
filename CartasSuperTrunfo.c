#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//Teste Ana Luiza

int main() {
    
    // Mensagem de boas-vindas
    printf("Olá! Seja Bem-Vindo(a) ao Nível Novato de Super Trunfo\n");
    printf("Onde o objetivo é apenas cadastrar suas Cartas\n");
    printf("Vamos Começar:\n\n");

    // Dados da Carta 1 
    char estado1; // Letra do estado da Carta 1
    char codigo1[4]; // Código identificador da Carta 1
    char nomeCidade1[100]; // Nome da cidade da Carta 1
    int populacao1; // População da cidade da Carta 1
    float area1; // Área da cidade da Carta 1 em km²
    float pib1; // PIB da cidade da Carta 1 em bilhões de reais
    int pontosTuristicos1; // Número de pontos turísticos da cidade da Carta 1

    // Dados da Carta 2 
    char estado2; // Letra do estado da Carta 2
    char codigo2[4]; // Código identificador da Carta 2
    char nomeCidade2[100]; // Nome da cidade da Carta 2
    int populacao2; // População da cidade da Carta 2
    float area2; // Área da cidade da Carta 2 em km²
    float pib2; // PIB da cidade da Carta 2 em bilhões de reais
    int pontosTuristicos2; // Número de pontos turísticos da cidade da Carta 2

    // Entrada de dados da Carta 1 
    printf("Cadastro da Carta 1:\n"); // Título da entrada de dados da carta 1
    printf("Digite a letra do estado podendo ser de (A a H): "); // Solicita a letra correspondente ao estado da Carta 1 (A a H)
    scanf(" %c", &estado1); 

    // Solicita o código da carta (exemplo: A01, A02...)
    printf("Digite o código da carta podendo ser de (A01 a A04): "); 
    scanf("%s", codigo1); 

    // Solicita o nome completo da cidade
    printf("Digite o nome da cidade: "); 
    scanf(" %[^\n]", nomeCidade1); 

    // Solicita a população da cidade
    printf("Digite a populacao da cidade: "); 
    scanf("%d", &populacao1); 

    // Solicita a área territorial da cidade em quilômetros quadrados
    printf("Digite a area da cidade (em km²): "); 
    scanf("%f", &area1); 

    // Solicita o PIB da cidade em bilhões de reais
    printf("Digite o PIB da cidade (em bilhões de reais): "); 
    scanf("%f", &pib1); 

    // Solicita o número de pontos turísticos na cidade
    printf("Digite o numero de pontos turisticos: "); 
    scanf("%d", &pontosTuristicos1); 

    // Entrada de dados da Carta 2 
    printf("\nCadastro da Carta 2:\n"); // Título da entrada de dados da carta 2

    // Solicita a letra correspondente ao estado da Carta 2 (A a H)
    printf("Obs: Se na carta 1 você optou pela letra A, na carta 2 opte por outra diferente.\n"); // Mensagem de observação sobre a escolha diferente da Carta 1
    printf("Digite a letra do estado Podendo ser de (A a H): \n"); 
    scanf(" %c", &estado2); 

    // Solicita o código da carta (exemplo: B01, B02...)
    printf("Obs: Se na Carta 1 você optou pelo Código A01, na Carta 2 opte por outro diferente.\n"); // Mensagem de observação sobre o código ser diferente do anterior
    printf("Digite o código da carta podendo ser de (B01 a B04): \n"); 
    scanf("%s", codigo2); 

    // Solicita o nome completo da cidade
    printf("Digite o nome da cidade: "); 
    scanf(" %[^\n]", nomeCidade2); 

    // Solicita a população da cidade
    printf("Digite a populacao da cidade: "); 
    scanf("%d", &populacao2); 

    // Solicita a área territorial da cidade em quilômetros quadrados
    printf("Digite a area da cidade (em km²): "); 
    scanf("%f", &area2); 

    // Solicita o PIB da cidade em bilhões de reais
    printf("Digite o PIB da cidade (em bilhões de reais): "); 
    scanf("%f", &pib2); 

    // Solicita o número de pontos turísticos na cidade
    printf("Digite o numero de pontos turisticos: "); 
    scanf("%d", &pontosTuristicos2); 

    // Exibição dos dados das cartas cadastradas
    printf("\n--- Dados das Cartas Cadastradas ---\n"); // Título da Exibição das Cartas

    // Exibindo informações da Carta 1
    printf("\nCarta 1:\n"); 
    printf("Estado: %c\n", estado1); // Mostra a letra do estado da Carta 1
    printf("Codigo: %s\n", codigo1); // Mostra o código identificador da Carta 1
    printf("Nome da Cidade: %s\n", nomeCidade1); // Mostra o nome da cidade
    printf("Populacao: %d\n", populacao1); // Mostra a população da cidade
    printf("Area: %.2f km²\n", area1); // Mostra a área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib1); // Mostra o PIB da cidade
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1); // Mostra os pontos turísticos

    // Exibindo informações da Carta 2
    printf("\nCarta 2:\n"); // Título da Exibição da Carta 2
    printf("Estado: %c\n", estado2); // Mostra a letra do estado da Carta 2
    printf("Codigo: %s\n", codigo2); // Mostra o código identificador da Carta 2
    printf("Nome da Cidade: %s\n", nomeCidade2); // Mostra o nome da cidade
    printf("Populacao: %d\n", populacao2); // Mostra a população da cidade
    printf("Area: %.2f km²\n", area2); // Mostra a área da cidade
    printf("PIB: %.2f bilhões de reais\n", pib2); // Mostra o PIB da cidade
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2); // Mostra os pontos turísticos



    return 0;
}
