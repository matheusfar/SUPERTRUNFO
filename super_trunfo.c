#include <stdio.h>
#include <string.h> // biblioteca para utilizar a funçao strtok



int main(){


    char estado1 , estado2; // recebe uma letra referente ao estado

    char codigo_carta1[50] , codigo_carta2[50]; // recebe o codigo da carta

    char cidade1[50] , cidade2[50]; // recebe o nome da cidade

    int  populacao1, populacao2; // recebe a população da cidade

    int  ponto_turistico1, ponto_turistico2; // recebe o numero de pontos turisticos da cidade

    float area1, area2; //recebe o total da area da cidade

    float pib1, pib2; // recebe o PIB da cidade.

    printf("=== SUPER TRUNFO === ");
    printf("\n");
    printf("\n");
    
    // Adicionado observações para o usuario

    printf("→ Cada um dos 8 estados estarão representados por uma letra de A a H.\n");

    printf("→ A população pode ser informada por um número aredondado.\n");

    printf("  - Ex: 300.000 sem '.' e ','.\n");

    printf("→ O codigo de cada carta é represnetado pela letra do estado escolhido e seguido por um numero de 01 a 04.\n");

    printf("  - Ex: A01 , B03 \n");


    // ENTRADA DE DADOS CARTA 1

    printf("\n");
    printf("CADASTRO CARTA 1:\n");
    printf("\n");

    printf("Digite o estado: ");
    scanf("%c" , &estado1); // recebe a letra referente ao estado 1
    getchar();

    printf("Digite o código da carta: ");
    scanf(" %s" , codigo_carta1); // recebe o codigo da carta
    getchar();

    printf("Digite o nome da cidade: "); // recebe o nome da cidade 
    fgets(cidade1 , 50 , stdin);
    strtok(cidade1 , "\n");

    printf("Digite a população da cidade: "); // recebe a populacao da cidade 
    scanf("%d" , &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1); // recebe a area da cidade

    printf("Digite o PIB da cidade: ");
    scanf("%f" , &pib1); // recebe o PIB da cidade

    printf("Digite o número de pontos turísticos: ");
    scanf("%d" , &ponto_turistico1);// recebe o numero de pontos turísticos


    // SAIDA DE DADOS CARTA 1

    printf("\n");
    printf("CARTA 1: \n");
    printf("\n");
    printf("Estado: %c\n" , estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacão: %d\n", populacao1);
    printf("Área: %.2f\n" , area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n" , ponto_turistico1);


    
    // ENTRADA DE DADOS DA CARTA 2

    printf("\n");
    printf("CARTA 2: \n");
    printf("\n");

    printf("Digite um estado: ");
    scanf(" %c" , &estado2); // recebe a letra referente ao estado 
    getchar();

    printf("Digite o código da carta: ");
    scanf("%s" , codigo_carta2); //recebe o codigo da carta 
    getchar();

    printf("Digite a população da cidade: ");
    fgets(cidade2 , 50 , stdin); // recebe o nome da cidade 
    strtok(cidade2 , "\n");
    
    printf("Digite a população da cidade: ");
    scanf("%d" , &populacao2); // recebe a populaçao da cidade

    printf("Digite a área da cidade: "); 
    scanf("%f" , &area2); // recebe a area da cidade 

    printf("Digite o PIB da cidade: ");
    scanf("%f" , &pib2); // recebe o PIB da cidade

    printf("Digite o números de pontos turísticos: ");
    scanf("%d" , &ponto_turistico2); // recebe o numero de pontos turisticos 



    return 0;
}
