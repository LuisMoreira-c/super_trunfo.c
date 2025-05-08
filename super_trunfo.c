#include <stdio.h>

int main(){ 
  
    // carta 1

    char estado = 'A';
    char codigodaCarta[10] ="A01";
    char Nomedacidade[20] = "SaoPaulo";
    int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int npturiscos = 50;

 printf("carta 1:\n");   
 printf("Estado uma letra: %c.\n", estado);
 printf("Codigo da carta: %c.\n", codigodaCarta);
 printf("O nome da cidade: %s.\n", Nomedacidade);
 printf("O numero de Habitantes: %d.\n", populacao);
 printf("A area da cidade em quilometros quadrados: %f km.\n", area);
 printf("O produto interno Bruto da cidade: %f bilhoes de reais.\n", pib);
 printf(" A quantidade de pontos turisticos na cidade: %d.\n", npturiscos);


    // carta 2
    char estado2 = 'B';
    char codigodaCarta2[10] = "B02";
    char Nomedacidade2[20] = "Riodejaneiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int npturiscos2 = 30;

    printf("Carta 2:\n");
    printf ("estado uma letra: %c.\n", estado2);
    printf("Codigo da carta: %c.\n", codigodaCarta2);
    printf("Nome da cidade: %s.\n", Nomedacidade2);
    printf("O numero de haitantes da cidade: %d.\n", populacao2);
    printf(" a area da cidade em quilometros quadrados: %f km.\n", area2);
    printf("O produto interno bruto da cidade: %f bilhoes de reais.\n", pib2);
    printf("A quantidade de pontos turisticos na cidade: %d.\n", npturiscos2);

}
