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
    printf("Super Poder: %.2f", super_poder1);

    
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
    printf("Super Poder: %.2f", super_poder2);

    printf("\n");


    //COMPARAÇÃO ENTRE ATRIBUTOS DAS CARTAS

    printf("\n");
    printf("====================== BEM-VINDO AO JOGO ======================  \n");


    //Declaração da variavel dos atributo e resultado

    int atributo_escolhido1 , atributo_escolhido2;
    int resultado1 , resultado2;
   

    printf("\n");
    printf("\n");

    //Informações necessarias para o usuario 
    
    printf("→ Para cada atributo, a regra geral é: vence a carta com o maior valor. A exceção continua sendo a Densidade Demográfica, onde vence a carta com o menor valor.\n");
    printf("\n");
    printf("============= MENU DE ESCOLHA =============\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turisticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. Pib per Capita\n");
    printf("7. Super poder\n");

    //Escolha do atributo 1 
    printf("\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d" , &atributo_escolhido1);
    printf("\n");

    // Adicionando Lógica e o Menu Interativo com uso do switch e operador ternario
    // Operador ternario foi usado de forma aninhada para implementar o empate na comparação individual

    switch (atributo_escolhido1){

    case 1:

        printf("Primeiro atributo: População\n");
        printf("    Carta 1 População : %lu\n" , populacao1);
        printf("    Carta 2 População : %lu\n" , populacao2);


        resultado1 = populacao1 > populacao2 ? 1 : ((populacao2 > populacao1) ? 2 : 0);
        break;
    
    case 2: 
        printf("Primeiro atributo: Área\n");
        printf("    Carta 1 Área : %.2f\n" , area1);
        printf("    Carta 2 Área : %.2f\n", area2);

        resultado1 = area1 > area2 ? 1 : ((area2 > area1) ?  2 : 0);
        break;    

    case 3: 
        printf("Primeiro atributo: PIB\n");
        printf("    Carta 1 PIB : %.2f\n", pib1);
        printf("    Carta 2 PIB : %.2f\n", pib2);


        resultado1 = pib1 > pib2 ? 1 :((pib2 > pib1) ? 2: 0);
        break;

    case 4:
        printf("Primeiro atributo: Ponto Turísticos\n");
        printf("    Carta 1 Ponto Turístico : %d\n" , ponto_turistico1);
        printf("    Carta 2 Ponto Turístico : %d\n" , ponto_turistico2);


        resultado1 = ponto_turistico1 > ponto_turistico2 ? 1 : ((ponto_turistico2 > ponto_turistico1) ? 2 : 0);
        break;

    case 5:
        printf("Primeiro atributo: Densidade Demográfica\n");
        printf("    Carta 1 Densidade Demográfica : %.2f\n", densidade_populacional1);
        printf("    Carta 2 Densidade Demográfica : %.2f\n", densidade_populacional2);

        
        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : ((densidade_populacional2 < densidade_populacional1) ? 2 : 0);
        break;

    case 6:
        printf("Primeiro atributo: Pib per Capita\n");
        printf("    Carta 1 Pib per capita : %.2f\n", pib_per_capita1);
        printf("    Carta 2 Pib per capita : %.2f\n", pib_per_capita2);

        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : ((pib_per_capita2 > pib_per_capita1) ? 2 : 0);

        break;

    case 7:
        printf("Primeiro atributo: Super Poder\n");
        printf("    Carta 1 Super poder : %.2f\n", super_poder1);
        printf("    Carta 2 Super poder : %.2f\n", super_poder2);

        resultado1 = super_poder1 > super_poder2 ? 1 : ((super_poder2 > super_poder1) ? 2 : 0);

        break;

    default:
        
        printf("Opção inválida no primeiro atributo ! Inicie o programa novamente !\n");
        break;
    }

    //Escolha do atributo 2 

    printf("\n");
    printf("→ Atenção: Você deve escolher um atributo diferente do primeiro.\n");
    printf("\n");
    printf("Escolha o segundo atributo: ");
    scanf("%d" , &atributo_escolhido2);
    printf("\n");

    //Validação para saber se os atributos são iguais


    if(atributo_escolhido1 == atributo_escolhido2){

        printf("Opção inválida, atributo ja escolhido !\n");

    }else {
        switch (atributo_escolhido2)
        {
        case 1:
            
            printf("Segundo atributo: População\n");
            printf("     Carta 1 População : %lu\n", populacao1);
            printf("     Carta 2 População : %lu\n", populacao2);


            resultado2 = populacao1 > populacao2 ? 1 : ((populacao2 > populacao1) ? 2 : 0);
            break;

        case 2: 
            printf("Segundo atributo: Área\n");
            printf("     Carta 1 Área : %.2f\n" , area1);
            printf("     Carta 2 Área : %.2f\n", area2);
            
            resultado2 = area1 > area2 ? 1 : ((area2 > area1) ? 2 : 0);
            break;

        case 3: 
            printf("Segundo atributo: PIB\n");
            printf("    Carta 1 PIB : %.2f\n", pib1);
            printf("    Carta 2 PIB : %.2f\n", pib2);

            resultado2 = pib1 > pib2 ? 1 : ((pib2 > pib1) ? 2 : 0);
            break;

        case 4:
            printf("Segundo atributo: Ponto Turísticos\n");
            printf("    Carta 1 Ponto Turísticos : %d\n" , ponto_turistico1);
            printf("    Carta 2 Ponto Turísticos : %d\n" , ponto_turistico2);

            resultado2 = ponto_turistico1 > ponto_turistico2 ? 1 : ((ponto_turistico2 > ponto_turistico1) ? 2 : 0);
            break;

        case 5:
            printf("Segundo atributo: Densidade Demográfica\n");
            printf("    Carta 1 Densidade Demográfica : %.2f\n" , densidade_populacional1);
            printf("    Carta 2 Densidade Demográfica : %.2f\n" , densidade_populacional2);

            resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : ((densidade_populacional2 < densidade_populacional1) ? 2 : 0);
            break;

        case 6:
            printf("Segundo atributo: Pib per capita\n");
            printf("    Carta 1 Pib per capita : %.2f\n", pib_per_capita1);
            printf("    Carta 2 Pib per capita : %.2f\n", pib_per_capita2);

            resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : ((pib_per_capita2 > pib_per_capita1) ? 2 : 0);

        break;    
        
        case 7:
            printf("Segundo atributo: Super poder\n");
            printf("    Carta 1 Super poder : %.2f\n", super_poder1);
            printf("    Carta 2 Super poder : %.2f\n", super_poder2);

            resultado2 = super_poder1 > super_poder2 ? 1 : ((super_poder2 > super_poder1) ? 2 : 0);

            break;

        default:

            printf("Opção inválida no segundo atributo ! Inicie o programa novamente !\n");
            break;
    }    

        printf("\n");
        printf(" ============= RESULTADO =============  \n");
        printf("\n");

        printf("Nome das cidades escolhidas: \n");
        printf("        Cidade 1 : %s\n", cidade1);
        printf("        Cidade 2 : %s\n", cidade2);

        //SAIDA DO RESULTADO 
        
        if (resultado1 == 1 && resultado2 == 1){
            printf("CARTA 1 VENCEU A RODADA !\n");
        }else if (resultado1 == 2 && resultado2 == 2){
            printf("CARTA 2 VENCEU A RODADA !\n");
        }else{
            printf("A RODADA TERMINOU EM EMPATE !\n");
        }

        }

    printf("\n");



    return 0;
}
