#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//Teste Ana Luiza 

int main() {
    
    // Mensagens de abertura do Jogo
    printf("Olá! Vamos dar continuidade ao Super Trunfo -  Agora no Nível Aventureiro\n");
    printf("Onde o objetivo é fazer com que as cartas por si SÓ, calculem a Densidade Populacional\n");
    printf("E o PIB per capita para cada cidade\n");
    printf("Vamos Começar:\n\n");

    // Declaração das variáveis da Carta 1
    char estado1; // Letra do estado da carta 1 (A a H)
    char codigo1[4]; // Código da carta 1 (ex: A01)
    char nomeCidade1[100]; // Nome da cidade da carta 1
    int populacao1; // População da cidade
    float area1; // Área da cidade em km²
    float pib1; // PIB da cidade em bilhões de reais
    int pontosTuristicos1; // Número de pontos turísticos
    float densidade1; // Densidade populacional (hab/km²)
    float pibPerCapita1; // PIB per capita

    // Declaração das variáveis da Carta 2
    char estado2; // Letra do estado da carta 2
    char codigo2[4]; // Código da carta 2
    char nomeCidade2[100]; // Nome da cidade da carta 2
    int populacao2; // População da cidade
    float area2; // Área da cidade
    float pib2; // PIB da cidade
    int pontosTuristicos2; // Pontos turísticos
    float densidade2; // Densidade populacional
    float pibPerCapita2; // PIB per capita

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n"); // Solicita o Cadastro das Cartas
    printf("Digite a letra do estado podendo ser de (A a H): "); // Solicita a letra do estado
    scanf(" %c", &estado1); // Lê a letra do estado

    printf("Digite o código da carta podendo ser de (A01 a A04): "); // Solicita o código
    scanf("%s", codigo1); // Lê o código da carta

    printf("Digite o nome da cidade: "); // Solicita o nome da cidade
    scanf(" %[^\n]", nomeCidade1); // Lê o nome completo com espaços

    printf("Digite a populacao da cidade: "); // Solicita a população da cidade
    scanf("%d", &populacao1); // Lê o número inteiro

    printf("Digite a area da cidade (em km²): "); // Solicita a Área da cidade
    scanf("%f", &area1); // Lê número com ponto flutuante

    printf("Digite o PIB da cidade (em bilhões de reais): "); // Solicita o PIB 
    scanf("%f", &pib1); // Lê o valor do PIB

    printf("Digite o numero de pontos turisticos: ");  // Solicita os Pontos turísticos
    scanf("%d", &pontosTuristicos1); // Lê a quantidade

    // Cálculo da densidade e do PIB per capita da Carta 1
    densidade1 = populacao1 / area1; // Calcula a Densidade populacional
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;  // Calcula o PIB per capita

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n"); 
    printf("Obs: Se na carta 1 você optou pela letra A, na carta 2 opte por outra diferente.\n"); // Mensagem de observação 
    printf("Digite a letra do estado podendo ser de (A a H): ");  
    scanf(" %c", &estado2);

    printf("Obs: Se na Carta 1 você optou pelo Código A01, na Carta 2 opte por outro diferente.\n"); // Mensagem de observação
    printf("Digite o código da carta podendo ser de (A01 a A04): ");
    scanf("%s", codigo2); 

    printf("Digite o nome da cidade: "); 
    scanf(" %[^\n]", nomeCidade2); 
    printf("Digite a populacao da cidade: "); 
    scanf("%d", &populacao2);                    

    printf("Digite a area da cidade (em km²): ");                
    scanf("%f", &area2);                                       

    printf("Digite o PIB da cidade (em bilhões de reais): ");   
    scanf("%f", &pib2);                                        

    printf("Digite o numero de pontos turisticos: ");           
    scanf("%d", &pontosTuristicos2);                           

    // Cálculo da densidade e do PIB per capita da Carta 2
    densidade2 = populacao2 / area2; // Calcula a Densidade Populacional
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // Calcula o PIB per capita

    // Exibição dos dados das cartas cadastradas
    printf("\n--- Dados das Cartas Cadastradas ---\n");
 
    printf("\nCarta 1:\n"); // Dados da Carta 1
    printf("Estado: %c\n", estado1); // Exibe estado
    printf("Codigo: %s\n", codigo1); // Exibe código
    printf("Nome da Cidade: %s\n", nomeCidade1); // Exibe o Nome
    printf("Populacao: %d\n", populacao1); // Exibe a População
    printf("Area: %.2f km²\n", area1); // Exibe a Área
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1); // Exibe os Pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Exibe a Densidade Populacional
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1); // Exibe o PIB per capita

    printf("\nCarta 2:\n"); // Dados da Carta 2
    printf("Estado: %c\n", estado2);                            
    printf("Codigo: %s\n", codigo2);                             
    printf("Nome da Cidade: %s\n", nomeCidade2);                 
    printf("Populacao: %d\n", populacao2);                       
    printf("Area: %.2f km²\n", area2);                           
    printf("PIB: %.2f bilhões de reais\n", pib2);               
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); 
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);          

    return 0;  // Finaliza o programa
}

