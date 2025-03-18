#include <stdio.h>

int main(){

    int pontosTur1,pontosTur2,populacao1,populacao2;
    float area1,area2,pib1,pib2;
    char estado1,estado2;
    char cidade1[50],cidade2[50],codc1[4],codc2[4];


    //leitura de dados
    printf("Digite as informações da carta 1: \n");
    printf("Estado de A a H: \n"); 
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta: \n");
    scanf(" %s", &codc1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite o numero de abitantes: \n");
    scanf("%d",&populacao1);
    printf("Digite a area em km2: \n");
    scanf("%f",&area1);
    printf("Digite o PIB R$: \n");
    scanf("%f",&pib1);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d",&pontosTur1);

    printf("\nDigite as informações da carta 2: \n");
    printf("Estado de A a H: \n"); 
    scanf(" %c", &estado2); 
    printf("Digite o codigo da carta: \n");
    scanf(" %s", &codc2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o numero de abitantes: \n");
    scanf("%d",&populacao2);
    printf("Digite a area em km2: \n");
    scanf("%f",&area2);
    printf("Digite o PIB R$: \n");
    scanf("%f",&pib2);
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTur2);


    //escrita de resultados
    printf("\nCarta 1: \n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codc1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %.2f km²\n",area1);
    printf("PIB: %.2f bilhões de reais\n",pib1);
    printf("Numero de Pontos Turisticos: %d\n",pontosTur1);
    
    printf("\nCarta 2: \n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codc2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n",pontosTur2);
    
} 