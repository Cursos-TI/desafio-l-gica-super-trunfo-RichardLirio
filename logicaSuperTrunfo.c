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
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Codigo da carta: %s\n", cartaCodigo1);
    printf("Nome da Cidade: %s\n", nomeCidadade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super poder carta 1: %.2f\n", superPoder1);
    printf("---------------------------\n");
    
    // Carta 2
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
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Codigo da carta: %s\n", cartaCodigo2);
    printf("Nome da Cidade: %s\n", nomeCidadade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super poder carta 2: %.2f\n", superPoder2);
    printf("---------------------------\n");

    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 -  %c : %lu \n" ,estado1, populacao1);
    printf("Carta 2 -  %c : %lu \n" ,estado2, populacao2);
    printf("Resultado:\n");
    // Comparações
    if (populacao1 > populacao2) {
        printf("Cidade 1 tem maior população.\n");
    } else {
        printf("Cidade 2 tem maior população.\n");
    }

    return 0;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

}
