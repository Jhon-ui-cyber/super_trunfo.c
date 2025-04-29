#include <stdio.h>

int main() {
    // Dados da carta 1
    char nome1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    float densidadepopulacional1 = 8102.47;
    float rendapercapita1 = 56724.32;

    // Dados da carta 2
    char nome2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    float densidadepopulacional2 = 5622.24;
    float rendapercapita2 = 44532.91;

    // Comparação de atributos
    printf("Comparação entre %s e %s:\n", nome1, nome2);

    // População
    printf("População:\n\n");
    printf("%s: %d\n", nome1, populacao1);
    printf("%s: %d\n", nome2, populacao2);
    printf("Resultado: %s tem maior população.\n", 
           (populacao1 > populacao2 ? nome1 : nome2));

    // Área
    printf("Área:\n\n");
    printf("%s: %.2f km²\n", nome1, area1);
    printf("%s: %.2f km²\n", nome2, area2);
    printf("Resultado: %s tem maior área.\n", 
           (area1 > area2 ? nome1 : nome2));

    // PIB
    printf("PIB:\n");
    printf("%s: %.2f bilhões\n", nome1, pib1);
    printf("%s: %.2f bilhões\n", nome2, pib2);
    printf("Resultado: %s tem maior PIB.\n", 
           (pib1 > pib2 ? nome1 : nome2));

    // Pontos Turísticos
    printf("Pontos Turísticos:\n\n");
    printf("%s: %d\n", nome1, pontosTuristicos1);
    printf("%s: %d\n", nome2, pontosTuristicos2);
    printf("Resultado: %s tem mais pontos turísticos.\n\n", 
           (pontosTuristicos1 > pontosTuristicos2 ? nome1 : nome2));
    
    //Calculo de densidade populacional       
    float densidadedapopulacao1 = populacao1/area1;
    float densidadedapopulacao2 = populacao2/area2;

    //Calculo PIB per capita
    float pibpercapita1 = pib1/populacao1;
    float pibpercapita2 = pib2/populacao2;
    
    //Saída de dados para exibir as informações de densidade populacional e PIB per capita
    printf("Agora, exibindo informações da densidade populacional e do PIB per capita: \n\n");
    printf("Densidade populacional da Carta 1: %f\n", densidadedapopulacao1);
    printf("Densidade populacional da Carta 2: %f\n\n", densidadedapopulacao2);
    
    printf("PIB per capita da Carta 1: %f\n", pibpercapita1);    
    printf("PIB per capita da Carta 2: %f\n\n", pibpercapita2);
    
    //Saída de dados para fazer a comparação entre ambas as informações
    printf("Iniciando programa de comparação da densidade populacional e PIB per capita entre %s e %s:\n\n", nome1, nome2);
    printf("%s: %f hab/km².\n", nome1, densidadedapopulacao1);
    printf("%s: %f hab/km².\n\n", nome2, densidadedapopulacao2);
    printf("Resultado: %s possui a maior densidade populacional.\n\n", 
                            (densidadedapopulacao1 > densidadedapopulacao2 ? nome1:nome2 ));
                            
                            
    printf("%s: %f reais.\n", nome1, densidadedapopulacao1);
    printf("%s: %f reais.\n\n", nome2, densidadedapopulacao2);
    printf("Resultado: %s possui o maior PIB per capita.\n\n", 
                            (pibpercapita1 > pibpercapita2 ? nome1:nome2 ));    




    return 0;
}

