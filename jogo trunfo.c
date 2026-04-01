#include <stdio.h>
int main(){
    int carta1 = 01 , carta2 = 02 ;
    // estado
    char estado1[20] ="São Paulo";
    char estado2[20]="Rio de janeiro";
    //codigo
    char codigo1[4] = "A01";
    char codigo2[4] = "R02";
    //cidade
    char cidade1[30] = "São Paulo";
    char cidade2[30] = "Rio de janeiro";
    //população
    float populacao1 = 12.325000;
    float populacao2 = 6.748000;
    // area
    float area1 = 1.52111;
    float area2 = 1.20025;
    // pib
    float pib1 = 699.28;
    float pib2 = 300.50;
    // pontos turisticos
    int pontos_turisticos1 = 50;
    int pontos_turisticos2 = 30;
    // pib per capita
    float pib_cap1;
    float pib_cap2;
    // densidade demografica
    float den_demografica1;
    float den_demografica2;
    // super poder
    float super_poder1;
    float super_poder2;

// carta dO ESTADO DE FORTALEZA
    printf("Carta: %d\n" , carta1);
    printf("Estado: %s\n" , estado1);
    printf("Codigo: %s\n" , codigo1);
    printf("Cidade: %s\n" , cidade1);
    printf("Populacao: %f\n" , populacao1);
    printf("Area: %f\n" , area1);
    printf("Pib: %f\n" , pib1); 
    printf("Pontos turisticos: %d\n" , pontos_turisticos1);
    pib_cap1 = (pib1/populacao1);
    printf("pib per capita de Fortaleza é: %.4f\n" , pib_cap1);
    den_demografica1 = (populacao1/area1);
    printf("A Densidade Demografica é: %f\n" , den_demografica1);
    super_poder1 =(populacao1 + area1 + pib1 + pib_cap1 + den_demografica1 + pontos_turisticos1);

// CARTA DO ESTADO DO RIO DE JANEIRO
    printf("Carta: %d\n" , carta2);
    printf("Estado: %s\n" , estado2);
    printf("Codigo: %s\n" , codigo2);
    printf("Cidade: %s\n" , cidade2);
    printf("Populacao: %f\n" , populacao2);
    printf("Area: %f\n" , area2);
    printf("Pib: %f\n" , pib2);
    printf("Pontos turisticos: %d\n" , pontos_turisticos2);
    pib_cap2 = (pib2/populacao2);
    printf("pib per capita do rio de janeiro é: %.4f\n" , pib_cap2);
    den_demografica2 = (populacao2/area2);
    printf("Densidade Demografica é: %.4f\n\n" , den_demografica2);
    super_poder2 =(populacao2 + area2 + pib2 + pib_cap2 + den_demografica2 + pontos_turisticos2);



    return 0;
}
   