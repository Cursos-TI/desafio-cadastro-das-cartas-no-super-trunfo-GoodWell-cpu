#include <stdio.h>

int main(){
    // variaveis da primeira carta
    int numerodacarta = 1;
    char estado[20] = "A";
    char codigo[20] = "A01";
    char nomedacidade[20] = "Sao Paulo";
    int populacao = 11450000;  
    float area = 248.21 ;
    float pib = 828.98 ; 
    int pontosturisticos = 36; 
    float densidadepopulacional = 7.528;
    float pibpercapita = 66.827;

    printf("Carta: %d\n ", numerodacarta);
    printf("Estado: %s\n ", estado);
    printf("Nome da Cidade: %s\n ", nomedacidade);
    printf("Codigo: %s\n ", codigo);
    printf("Populacao: %d\n ", populacao);
    printf("Area: %f Km²\n ", area);
    printf("PIB: %f Bilhoes de Reais\n ", pib);
    printf("Pontos Turisticos: %d \n ", pontosturisticos);
    printf("Densidade Populacional: %f Habitantes/Km² \n ", densidadepopulacional);
    printf("PIB Per Capita: %f Mil Reais \n ", pibpercapita);

    // variaveis da segunda carta
    int numerodacarta2 = 2;
    char estado2[20] = "B";
    char Codigo2[20] = "B02";
    char nomedacidade2[20] = "Rio de Janeiro";
    int populacao2 = 6211000;  
    float area2 = 43.69 ;
    float PIB2 = 949.30 ; 
    int pontosturisticos2 = 36; 
    float densidadepopulacional2 = 6.729;
    float pibpercapita2 = 49.094;

    printf("Carta: %d\n ", numerodacarta2);
    printf("Estado: %s\n ", estado2);
    printf("Nome da Cidade: %s\n ", nomedacidade2);
    printf("Codigo: %s\n ", Codigo2);
    printf("Populacao: %d\n ", populacao2);
    printf("Area: %f Km²\n ", area2);
    printf("PIB: %f Bilhoes de Reais\n ", PIB2);
    printf("Pontos Turisticos: %d\n ", pontosturisticos2);
    printf("Densidade Populacional: %f Habitantes/Km² \n ", densidadepopulacional2);
    printf ("PIB Per Capita: %f Mil Reais \n ", pibpercapita2);

    //condicao verdadeira
    if (pib > PIB2) // Se o pib da cidade 1 for maior que o pib da cidade 2 a carta com maior numero vence
    {
        printf("Carta 1 Venceu - %s (SP):828.980.000\n", nomedacidade); 
       
    }
    // condicao falsa
    else{ 

        printf("Carta 2 Venceu - %s (RJ):949.300.000\n", nomedacidade2);
    }

}