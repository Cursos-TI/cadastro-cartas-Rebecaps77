//jogo Super Trunfo em c

#include <stdio.h>

// declaração de variaveis
int main () {

    int Carta;
    char Estado[50];
    char Codigo[50];
    char Nome_da_cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_pontos_turisticos;

    int Carta2;
    char Estado2[50];
    char Codigo2[50];
    char Nome_da_cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Numero_de_pontos_turisticos2;



// inserir dados das cartas
// entrada e saida de dados

printf("---- insira os dados da carta 1----\n");

printf("insira a carta: \n");
scanf("%d", &Carta);

printf("insira o Estado: \n");
scanf("%s",Estado);

printf("insira o codigo: \n");
scanf("%s",Codigo);

printf("insira o nome da cidade: \n");
scanf(" %s", Nome_da_cidade);

printf("insira a população: \n");
scanf("%d", &Populacao);

printf("insira a area: \n");
scanf("%f", &Area);

printf("insira o PIB: \n");
scanf("%f", &PIB);

printf("insira o número de pontos turisticos: \n");
scanf("%d", &Numero_de_pontos_turisticos);


printf("---- insira os dados da carta 2----\n");

printf("insira a carta: \n");
scanf("%d", &Carta2);

printf("insira o Estado: \n");
scanf("%s",Estado2);

printf("insira o codigo: \n");
scanf("%s",Codigo2);

printf("insira o nome da cidade: \n");
scanf(" %s", Nome_da_cidade2);

printf("insira a população: \n");
scanf("%d", &Populacao2);

printf("insira a area: \n");
scanf("%f", &Area2);

printf("insira o PIB: \n");
scanf("%f", &PIB2);

printf("insira o número de pontos turisticos: \n");
scanf("%d", &Numero_de_pontos_turisticos2);


// dados cadastrados de ambas cartas


printf("----Dados cadastrados carta 1----\n");

printf("Carta: %d \n", Carta);
printf("Estado: %s \n", Estado);
printf("Código: %s \n", Codigo);
printf("Nome da Cidade: %s \n", Nome_da_cidade);
printf("População: %d \n", Populacao);
printf("Area: %f\n" , Area);
printf("PIB: %f\n" , PIB);
printf("Numero de Pontos Turisticos: %d \n" , Numero_de_pontos_turisticos);


printf("----Dados cadastrados carta 2----\n");

printf("Carta: %d \n", Carta2);
printf("Estado: %s \n", Estado2);
printf("Código: %s \n", Codigo2);
printf("Nome da Cidade: %s \n", Nome_da_cidade2);
printf("População: %d \n", Populacao2);
printf("Area: %f\n" , Area2);
printf("PIB: %f\n" , PIB2);
printf("Numero de Pontos Turisticos: %d \n" , Numero_de_pontos_turisticos2);



return 0;

}
