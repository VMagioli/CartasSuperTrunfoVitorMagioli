#include <stdio.h>
#include <string.h>

int main(){
    char cidadeA[20], cidadeB[20], cidadeC[20], cidadeD[20];
    float populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float PIB1, PIB2, PIB3, PIB4;
    int pontos1, pontos2, pontos3, pontos4;

    //início da primeira cidade

    printf("Digite o Nome da Primeira Cidade: \n");
    fgets(cidadeA, sizeof(cidadeA), stdin);
    cidadeA[strcspn(cidadeA, "\n")] = 0; // Remove a nova linha

    printf("Digite o número da população: \n");
    scanf("%f", &populacao1);

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

    printf("A %s tem uma população de %.3f \n", cidadeA, populacao1);
    printf("a área total é de %.3f \n", area1);
    printf("o PIB que a cidade possui é de %.3f \n", PIB1);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos1);
    //fim da primeira cidade
    while ((getchar()) != '\n');
    //início da segunda cidade
    printf("Digite o Nome da Segunda Cidade: \n");
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
    scanf("%f", &PIB2);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos2);    

    printf("A %s tem uma população de %.3f \n", cidadeB, populacao2);
    printf("a área total é de %.3f \n", area2);
    printf("o PIB que a cidade possui é de %.3f \n", PIB2);
    printf("e essa cidade possui %d pontos turísticos.\n", pontos2);
    //fim da segunda cidade
    while ((getchar()) != '\n');
    //início da terceira cidade
    printf("Digite o Nome da Terceira Cidade: \n");
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
    scanf("%f", &PIB3);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos3);    

    printf("A %s tem uma população de %.3f \n", cidadeC, populacao3);
    printf("a área total é de %.3f \n", area3);
    printf("o PIB que a cidade possui é de %.3f \n", PIB3);
    printf("e essa cidade possui %d pontos turísticos.", pontos3);
    //fim da terceira cidade
    while ((getchar()) != '\n');
     //início da quarta cidade
    printf("Digite o Nome da Quarta Cidade: \n");
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
    scanf("%f", &PIB4);
    
    while ((getchar()) != '\n');
    
    printf("Informe quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos4);    

    printf("A %s tem uma população de %.3f \n", cidadeD, populacao4);
    printf("a área total é de %.3f \n", area4);
    printf("o PIB que a cidade possui é de %.3f \n", PIB4);
    printf("e essa cidade possui %d pontos turísticos.", pontos4);
    //fim da quarta cidade

    return 0;
}

