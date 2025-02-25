#include <stdio.h>

int main() {
    //carta número 1
    char estado[20], codigo[10], nome[20];
    int populacao, pontos_turisticos;
    float area, PIB, Densidade_Populacional, Capita;

    //registo da carta
    printf("Registro de carta número 1\n");
    printf("Digite o nome do estado\n");
    scanf("%s" , &estado);

    printf("Digite o código da carta, primeira letra do estado e depois número(EX:A03,B05)\n");
    scanf("%s", &codigo);

    printf("Digite o nome da capital\n");
    scanf("%s", &nome);

    printf("Digite a quantidade da população do estado\n");
    scanf("%d", &populacao);

    printf("Digite a área do estado em km²\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos_turisticos);

    //área de calculo
    Densidade_Populacional = (populacao / area);
    Capita = (PIB / populacao) * 1000000000; //única maneira que achei para resolver esse cáculo usando '*'

    printf("\n");
    //carta número 2
    char estado1[20], codigo1[10], nome1[20];
    int populacao1, pontos_turisticos1;
    float area1, PIB1, Densidade_Populacional1, Capita1;

    //registo da carta
    printf("Registro de carta número 2\n");
    printf("Digite o nome do estado\n");
    scanf("%s" , &estado1);

    printf("Digite o código da carta, primeira letra do estado e depois número(EX:A03,B05)\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da capital\n");
    scanf("%s", &nome1);

    printf("Digite a quantidade da população do estado\n");
    scanf("%d", &populacao1);

    printf("Digite a área do estado em km²\n");
    scanf("%f", &area1);

    printf("Digite o PIB\n");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos_turisticos1);

    //área de calculo
    Densidade_Populacional1 = (populacao1 / area1);
    Capita1 = (PIB1 / populacao1) * 1000000000; //única maneira que achei para resolver esse cáculo usando '*'

    printf("\n");
    //resultado da carta
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional);
    printf("PIB per Capita: %.2f reais\n", Capita);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional1);
    printf("PIB per Capita: %.2f reais\n", Capita1);
}