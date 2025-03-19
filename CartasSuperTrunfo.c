#include <stdio.h>

int main(){

    int pontosTur1,pontosTur2;
    unsigned long int populacao1,populacao2;
    float area1,area2,pib1,pib2,pibpercapita1,pibpercapita2,denpopulacional1,denpopulacional2,superpodercarta1, superpodercarta2;
    char estado1,estado2;
    char cidade1[50],cidade2[50],codc1[4],codc2[4];


    //leitura de dados cidade 1
    printf("Digite as informações da carta 1: \n");
    printf("Estado de A a H: "); 
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta: ");
    scanf(" %s", &codc1);
    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade1);
    printf("Digite o numero de habitantes: ");
    scanf("%u",&populacao1);
    printf("Digite a area em km2: ");
    scanf("%f",&area1);
    printf("Digite o PIB R$: ");
    scanf("%f",&pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&pontosTur1);

    //leitura de dados cidade 2
    printf("\nDigite as informações da carta 2: \n");
    printf("Estado de A a H: "); 
    scanf(" %c", &estado2); 
    printf("Digite o codigo da carta: ");
    scanf(" %s", &codc2);
    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("Digite o numero de habitantes: ");
    scanf("%u",&populacao2);
    printf("Digite a area em km2: ");
    scanf("%f",&area2);
    printf("Digite o PIB R$: ");
    scanf("%f",&pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTur2);

    //calcular dencidade populacional
    denpopulacional1 =(float) populacao1/area1;
    denpopulacional2 =(float) populacao2/area2;

    //cacular PIB per capita
    pibpercapita1 =(float) pib1/populacao1;
    pibpercapita2 = (float) pib2/populacao2;

    //calculo super poder
    superpodercarta1 = (float) populacao1+area1+pib1+pontosTur1+pibpercapita1+(area1/populacao1);
    superpodercarta2 = (float) populacao2+area2+pib2+pontosTur2+pibpercapita2+(area2/populacao2);

    //escrita de resultados cicade 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codc1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("Populacao: %u\n",populacao1);
    printf("Area: %.2f km²\n",area1);
    printf("PIB: %.2f bilhões de reais\n",pib1);
    printf("Numero de Pontos Turisticos: %d\n",pontosTur1);
    printf("Densidade Populacional: %.2f hab/km²\n",denpopulacional1);
    printf("PIB per Capita: %.2f reais\n",pibpercapita1);
    printf("Super poder: %.2f\n",superpodercarta1);

    //escrita de resultados cicade 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codc2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("Populacao: %u\n",populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n",pontosTur2);
    printf("Densidade Populacional: %.2f hab/km²\n",denpopulacional2);
    printf("PIB per Capita: a%.2f reais\n",pibpercapita2);
    printf("Super poder: %.2f\n",superpodercarta2);


    //comparar cartas e exibir vencedor (1 = verdadeiro, 0 = falso)
    printf("\nPopulação: Carta 1 venceu (%d)\n",(populacao1>pontosTur2));
    printf("Área: Carta 1 venceu (%d)\n",(area1>area2));
    printf("PIB: Carta 1 venceu (%d)\n",(pib1>pib2));
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n",(pontosTur1>pontosTur2));
    printf("Densidade Populacional: Carta 2 venceu (%d)\n",(denpopulacional1> denpopulacional2));
    printf("PIB per Capita: Carta 1 venceu (%d)\n",(pibpercapita1> pibpercapita2));
    printf("Super Poder: Carta 1 venceu (%d)\n",(superpodercarta1>superpodercarta2));
    
}