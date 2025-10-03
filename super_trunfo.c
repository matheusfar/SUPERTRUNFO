#include <stdio.h>
#include <string.h> // biblioteca para utilizar a funçao strtok



int main(){


    //DECLARAÇÃO DAS VARIAVEIS UTILIZADAS NAS CARTAS 1 E 2


    char estado1 , estado2; // recebe uma letra referente ao estado

    char codigo_carta1[50] , codigo_carta2[50]; // recebe o codigo da carta

    char cidade1[50] , cidade2[50]; // recebe o nome da cidade

    unsigned long int  populacao1, populacao2; // recebe a população da cidade
   
    int  ponto_turistico1, ponto_turistico2; // recebe o numero de pontos turisticos da cidade

    float area1, area2; //recebe o total da area da cidade

    float pib1, pib2; // recebe o PIB da cidade.

    float densidade_populacional1 , densidade_populacional2; // recebe a densidade populacional

    float pib_per_capita1 , pib_per_capita2; // recebe o pib per capita da cidade

    float super_poder1 , super_poder2; //somatoria de todos os atributos numericos das cartas 1 e 2

    float densidade_reversa1 , densidade_reversa2; // densidade populacional reversa




    printf("========================== SUPER TRUNFO ============================ ");
    printf("\n");
    printf("\n");


    
    // Adicionado observações para o usuario


    printf("→ Cada um dos 8 estados estarão representados por uma letra de A a H.\n");

    printf("→ A população pode ser informada por um número arredondado, sem virgulas ou pontos.\n");

    printf("  - Ex: 300000 sem '.' e ','.\n");

    printf("→ O codigo de cada carta é representado pela letra do estado escolhido e seguido por um numero de 01 a 04.\n");

    printf("  - Ex: A01 , B03 \n");





    // ENTRADA DE DADOS CARTA 1


    printf("\n");
    printf("========================== CADASTRO CARTA 1 ========================== \n");
    printf("\n");

    printf("Digite o estado: ");
    scanf("%c" , &estado1); 
    getchar(); // Limpeza de buffer

    printf("Digite o código da carta (Ex:A01): ");
    scanf(" %s" , codigo_carta1); 
    getchar(); // Limpeza de buffer

    printf("Digite o nome da cidade: "); 
    fgets(cidade1 , 50 , stdin);
    strtok(cidade1 , "\n"); // para a retirada da quebra de linha

    printf("Digite a população da cidade: "); 
    scanf("%lu" , &populacao1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1); 

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f" , &pib1); 

    printf("Digite o número de pontos turísticos: ");
    scanf("%d" , &ponto_turistico1);



    // (utilizar a função (float) converte explicitamente a variavel int (tipo inteiro) em float.


    densidade_populacional1 = (float) populacao1 / area1; 
    
    pib_per_capita1 = (pib1 * 1000000000.0) / populacao1; 

    densidade_reversa1 = 1.0 / densidade_populacional1; 


    super_poder1 = (float) populacao1 
    + area1 
    + pib1 
    + densidade_reversa1 
    + (float) ponto_turistico1 
    + pib_per_capita1; 



    // SAIDA DE DADOS CARTA 1


    printf("\n");
    printf("CARTA 1: \n");
    printf("\n");
    printf("Estado: %c\n" , estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacão: %lu\n", populacao1);
    printf("Área: %.2f Km²\n" , area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n" , ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n" ,densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    

    
    // ENTRADA DE DADOS DA CARTA 2


    printf("\n");
    printf("========================== CADASTRO CARTA 2 ==========================  \n");
    printf("\n");

    printf("Digite um estado: ");
    scanf(" %c" , &estado2); 
    getchar(); //Limpeza de buffer

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s" , codigo_carta2); 
    getchar(); //Limpeza de buffer

    printf("Digite nome da cidade: ");
    fgets(cidade2 , 50 , stdin); 
    strtok(cidade2 , "\n"); // para a retirada da quebra de linha
    
    printf("Digite a população da cidade: ");
    scanf("%lu" , &populacao2); 

    printf("Digite a área da cidade: "); 
    scanf("%f" , &area2); 

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f" , &pib2); 

    printf("Digite o números de pontos turísticos: ");
    scanf("%d" , &ponto_turistico2); 


    // utilizar a função (float) converte explicitamente a variavel int (tipo inteiro) em float.


    densidade_populacional2 = (float) populacao2 / area2 ; 

    pib_per_capita2 = (pib2 * 1000000000.0) / populacao2; 

    densidade_reversa2 = 1.0 / densidade_populacional2; 


    super_poder2 = (float) populacao2 
    + area2 
    + pib2 
    + densidade_reversa2 
    + (float) ponto_turistico2  
    + pib_per_capita2; 


    //SAIDA DE DADOS CARTA 2

    printf("\n");
    printf("CARTA 2:\n");
    printf("\n");
    

    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n" , populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n" , pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n" ,densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    printf("\n");



    //COMPARAÇÃO ENTRE ATRIBUTOS DAS CARTAS

    printf("\n");
    printf(" ========================== MENU DE ESCOLHA ==========================  \n");


    //Declaração da variavel atributo

    int atributo_escolhido;

    printf("\n");

    printf("1. Nome da cidade\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turisticos\n");
    printf("6. Densidade demográfica\n");

    printf("\n");
     
    //Informações necessarias para o usuario 

    printf("→ O atributo (Nome da cidade) é somente para a" 
        "exibição dos nomes de cada cidade.\n");
    printf("→  Na comparação do atributo densidade populacional o menor valor vence\n");

    printf("\n");
    printf("Escolha uma atributo para comparar entre as carta 1 e carta 2: ");
    scanf("%d" , &atributo_escolhido);

    printf("\n");
    printf(" ========================== BATALHA DE CARTAS ==========================  \n");

    printf("\n");
    printf("\n");


    // SAIDA DE DADOS DO ATRIBUTO ESCOLHIDO NO MENU COM INFORMAÇÕES COMPLEMENTARES

    // Adicionando Lógica e o Menu Interativo com uso do switch

    switch (atributo_escolhido)
    {
    case 1:
        printf(" 1. Nome das cidades escolhidas: \n");
        printf("    Cidade 1 : %s\n", cidade1);
        printf("    Cidade 2 : %s\n", cidade2);
        printf("2. Atributo escolhido: \n");
        printf("   - Nome das cidades\n");

        break;

    case 2:
        printf("   ==== COMPARANDO POPULAÇÃO ====\n");
        printf("1. Nomes das cidades escolhidas: \n");
        printf("   - Cidade 1: %s\n", cidade1);
        printf("   - Cidade 2: %s\n", cidade2);
        printf("2. Atributo escolhido: \n");
        printf("   - População\n");
        printf("3. Valores do atributo para cada carta: \n");
        printf("   - População carta 1: %lu\n", populacao1);
        printf("   - População carta 2: %lu\n" ,populacao2);
        printf("4. Carta vencedora: \n");

        if (populacao1 > populacao2){
            printf("   - Carta 1 venceu ! \n");
        }else if(populacao1 < populacao2){
            printf("   - Carta 2 venceu ! \n");
        }else{
            printf("   - EMPATE ambos atribustos tem o mesmo valor !\n");
        }

        break;

    case 3:
        printf("   ==== COMPARANDO ÁREA ====\n");
        printf("1. Nomes das cidades escolhidas: \n");
        printf("    - Cidade 1: %s\n", cidade1);
        printf("    - Cidade 2: %s\n", cidade2);
        printf("2. Atributo escolhido:  \n");
        printf("    - Área \n");
        printf("3. Valores do atributo para cada carta: \n");
        printf("    - Área carta 1: %.2f km²\n " , area1);
        printf("   - Área carta 2: %.2f km²\n ", area2);
        printf("4. Carta vencedora: \n");


        if (area1 > area2){
            printf("    - Cata 1 venceu !\n");
        }else if(area1 < area2){
            printf("    - Carta 2 venceu !\n");
        }else{
            printf("    - EMPATE ambos atributos tem o mesmo valor !\n");
        }
        
        break;

    case 4:
        printf("   ==== COMPARANDO PIB ====\n");
        printf("1. Nomes das cidades escolhidas: \n");
        printf("    - Cidade 1: %s\n" , cidade1);
        printf("    - Cidade 2: %s\n" , cidade2);
        printf("2. Atributo escolhido:  \n");
        printf("    - PIB \n");
        printf("3. Os valores do atributo para cada carta: \n");
        printf("    - PIB carta 1: %.2f bilhões de reais\n", pib1);
        printf("    - PIB carta 2: %.2f bilhões de reais\n ", pib2);
        printf("4. Carta vencedora: \n");

        if (pib1 > pib2){
            printf("    - Carta 1 venceu !\n");
        }else if(pib1 < pib2){
            printf("    - Carta 2 venceu !\n");
        }else{
            printf("- EMPATE ambos atributos tem o mesmo valor !\n");
        }

        break;

    case 5: 
        printf("  ==== COMPARANDO PONTO TURÍSTICOS ====\n");
        printf("1. Nomes da cidades escolhidas: \n");
        printf("    - Cidade 1: %s\n", cidade1);
        printf("    - Cidade 2: %s\n", cidade2);
        printf("2. Atributo escolhido: \n");
        printf("    - Números de pontos turísticos\n");
        printf("3. Os valores do atributo para cada carta: \n");
        printf("    - Número de pontos turísticos carta 1: %d\n", ponto_turistico1);
        printf("    - Número de pontos turísticos carta 2: %d\n" , ponto_turistico2);
        printf("4. Carta vencedora: \n");
        
        if (ponto_turistico1 > ponto_turistico2){
            printf("    - Carta 1 venceu !\n");
        }else if(ponto_turistico1 < ponto_turistico2){
            printf("    - Carta 2 venceu !\n");
        }else{
            printf("    - EMPATE ambos atributos tem o mesmo valor !\n");
        }
        break;

    case 6:
        printf("  ==== COMPARANDO DENSIDADE DEMOGRÁFICA ====\n");
        printf("1. Nomes das cidades escolhidas: \n");
        printf("    - Cidade 1: %s\n", cidade1);
        printf("    - Cidade 2: %s\n", cidade2);
        printf("2. Atributo escolhido: \n");
        printf("    - Densidade Demográfiga  \n");
        printf("3. Os valores do atributo para cada carta (Menor Vence!) \n");
        printf("    - Densidade demográfica carta 1: %.2f hab/km²\n", densidade_populacional1);
        printf("    - Densidade demográfica carta 2: %.2f hab/km²\n", densidade_populacional2);
        printf("4. Carta vencedora: \n");


        if (densidade_populacional1 < densidade_populacional2){
            printf("    - Carta 1 venceu !\n");
        }else if(densidade_populacional2 < densidade_populacional1){
            printf("    - Carta 2 venceu !\n");
        }else{
            printf("    - EMPATE ambos atributos tem o mesmo valor !\n");
        }

        break;

        default:
            printf("Opção invalida !\n");

            break;
    }
 

    printf("\n");



    return 0;
}
