#include <stdio.h>
#include <string.h>

// Definição da estrutura da carta
typedef struct {
    char estado[3];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} CartaCidade;

// Função para calcular densidade populacional
float calcular_densidade_populacional(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per capita
float calcular_pib_per_capita(float pib, unsigned long int populacao) {
    return pib / populacao;
}

// Função para calcular o Super Poder
float calcular_super_poder(CartaCidade carta) {
    // Inverte a densidade populacional para usar na soma (para favorecimento de menores densidades)
    float densidade_invertida = 1 / carta.densidade_populacional;
    return (float)carta.populacao + carta.area + carta.pib + densidade_invertida + (float)carta.pontos_turisticos;
}

// Função para ler os dados de uma carta
void ler_carta(CartaCidade *carta) {
    printf("Digite o estado: ");
    scanf("%s", carta->estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nome);

    printf("Digite a populacao: ");
    scanf("%lu", &carta->populacao);

    printf("Digite a area em km²: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta->pontos_turisticos);

    // Calcula as propriedades derivadas
    carta->densidade_populacional = calcular_densidade_populacional(carta->populacao, carta->area);
    carta->pib_per_capita = calcular_pib_per_capita(carta->pib, carta->populacao);
    carta->super_poder = calcular_super_poder(*carta);
}

// Função para comparar duas cartas e determinar a vencedora
void comparar_cartas(CartaCidade carta1, CartaCidade carta2) {
    printf("\nComparando as cartas:\n");

    // Comparando cada propriedade
    printf("Populacao: Carta 1 (%lu) vs Carta 2 (%lu) - Vencedor: %s\n", 
           carta1.populacao, carta2.populacao, 
           carta1.populacao > carta2.populacao ? "Carta 1" : "Carta 2");

    printf("Area: Carta 1 (%.2f) vs Carta 2 (%.2f) - Vencedor: %s\n", 
           carta1.area, carta2.area, 
           carta1.area > carta2.area ? "Carta 1" : "Carta 2");

    printf("PIB: Carta 1 (%.2f) vs Carta 2 (%.2f) - Vencedor: %s\n", 
           carta1.pib, carta2.pib, 
           carta1.pib > carta2.pib ? "Carta 1" : "Carta 2");

    printf("Pontos Turisticos: Carta 1 (%d) vs Carta 2 (%d) - Vencedor: %s\n", 
           carta1.pontos_turisticos, carta2.pontos_turisticos, 
           carta1.pontos_turisticos > carta2.pontos_turisticos ? "Carta 1" : "Carta 2");

    printf("Densidade Populacional: Carta 1 (%.2f) vs Carta 2 (%.2f) - Vencedor: %s\n", 
           carta1.densidade_populacional, carta2.densidade_populacional, 
           carta1.densidade_populacional < carta2.densidade_populacional ? "Carta 1" : "Carta 2");

    printf("PIB per Capita: Carta 1 (%.2f) vs Carta 2 (%.2f) - Vencedor: %s\n", 
           carta1.pib_per_capita, carta2.pib_per_capita, 
           carta1.pib_per_capita > carta2.pib_per_capita ? "Carta 1" : "Carta 2");

    printf("Super Poder: Carta 1 (%.2f) vs Carta 2 (%.2f) - Vencedor: %s\n", 
           carta1.super_poder, carta2.super_poder, 
           carta1.super_poder > carta2.super_poder ? "Carta 1" : "Carta 2");
}

int main() {
    CartaCidade carta1, carta2;

    // Leitura dos dados das cartas
    printf("Insira os dados da primeira carta:\n");
    ler_carta(&carta1);

    printf("\nInsira os dados da segunda carta:\n");
    ler_carta(&carta2);

    // Comparar as cartas
    comparar_cartas(carta1, carta2);

    return 0;
}
