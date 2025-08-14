#include <stdio.h>
#include <string.h>



int main() {

    
    char estado1;
    char cartaCodigo1[20];
    char nomeCidadade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variaveis carta 2
    char estado2;
    char cartaCodigo2[20];
    char nomeCidadade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // Navgeação
    int opcao;

    printf("Bem vindo ao Super Trunfo em C \n");
    printf("Primeiro, vamos cadastrar sua primeira carta.\n");
    printf("Digite somente uma letra de 'A' a 'H' do estado:\n");
    
    scanf(" %c", &estado1);

    printf("Certo, agora digite o codigo da carta. ex:(A01, B03):\n");
    
    scanf("%s", cartaCodigo1);
    getchar(); //Limpa o buffer
    printf("Digite o nome da cidade:\n");
   
    fgets(nomeCidadade1, sizeof(nomeCidadade1), stdin); //captura um buffer do tamano da variavel digitada no console
    nomeCidadade1[strcspn(nomeCidadade1, "\n")] = 0;

    printf("Digite a população:\n");

    scanf("%lu", &populacao1);

    printf("Digite a área em km²:\n");

    scanf("%f", &area1);

    printf("Digite o PIB(em bilhões de reais):\n");

    scanf("%f", &pib1);

    printf("Por ultimo o número de pontos turisticos:\n");

    scanf("%i", &pontosTuristicos1);

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) pib1*1e9 / populacao1;

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0F / densidadePopulacional1);

    printf("---------------------------\n");
    
    // Carta 2
    printf("Carta 2:\n");
    printf("Digite somente uma letra de 'A' a 'H' do estado:\n");
    
    scanf(" %c", &estado2);

    printf("Certo, agora digite o codigo da carta. ex:(A01, B03):\n");
    
    scanf("%s", cartaCodigo2);
    getchar(); //Limpa o buffer
    printf("Digite o nome da cidade:\n");
   
    fgets(nomeCidadade2, sizeof(nomeCidadade2), stdin); //captura um buffer do tamano da variavel digitada no console
    nomeCidadade2[strcspn(nomeCidadade2, "\n")] = 0;

    printf("Digite a população:\n");

    scanf("%lu", &populacao2);

    printf("Digite a área em km²:\n");

    scanf("%f", &area2);

    printf("Digite o PIB(em bilhões de reais):\n");

    scanf("%f", &pib2);

    printf("Por ultimo o número de pontos turisticos:\n");

    scanf("%i", &pontosTuristicos2);

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) pib2*1e9 / populacao2;

    
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0F / densidadePopulacional2);


    printf("---------------------------\n");
    printf("Menu de comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densidade demográfica \n");
    scanf("%d", &opcao);

    

    switch (opcao) {
    case 1:
      printf("Comparação de cartas (Atributo: População):\n");
      printf("Carta 1 -  %c : %lu \n" ,estado1, populacao1);
      printf("Carta 2 -  %c : %lu \n" ,estado2, populacao2);
      printf("Resultado:\n");
       if (populacao1 > populacao2) {
          printf("Carta 1 Venceu!\n");
      } else if(populacao1 == populacao2){
          printf("Empate.\n");
      } else {
        printf("Carta 2 Venceu!\n");
      }
      break;
    case 2:
      printf("Comparação de cartas (Atributo: Área):\n");
      printf("Carta 1 -  %c : %f \n" ,estado1, area1);
      printf("Carta 2 -  %c : %f \n" ,estado2, area2);
      printf("Resultado:\n");
       if (area1 > area2) {
          printf("Carta 1 Venceu!\n");
      } else if(area1 == area2){
          printf("Empate.\n");
      } else {
        printf("Carta 2 Venceu!\n");
      }
      break;
    case 3:
      printf("Comparação de cartas (Atributo: PIB):\n");
      printf("Carta 1 -  %c : %f \n" ,estado1, pib1);
      printf("Carta 2 -  %c : %f \n" ,estado2, pib2);
      printf("Resultado:\n");
       if (pib1 > pib2) {
          printf("Carta 1 Venceu!\n");
      } else if(pib1 == pib2){
          printf("Empate.\n");
      } else {
        printf("Carta 2 Venceu!\n");
      }
      break;
    case 4:
      printf("Comparação de cartas (Atributo: Número de pontos turísticos):\n");
      printf("Carta 1 -  %c : %i \n" ,estado1, pontosTuristicos1);
      printf("Carta 2 -  %c : %i \n" ,estado2, pontosTuristicos2);
      printf("Resultado:\n");
       if (pontosTuristicos1 > pontosTuristicos2) {
          printf("Carta 1 Venceu!\n");
      } else if(pontosTuristicos1 == pontosTuristicos2){
          printf("Empate.\n");
      } else {
        printf("Carta 2 Venceu!\n");
      }
      break;
    case 5:
      printf("Comparação de cartas (Atributo: Densidade demográfica):\n");
      printf("Carta 1 -  %c : %.2f \n" ,estado1, densidadePopulacional1);
      printf("Carta 2 -  %c : %.2f \n" ,estado2, densidadePopulacional2);
      printf("Resultado:\n");
       if (densidadePopulacional1 > densidadePopulacional2) {
          printf("Carta 2 Venceu!\n");
      } else if(densidadePopulacional1 == densidadePopulacional2){
          printf("Empate.\n");
      } else {
        printf("Carta 1 Venceu!\n");
      }
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

    return 0;
}
