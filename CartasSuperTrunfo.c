#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//Teste Ana Luiza 

int main() {
    
     // Mensagens de abertura do Jogo
    printf("Olá! Vamos dar continuidade ao Super Trunfo -  Agora no Nível Mestre\n"); 
    printf("Onde o objetivo é da Super Poderes para as Cartas E Compara-las entre si \n"); 
    printf("Sendo o RESULTADO 0 na frente da Carta pra FALSO e 1 para VERDADEIRO\n");
    printf("Vamos Começar:\n\n");

    // Carta 1 
    char estado1; // Letra que representa o estado da carta 1
    char codigo1[4]; // Código de identificação da carta 1 (ex: A01)
    char nomeCidade1[100]; // Nome da cidade da carta 1
    unsigned long int populacao1; // População da cidade 1
    float area1, pib1; // Área em km² e PIB da cidade 1
    int pontosTuristicos1; // Número de pontos turísticos da cidade 1
    float densidade1, pibPerCapita1, superPoder1; // Métricas calculadas da carta 1

    // Carta 2 
    char estado2; // Letra que representa o estado da carta 2
    char codigo2[4]; // Código de identificação da carta 2 (ex: B02)
    char nomeCidade2[100]; // Nome da cidade da carta 2
    unsigned long int populacao2; // População da cidade 2
    float area2, pib2; // Área em km² e PIB da cidade 2
    int pontosTuristicos2; // Número de pontos turísticos da cidade 2
    float densidade2, pibPerCapita2, superPoder2; // Métricas calculadas da carta 2

    // Entrada dos dados - Carta 1 
    printf("Cadastro da Carta 1:\n"); // Título da entrada de dados da carta 1
    printf("Letra do Estado podendo ser de (A a H): "); // Solicita a letra do estado
    scanf(" %c", &estado1); // Lê a letra do estado

    printf("Codigo podendo ser de (A01 a A04): "); // Solicita o código da carta
    scanf("%s", codigo1); // Lê o código da carta

    printf("Nome da cidade: "); // Solicita o nome da cidade
    scanf(" %[^\n]", nomeCidade1); // Lê o nome completo da cidade

    printf("Populacao: "); // Solicita a população
    scanf("%lu", &populacao1); // Lê a população

    printf("Area (km²): "); // Solicita a área em km²
    scanf("%f", &area1); // Lê a área

    printf("PIB (em bilhões de reais): "); // Solicita o PIB
    scanf("%f", &pib1); // Lê o PIB

    printf("Pontos turisticos: "); // Solicita os pontos turísticos
    scanf("%d", &pontosTuristicos1); // Lê os pontos turísticos

    // Cálculos - Carta 1 
    densidade1 = populacao1 / area1; // Calcula a densidade populacional
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // Calcula o PIB per capita convertendo para reais
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);  
    // Calcula o Super Poder somando várias métricas com peso proporcional

    // Entrada dos dados - Carta 2 
    printf("\nCadastro da Carta 2:\n"); // Título da entrada de dados da carta 2
    printf("Obs: Se na carta 1 você optou pela letra A, na carta 2 opte por outra diferente.\n"); // Mensagem de observação 
    printf("Letra do Estado podendo ser de (A a H): "); // Solicita a letra do estado
    scanf(" %c", &estado2); // Lê a letra do estado

    printf("Obs: Se na Carta 1 você optou pelo Código A01, na Carta 2 opte por outro diferente.\n"); // Mensagem de observação
    printf("Codigo da carta podendo ser de (A01 a A04): "); // Solicita o código da carta
    scanf("%s", codigo2); // Lê o código da carta

    printf("Nome da cidade: "); // Solicita o nome da cidade
    scanf(" %[^\n]", nomeCidade2); // Lê o nome completo da cidade

    printf("Populacao: "); // Solicita a população
    scanf("%lu", &populacao2); // Lê a população

    printf("Area (km²): "); // Solicita a área em km²
    scanf("%f", &area2); // Lê a área

    printf("PIB (em bilhões de reais): "); // Solicita o PIB
    scanf("%f", &pib2); // Lê o PIB

    printf("Pontos turisticos: "); // Solicita os pontos turísticos
    scanf("%d", &pontosTuristicos2); // Lê os pontos turísticos

    // Cálculos - Carta 2 
    densidade2 = populacao2 / area2; // Calcula a densidade populacional
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // Calcula o PIB per capita convertendo para reais
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2); 
    // Calcula o Super Poder da carta 2 com mesma lógica da carta 1

    // Exibição dos dados das cartas 
    printf("\n--- Dados das Cartas ---\n"); // Título da seção de exibição

    printf("\nCarta 1:\n"); // Início da exibição da carta 1
    printf("Estado: %c\n", estado1); // Mostra o estado
    printf("Codigo: %s\n", codigo1); // Mostra o código
    printf("Nome: %s\n", nomeCidade1); // Mostra o nome da cidade
    printf("Populacao: %lu\n", populacao1); // Mostra a população
    printf("Area: %.2f km²\n", area1); // Mostra a área
    printf("PIB: %.2f bilhões de reais\n", pib1); // Mostra o PIB
    printf("Pontos Turisticos: %d\n", pontosTuristicos1); // Mostra os pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Mostra a densidade
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1); // Mostra o PIB per capita
    printf("Super Poder: %.2f\n", superPoder1); // Mostra o Super Poder

    printf("\nCarta 2:\n"); // Início da exibição da carta 2
    printf("Estado: %c\n", estado2); // Mostra o estado
    printf("Codigo: %s\n", codigo2); // Mostra o código
    printf("Nome: %s\n", nomeCidade2); // Mostra o nome da cidade
    printf("Populacao: %lu\n", populacao2); // Mostra a população
    printf("Area: %.2f km²\n", area2); // Mostra a área
    printf("PIB: %.2f bilhões de reais\n", pib2); // Mostra o PIB
    printf("Pontos Turisticos: %d\n", pontosTuristicos2); // Mostra os pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Mostra a densidade
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2); // Mostra o PIB per capita
    printf("Super Poder: %.2f\n", superPoder2); // Mostra o Super Poder

    // Comparações e Resultados 
    printf("\n--- Comparação de Cartas ---\n"); // Início da comparação entre as cartas

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2); // Compara populações
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2); // Compara áreas
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2); // Compara PIBs
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2); // Compara pontos turísticos
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2); // Vence quem tiver maior densidade
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2); // Compara PIB per capita
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2); // Compara Super Poder

    return 0; // Finaliza o programa

}
