#include <stdio.h>

int main() {

    //carta número 1
    char estado[20], codigo[10], nome[20];
    int pontos_turisticos;
    float area, PIB, densidade_populacional, capita, super_poder;
    unsigned long int populacao;

    //registo da carta
    printf("Registro de carta número 1\n");
    printf("Digite o nome do estado\n");
    scanf("%s" , &estado);

    printf("Digite o código da carta, primeira letra do estado e depois número(EX:A03,B05)\n");
    scanf("%s", &codigo);

    printf("Digite o nome da capital\n");
    scanf("%s", &nome);

    printf("Digite a quantidade da população do estado\n");
    scanf("%u", &populacao);

    printf("Digite a área do estado em km²\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos_turisticos);

    //área de calculo
    densidade_populacional = (float)populacao / area;
    capita = PIB / (float)populacao * 1000000000;
    super_poder = populacao + PIB + pontos_turisticos + capita + (1/densidade_populacional);

    //carta número 2
    char estado2[20], codigo2[10], nome2[20];
    int pontos_turisticos2;
    float area2, PIB2, densidade_populacional2, capita2, super_poder2;
    unsigned long int populacao2;

    //registo da carta
    printf("Registro de carta número 2\n");
    printf("Digite o nome do estado\n");
    scanf("%s" , &estado2);

    printf("Digite o código da carta, primeira letra do estado e depois número(EX:A03,B05)\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da capital\n");
    scanf("%s", &nome2);

    printf("Digite a quantidade da população do estado\n");
    scanf("%u", &populacao2);

    printf("Digite a área do estado em km²\n");
    scanf("%f", &area2);

    printf("Digite o PIB\n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos_turisticos2);

    //área de calculo
    densidade_populacional2 = (float)populacao2 / area2;
    capita2 = PIB2 / (float)populacao2 * 1000000000;
    super_poder2 = populacao2 + PIB2 + pontos_turisticos2 + capita2 + (1/densidade_populacional2);

    printf("\n");

    //resultado das cartas
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %u\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", capita);
    printf("Super Poder: %.2f\n", super_poder);

    printf("\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\n");
    //Comparação
    printf("Comparação de Cartas\n");
    printf("Se for 1 a Carta 1 ganha se for 0 a Carta 2 ganha\n");
    printf("População: %d\n",populacao > populacao2);
    printf("Área: %d\n",area > area2);
    printf("PIB: %d\n", PIB > PIB2);
    printf("Número de Pontos Turísticos: %d\n",pontos_turisticos > pontos_turisticos2);
    printf("Densidade Populacional: %d\n",densidade_populacional < densidade_populacional2 );
    printf("PIB per Capita: %d\n",capita > capita2);
    printf("Super Poder: %d\n",super_poder > super_poder2);

    return 0;
}