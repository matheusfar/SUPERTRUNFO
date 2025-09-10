#include <stdio.h>



int main(){


    char estado1 , estado2; // recebe uma letra referente ao estado

    char codigo_carta1[50] , codigo_carta2[50]; // recebe o codigo da carta

    char cidade1[50] , cidade2[50]; // recebe o nome da cidade

    int  populacao1, populacao2; // recebe a população da cidade

    int ponto_turistico1, ponto_turistico2; // recebe o numero de pontos turisticos da cidade

    float area1, area2; //recebe o total da area da cidade

    float pib1, pib2; // recebe o PIB da cidade.

    
    // Adicionado observações para o usuario

    printf("→ Cada um dos 8 estados estarão representados por uma letra de A a H.\n");

    printf("→ A população pode ser informada por um número aredondado.\n");

    printf("  - Ex: 300.000 sem '.' e ','.\n");

    printf("→ O codigo de cada carta é represnetado pela letra do estado escolhido e seguido por um numero de 01 a 04.\n");

    printf("  - Ex: A01 , B03 \n");



    return 0;
}
