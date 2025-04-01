#include <stdio.h>
int main(){
    // Esse programa é um simples sistema de cadastro de cartas para o jogo Super Trunfo de Países.
    //  As linhas a seguir são as variaveis que armazenam os dados que o usuario vai inserir
    char estado;
    char codigodacarta[50];
    char nomedacidade[50];
    int populacao;
    float area;
    float pib;
    int numerodepontosturisticos;

    // as strings abaixo sao para imprimir na tela do usuario e pedir os dados

    printf ("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo de Países! Insira os dados da primeira carta\n");
   
    printf ("Escolha uma letra de A a H representando um dos oito estados: \n");
    scanf (" %c", &estado);

    printf ("Digite a letra do estado e um numero de 1 a 4 para seguir a letra do estado: \n");
    scanf ("%s", codigodacarta);

    printf ("Escolha um nome para a cidade: \n");
    scanf ("%s", nomedacidade);

    printf ("Insira o numero de habitantes da cidade: \n");
    scanf ("%d", &populacao);

    printf ("Determine a area da cidade: \n");
    scanf ("%f", &area);

    printf ("Informe o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf ("Escreva o numero de pontos turísticos na cidade: \n");
    scanf ("%d", &numerodepontosturisticos);

    //As proximas strings mostram os dados que foram inseridos pelo usuario na tela

    printf ("Estado: %c\n", estado);
    printf ("Codigo da carta: %s\n", codigodacarta);
    printf ("Nome da cidade: %s\n", nomedacidade);
    printf ("Populacao: %d\n", populacao);
    printf ("Area: %.2f\n", area);
    printf ("Produto Interno Bruto: %.2f\n", pib);
    printf ("Numero de pontos turisticos: %d\n", numerodepontosturisticos);

    // Nas proximas strings o programa pede os dados da segunda carta, com o mesmo processo

    printf ("Agora  insira os dados da segunda carta\n");
    char estado2;
    char codigodacarta2[50];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numerodepontosturisticos2;

    printf ("Escolha uma letra de A a H representando um dos oito estados: \n");
    scanf (" %c", &estado2);

    printf ("Digite a letra do estado e um numero de 1 a 4 para seguir a letra do estado: \n");
    scanf ("%s", codigodacarta2);

    printf ("Escolha um nome para a cidade: \n");
    scanf ("%s", nomedacidade2);

    printf ("Insira o numero de habitantes da cidade: \n");
    scanf ("%d", &populacao2);

    printf ("Determine a area da cidade: \n");
    scanf ("%f", &area2);

    printf ("Informe o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf ("Escreva o numero de pontos turísticos na cidade: \n");
    scanf ("%d", &numerodepontosturisticos2);

    printf ("Estado: %c\n", estado2);
    printf ("Codigo da carta: %s\n", codigodacarta2);
    printf ("Nome da cidade: %s\n", nomedacidade2);
    printf ("Populacao: %d\n", populacao2);
    printf ("Area: %.2f\n", area2);
    printf ("Produto Interno Bruto: %.2f\n", pib2);
    printf ("Numero de pontos turisticos: %d\n", numerodepontosturisticos2);

    printf ("Obrigado(a) por informar os dados para o jogo Super Trunfo de Países!\n");
    
    return 0;
    // Essa string retorna 0 para o sistema, finalizando o programa
}