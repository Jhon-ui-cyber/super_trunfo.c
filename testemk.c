#include <stdio.h>
    int main(){

        //Dados do primeiro jogador
        char mk1[20] = "Scorpion";
        char poder1[500] = "controlar o fogo, ser um espectro e imortalidade";
        int forca1 = 10000;
        int inteligencia1 = 5000;
        int agilidade1 = 8000;
        char passiva1[500] = "ninja (dobro de agilidade e inteligencia)";
        int novainteligencia1 = inteligencia1*2;
        int novaagilidade1 = agilidade1*2;

        //Dados do segundo jogador
        char mk2[20] = "Subzero";
        char poder2[500] = "controlar o gelo";
        int forca2 = 8000;
        int inteligencia2 = 10000;
        int agilidade2 = 7500;
        char passiva3[500] = "ninja (dobro de agilidade e inteligencia)";
        int novainteligencia2 = inteligencia2*2;
        int novaagilidade2 = agilidade2*2;

        //Início do programa para ver quem ganha no x1
        printf("Iniciando comparação entre %s e %s: \n\n", mk1, mk2);
        printf("%s possui o poder de %s \n", mk1, poder1);
        printf("%s possui o poder de %s \n", mk2, poder2);
        printf("Logo, são oponentes naturais, porém concordamos que o poder de: %s é superior à: %s \n\n", poder1, poder2);
        
        //Comparação de força: Scorpion vence
        printf("Iniciando comparação de força entre %s e %s: \n\n");
        printf("A força de %s é: %d \n", mk1, forca1);
        printf("A força de %s é: %d \n", mk2, forca2);
        printf("%s wins \n\n", mk1);
        
        //Comparação de inteligência: Subzero vence
        printf("Iniciando comparação de inteligência: \n\n");
        printf("A inteligência de %s é de: %d", mk1, novainteligencia1);
        printf("A inteligência de %s é de: %d", mk2, novainteligencia2);
        printf("%s wins\n\n", mk2);
        
        //Comparação de agilidade: Scorpion vence
        printf("Iniciando comparação de agilidade: \n\n");
        printf("A agilidade de %s é de: %d", mk1, novaagilidade1);
        printf("A agilidade de %s é de: %d", mk2, novaagilidade2);
        printf("%s é mais ágil do que %s \n\n", mk1, mk2);
        
        //As passivas não iam ajudar tanta coisa, logo não considerei,mas vou modificar entre as fórmulas        
        
        //Conclusão da comparação, resultado do x1: Scorpion 2x1 Subzero.
        printf("%s wins, FATALITY!!!", mk1);
        
        return 0;
    }
