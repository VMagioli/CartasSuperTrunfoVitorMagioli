#include <stdio.h>
#include <string.h>

int main(){
    char estado1[20], estado2[20], estado3[20], estado4[20];
    char cod1[5], cod2[5], cod3[5], cod4[5];
    char cidadeA[20], cidadeB[20], cidadeC[20], cidadeD[20];
    unsigned long int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float PIB1, PIB2, PIB3, PIB4;
    float densidade1, densidade2, densidade3, densidade4;
    float densidadeinvertida1, densidadeinvertida2, densidadeinvertida3, densidadeinvertida4;
    float pibper1,pibper2, pibper3, pibper4;
    float superpoder1, superpoder2, superpoder3, superpoder4;
    int pontos1, pontos2, pontos3, pontos4;

    //início do primeiro estado
    printf("Digite o Nome do Estado da primeira carta: \n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0; // Remove a nova linha

    printf("Digite o código da cidade da primeira carta  (Ex: A01, B02): \n");
    fgets(cod1, sizeof(cod1), stdin);
    cod1[strcspn(cod1, "\n")] = 0; // Remove a nova linha

    printf("Digite o Nome da Cidade da primeira carta: \n");
    fgets(cidadeA, sizeof(cidadeA), stdin);
    cidadeA[strcspn(cidadeA, "\n")] = 0; // Remove a nova linha
    
    printf("Digite o número da população: \n");
    scanf("%lu", &populacao1);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB1);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos1);    

    densidade1 = populacao1 / area1; //calcula densidade demográfica;

    pibper1 = PIB1 / populacao1; //calcula PIB per capita;

    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", cod1);
    printf("Cidade: %s \n", cidadeA);
    printf("Número da população: %lu \n", populacao1);
    printf("a área total é de %.3f km²\n", area1);
    printf("o PIB que a cidade possui é de %.3f \n", PIB1);
    printf("A densidade populacional é: %.3f \n", densidade1);
    printf("O PIB per capita é: %.3f \n", pibper1);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos1);
   
    //fim do primeiro estado
    
    while ((getchar()) != '\n');

    //início do segundo estado
    printf("\nDigite o Nome do Estado da segunda carta: \n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0; // Remove a nova linha

    printf("Digite o código da cidade da segunda carta (Ex: A01, B02): \n");
    fgets(cod2, sizeof(cod2), stdin);
    cod2[strcspn(cod2, "\n")] = 0; // Remove a nova linha

    //início da segunda cidade
    printf("Digite o Nome da Cidade da segunda carta: \n");
    fgets(cidadeB, sizeof(cidadeB), stdin);
    cidadeB[strcspn(cidadeB, "\n")] = 0; // Remove a nova linha
    
    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite o número da população: \n");
    scanf("%lu", &populacao2);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB2);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos2);    
    
    densidade2 = populacao2 / area2; //calcula densidade demográfica;

    pibper2 = PIB2 / populacao2; //calcula PIB per capita;

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", cod2);
    printf("Cidade: %s \n", cidadeB);
    printf("Número da população: %lu \n", populacao2);
    printf("a área total é de %.3f \n", area2);
    printf("o PIB que a cidade possui é de %.3f \n", PIB2);
    printf("A densidade populacional é: %.3f \n", densidade2);
    printf("O PIB per capita é: %.3f \n", pibper2);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos2);

    //fim da segunda cidade

    while ((getchar()) != '\n');

    /* Inverte a densidade populacional da primeira carta para usar na soma
    (para favorecimento de menores densidades)*/
    densidadeinvertida1 = 1 / densidade1;
    
    //soma propriedades da primeira carta
    superpoder1 = (float) populacao1 + area1 + PIB1 + densidadeinvertida1 + pibper1 + (float) pontos1;

    /* Inverte a densidade populacional da primeira carta para usar na soma
    (para favorecimento de menores densidades)*/
    densidadeinvertida2 = 1 / densidade2;

    //soma propriedades da segunda carta
    superpoder2 = (float) populacao2 + area2 + PIB2 + densidadeinvertida2 + pibper2 + (float) pontos2;

    //início da comparação das cartas
    printf ("Populacao: Carta 1 (%lu) vs Carta 2 (%lu) - Vencedor: %s\n", populacao1, populacao2, populacao1 > populacao2 ? "Carta 1" : "Carta 2");

    printf ("Area: Carta 1 (%.3f) vs Carta 2 (%.3f) - Vencedor: %s\n", area1, area2, area1 > area2 ? "Carta 1" : "Carta 2");

    printf ("Area: Carta 1 (%.3f) vs Carta 2 (%.3f) - Vencedor: %s\n", area1, area2, area1 > area2 ? "Carta 1" : "Carta 2");

    printf ("PIB: Carta 1 (%.3f) vs Carta 2 (%.3f) - Vencedor: %s\n", PIB1, PIB2, PIB1 > PIB2 ? "Carta 1" : "Carta 2");

    printf ("Pontos Turísticos: Carta 1 (%d) vs Carta 2 (%d) - Vencedor: %s\n", pontos1, pontos2, pontos1 > pontos2 ? "Carta 1" : "Carta 2");

    printf ("Densidade populacional: Carta 1 (%.3f) vs Carta 2 (%.3f) - Vencedor: %s\n", densidadeinvertida1, densidadeinvertida2, densidadeinvertida1 > densidadeinvertida2 ? "Carta 1" : "Carta 2");

    printf ("PiB per capita: Carta 1 (%.3f) vs Carta 2 (%.3f) - Vencedor: %s\n", pibper1, pibper2, pibper1 > pibper2 ? "Carta 1" : "Carta 2");

    printf ("SuperPoder: Carta 1 (%.3f) vs Carta 2 (%.3f) - Vencedor: %s\n", superpoder1, superpoder2, superpoder1 > superpoder2 ? "Carta 1" : "Carta 2");

    return 0;

}