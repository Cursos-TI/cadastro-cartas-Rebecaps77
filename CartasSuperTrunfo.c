#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  char Estado[50];
  char Codigo
  int  Populacao;
  float Area;
  float PIB;
  int Pontos_turisticos;


  

  printf ("insira o estado: \n");
  scanf ("%s", Estado);

  printf ("insira o código da carta: \n");
  scanf ("%s", Codigo);

  printf("insira o número da população: \n");
  scanf("%d", &Populacao);

  printf("insira a área: \n");
  scanf("%f", &Area);

  print("insira o PIB: \n");
  scanf("%f", &PIB);

  printf("insira os pontos turisticos: \n");
  scanf("%d", &Pontos_turisticos);



  printf("estado: %s\n", Estado);
  printf("código: %s\n", Codigo);
  printf("população: %d\n", Populacao);
  printf("area: %f\n", Area);
  printf("PIB: %f\n", PIB);
  printf("pontos turisticos: %d\n", Pontos_turisticos);



  
return 0;

} 
