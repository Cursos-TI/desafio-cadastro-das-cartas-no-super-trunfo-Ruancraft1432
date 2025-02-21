#include <stdio.h>

int main() {
    char estado[20], codigo[20], nome[20];
    int populacao, pontos_turisticos;
    float area, PIB;

    printf("Registro de carta número 1\n");
    printf("Atenção não use pontos e virgulas\n");
    printf("Digite o nome do estado\n");
    scanf("%s" , &estado);

    printf("Digite o código da carta, com a primeira letra do estado seguida de um número\n");
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

    printf("----------------------------\n");
    
    char estado1[20], codigo1[20], nome1[20];
    int populacao1, pontos_turisticos1;
    float area1, PIB1;

    printf("Registro de carta número 2\n");
    printf("Atenção não use pontos e virgulas\n");
    printf("Digite o nome do estado\n");
    scanf("%s" , &estado1);

    printf("Digite o código da carta, com a primeira letra do estado seguida de um número\n");
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

    printf("----------------------------\n");

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);

    printf("----------------------------\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("----------------------------\n");
}