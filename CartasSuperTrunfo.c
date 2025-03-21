#include <stdio.h>
#include <string.h>

// Função para capturar o nome string com espaço
void capturarNome(char *nome, int tamanho) {
    getchar(); // Limpa o buffer para evitar problemas com fgets
    fgets(nome, tamanho, stdin); // Lê a string com espaços

    // Remove o '\n' caso esteja presente
    nome[strcspn(nome, "\n")] = '\0';
}


int main(){

    int pontosTur1,pontosTur2,opcao1,opcao2;
    unsigned long int populacao1,populacao2;
    float area1,area2,pib1,pib2,pibpercapita1,pibpercapita2,denpopulacional1,
    denpopulacional2,superpodercarta1, superpodercarta2,somaAtributo1,somaAtributo2;
    char estado1[4],estado2[4];
    char cidade1[30],cidade2[30],codc1[4],codc2[4],pais1[30],pais2[30];
    
   


    //leitura de dados carta 1
    printf("Digite as informações da carta 1: \n");
   
    printf("Digite o codigo da carta: ");
    scanf(" %s", &codc1);  
    
    printf("Digite o nome do pais: ");
    capturarNome(pais1, sizeof(pais1));

    //printf("Digite a sigla do Estado: "); 
    //scanf(" %s", &estado1);
    
    //printf("Digite o nome da Cidade: "); 
    //capturarNome(cidade1, sizeof(cidade1));
       
    printf("Digite o numero de habitantes: ");
    scanf("%u",&populacao1);
    printf("Digite a area em km2: ");
    scanf("%f",&area1);
    printf("Digite o PIB R$: ");
    scanf("%f",&pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d",&pontosTur1);

    //leitura de dados carta 2
    printf("\nDigite as informações da carta 2: \n");
          
    printf("Digite o codigo da carta: ");
    scanf(" %s", &codc2);  
    
    printf("Digite o nome do pais: ");
    capturarNome(pais2,sizeof(pais2));

   //printf("Digite a sigla do Estado: "); 
    //scanf(" %s", &estado2);
   
    //printf("Digite o nome da Cidade: ");        
    //capturarNome(cidade2, sizeof(cidade2));
  
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
    printf("\nCarta %s: \n",codc1);
    printf("Nome do Pais: %s\n",pais1);
    //printf("Estado: %s\n",estado1);
   //printf("Nome da Cidade: %s\n",cidade1);        
    printf("Populacao: %u\n",populacao1);
    printf("Area: %.2f km²\n",area1);
    printf("PIB: %.2f bilhões de reais\n",pib1);
    printf("Numero de Pontos Turisticos: %d\n",pontosTur1);
    printf("Densidade Populacional: %.2f hab/km²\n",denpopulacional1);
    printf("PIB per Capita: %.2f reais\n",pibpercapita1);
    printf("Super poder: %.2f\n",superpodercarta1);

    //escrita de resultados cicade 2
    printf("\nCarta %s: \n",codc2);
    printf("Nome do Pais: %s\n",pais2);
   //printf("Estado: %s\n",estado2);
   //printf("Nome da Cidade: %s\n",cidade2);
    printf("Populacao: %u\n",populacao2);
    printf("Area: %.2f km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Numero de Pontos Turisticos: %d\n",pontosTur2);
    printf("Densidade Populacional: %.2f hab/km²\n",denpopulacional2);
    printf("PIB per Capita: %.2f reais\n",pibpercapita2);
    printf("Super poder: %.2f\n",superpodercarta2);



    //menu de escolha usuario       
    printf("\n### Escolha Uma a primeira opção ###\n");
    printf("\n1. Nome dos Paises:\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Numero de pontos turisticos\n");
    printf("6. Densidade Demografica\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao1);

    if(opcao1>0 && opcao1<7 ){
    
    //case switch para alterar menu
    switch (opcao1)
    {
        case 2:
        printf("\n### Escolha Uma a segunda comparação ###\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Numero de pontos turisticos\n");
        printf("6. Densidade Demografica\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao2);
        break;
        case 3:
        printf("\n### Escolha Uma a segunda comparação ###\n");
        printf("2. População\n");
        printf("4. PIB\n");
        printf("5. Numero de pontos turisticos\n");
        printf("6. Densidade Demografica\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao2);

        break;
        case 4:
        printf("\n### Escolha Uma a segunda comparação ###\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("5. Numero de pontos turisticos\n");
        printf("6. Densidade Demografica\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao2);
        break;
        case 5:
        printf("\n### Escolha Uma a segunda comparação ###\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("6. Densidade Demografica\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao2);
        break;
        case 6:
        printf("\n### Escolha Uma a segunda comparação ###\n");
        printf("2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Numero de pontos turisticos\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao2);
        break;

    
    default:
        break;
    }




    //switch para escolha e resultado ds comparações
    for(int contador = 0; contador<=1; contador++){
    switch (opcao1){
    case 1:
        printf("\nCarta 1 - Nome do Pais: %s",pais1);
        printf("\nCarta 2 - Nome da Pais: %s",pais2);
    break;
    case 2:        
        opcao1=opcao2;
        somaAtributo1=somaAtributo1+populacao1;
        somaAtributo2=somaAtributo2+populacao2;           
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("\nCarta 1 - Pais %s tem uma população de: %d",pais1,populacao1);
        printf("\nCarta 2 - Pais %s tem uma população de: %d",pais2,populacao2);
        if(populacao1>populacao2){
            printf("\nResultado: Carta 1 venceu!\n");
        }else if(pontosTur1<populacao2){
            printf("\nResultado: Carta 2 venceu!\n");
        }else{
            printf("\nEmpate entre os atributos\n");
        }                    
    break;
    case 3:
        opcao1=opcao2; 
        somaAtributo1=somaAtributo1+area1;
        somaAtributo2=somaAtributo2+area2;
        printf("\nComparação de cartas (Atributo: Área):\n");
        printf("\nCarta 1 - Pais %s tem uma Área de: %.2f",pais1,area1);
        printf("\nCarta 2 - Pais %s tem uma Área de: %.2f",pais2,area2);
        if(area1>area2){
            printf("\nResultado: Carta 1 venceu!\n");
        }else if(area1<area2){
            printf("\nResultado: Carta 2 venceu!\n");
        }else{
            printf("\nEmpate entre os atributos\n");
        } 
    break;
    case 4:
        somaAtributo1=somaAtributo1+pib1;
        somaAtributo2=somaAtributo2+pib2;
        opcao1=opcao2; 
        printf("\nComparação de cartas (Atributo: PIB):\n");
        printf("\nCarta 1 - Pais %s tem um PIB de: %.2f",pais1,pib1);
        printf("\nCarta 2 - Pais %s tem um PIB de: %.2f",pais2,pib2);
        if(pib1>pib2){
            printf("\nResultado: Carta 1 venceu!\n");
        }else if(pib1<pib2){
            printf("\nResultado: Carta 2 venceu!\n");
        }else{
            printf("\nEmpate entre os atributos\n");
        } 
    break;
    case 5:
        opcao1=opcao2;
        somaAtributo1=somaAtributo1+pontosTur1;
        somaAtributo2=somaAtributo2+pontosTur2; 
        printf("\nComparação de cartas (Atributo: Pontos Turisticos):\n");
        printf("\nCarta 1 - Pais %s tem %d pontos turisticos",pais1,pontosTur1);
        printf("\nCarta 2 - Pais %s tem %d pontos turisticos",pais2,pontosTur2);
        if(pontosTur1>pontosTur2){
            printf("\nResultado: Carta 1 venceu!\n");
        }else if(pontosTur1<pontosTur2){
            printf("\nResultado: Carta 2 venceu!\n");
        }else{
            printf("\nEmpate entre os atributos\n");
        }             
    break;
    case 6:
        somaAtributo1=somaAtributo1-denpopulacional1;
        somaAtributo2=somaAtributo2-denpopulacional2;
        opcao1=opcao2; 
        printf("\nComparação de cartas (Atributo: Densidade demográfica):\n");
        printf("\nCarta 1 - Pais %s tem uma Densidade demográfica de: %.2f",pais1,denpopulacional1);
        printf("\nCarta 2 - Pais %s tem uma Densidade demográfica de: %.2f",pais2,denpopulacional2);
        if(denpopulacional2>denpopulacional1){
            printf("\nResultado: Carta 1 venceu!\n");
        }else if(denpopulacional2<denpopulacional1){
            printf("\nResultado: Carta 2 venceu!");
        }else{
            printf("\nEmpate entre os atributos\n");
        } 
    break;
    }
}
//exibir resultados de somas de atibutos escolhidos    
printf("\nComparação de cartas (Atributo: Soma de atributos escolhidos):\n");
printf("\nCarta 1 - Pais %s tem uma uma soma total de: %.2f",pais1,somaAtributo1);
printf("\nCarta 2 - Pais %s tem uma uma soma total de: %.2f\n",pais2,somaAtributo2);
if(somaAtributo1==somaAtributo2){
    printf("Empate!!!");
}else{
somaAtributo1>somaAtributo2 ? printf("Carta 1 venceu!") : printf("carta 2 venceu");
}
}else{
printf("Opção inválida. Tente novamente.\n");
}
}