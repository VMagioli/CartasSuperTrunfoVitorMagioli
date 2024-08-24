#include <stdio.h>
#include <string.h>

int main(){
    char cidadeA[20], cidadeB[20], cidadeC[20], cidadeD[20];
    float populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    double PIB1, PIB2, PIB3, PIB4;
    double densidade1, densidade2, densidade3, densidade4;
    double pibper1,pibper2, pibper3, pibper4;
    int pontos1, pontos2, pontos3, pontos4;

    //início da primeira cidade

    printf("Digite o Nome da Primeira Cidade: \n");
    fgets(cidadeA, sizeof(cidadeA), stdin);
    cidadeA[strcspn(cidadeA, "\n")] = 0; // Remove a nova linha

    printf("Digite o número da população: \n");
    scanf("%f", &populacao1);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade (km²): \n");
    scanf("%f", &area1);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB1);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos1);    

    densidade1 = populacao1 / area1; //calcula densidade demográfica;

    pibper1 = PIB1 / populacao1; //calcula PIB per capita;

    printf("%s tem uma população de %.3f \n", cidadeA, populacao1);
    printf("a área total é de %.3f km²\n", area1);
    printf("o PIB que a cidade possui é de %.3lf \n", PIB1);
    printf("A densidade populacional é: %.3lf \n", densidade1);
    printf("O PIB per capita é: %.3lf \n", pibper1);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos1);
   
    //fim da primeira cidade
    
    while ((getchar()) != '\n');

    //início da segunda cidade
    printf("\nDigite o Nome da Segunda Cidade: \n");
    fgets(cidadeB, sizeof(cidadeB), stdin);
    cidadeB[strcspn(cidadeB, "\n")] = 0; // Remove a nova linha

    printf("Digite o número da população: \n");
    scanf("%f", &populacao2);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB2);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos2);    
    
    densidade2 = populacao2 / area2; //calcula densidade demográfica;

    pibper2 = PIB2 / populacao2; //calcula PIB per capita;

    printf("A %s tem uma população de %.3f \n", cidadeB, populacao2);
    printf("a área total é de %.3f \n", area2);
    printf("o PIB que a cidade possui é de %.3lf \n", PIB2);
    printf("A densidade populacional é: %.3lf \n", densidade2);
    printf("O PIB per capita é: %.3lf \n", pibper2);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos2);

    //fim da segunda cidade

    while ((getchar()) != '\n');

    //início da terceira cidade

    printf("\nDigite o Nome da Terceira Cidade: \n");
    fgets(cidadeC, sizeof(cidadeC), stdin);
    cidadeC[strcspn(cidadeC, "\n")] = 0; // Remove a nova linha

    printf("Digite o número da população: \n");
    scanf("%f", &populacao3);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area3);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB3);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos3);    

    densidade3 = populacao3 / area3; //calcula densidade demográfica;

    pibper3 = PIB3 / populacao3; //calcula PIB per capita;

    printf("A %s tem uma população de %.3f \n", cidadeC, populacao3);
    printf("a área total é de %.3f \n", area3);
    printf("o PIB que a cidade possui é de %.3lf \n", PIB3);
    printf("A densidade populacional é: %.3lf\n", densidade3);
    printf("O PIB per capita é: %.3lf\n", pibper3);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos3);
    
    //fim da terceira cidade
    
    while ((getchar()) != '\n');
    
     //início da quarta cidade
    printf("\nDigite o Nome da Quarta Cidade: \n");
    fgets(cidadeD, sizeof(cidadeD), stdin);
    cidadeD[strcspn(cidadeD, "\n")] = 0; // Remove a nova linha

    printf("Digite o número da população: \n");
    scanf("%f", &populacao4);

    // Limpar o buffer de entrada
    while ((getchar()) != '\n');
    
    printf("Digite a área da cidade: \n");
    scanf("%f", &area4);

    while ((getchar()) != '\n');

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB4);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos4);    

    densidade4 = populacao4 / area4; //calcula densidade demográfica;

    pibper4 = PIB4 / populacao4; //calcula PIB per capita;

    printf("A %s tem uma população de %.3f \n", cidadeD, populacao4);
    printf("a área total é de %.3f \n", area4);
    printf("o PIB que a cidade possui é de %.3lf \n", PIB4);
    printf("A densidade populacional é: %.3lf\n", densidade4);
    printf("O PIB per capita é: %.3lf\n", pibper4);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos4);
    //fim da quarta cidade

    return 0;
}

