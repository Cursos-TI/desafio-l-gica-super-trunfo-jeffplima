#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
// Nível: novato

//Função para calcular a Densidade Demográfica
float calcularDensidade(int pop,float km){
    float densidade=(float)pop/km;
    return densidade;
}
//Função para Calcular Renda Per Capita
float calcularRenda(float PIB,int POP){
    float renda=PIB/(float)POP;
    return renda;
}
int main() {
    printf("\n*-----------------------------------------------------------------------------*");
    printf("\n*---------------------------- SUPER TRUNFO -----------------------------------*");
    printf("\n*-----------------------------------------------------------------------------*");
	
    //Variáveis carta 1
    char estado1;
    char cod1[5];
    char cidade1[40];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float rendaPIB1;
	
    //Variáveis carta 2
    char estado2;
    char cod2[5];
    char cidade2[40];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float rendaPIB2;
	
    //Leitura dos dados da carta 1
    printf("\n\n=== Carta 1 ===\n");
    printf("Qual a letra do Estado:");
	scanf(" %c",&estado1);
	printf("Informe CODIGO da carta:");
    scanf(" %[^\n]",cod1);
    printf("Informe NOME da cidade:");
    scanf(" %[^\n]",cidade1);
    printf("Informe POPULACAO:");
    scanf(" %d",&populacao1);
    printf("Informe AREA em KM2:");
    scanf(" %f",&area1);
    printf("Informe PIB:");
    scanf(" %f",&pib1);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade:");
    scanf(" %d",&turismo1);
	
    //Leitura dos dados da carta 2
    printf("\n\n=== Carta 2 ===\n");
    printf("Qual a letra do Estado:");
    scanf(" %c",&estado2);
    printf("Informe CODIGO da carta:");
    scanf(" %s",cod2);
    printf("Informe NOME da cidade:");
    scanf(" %[^\n]",cidade2);
    printf("Informe POPULACAO:");
    scanf(" %d",&populacao2);
    printf("Informe AREA em KM2:");
    scanf(" %f",&area2);
    printf("Informe PIB:");
    scanf(" %f",&pib2);
    printf("Informe quantidade de PONTOS TURISTICOS da cidade:");
    scanf(" %d",&turismo2);
	
    //Exibição das informações
    //Carta 1
	printf("\n===============================\nValores Digitados\n===============================\n");
    printf("\n=== Carta 1 ===");
    printf("\nEstado: %c",estado1);
    printf("\nCodigo: %s",cod1);
    printf("\nNome da Cidade: %s",cidade1);
    printf("\nPopulacao: %d",populacao1);
    printf("\nArea: %.2f",area1);
    printf("\nPIB: %.2f bilhoes de reais",pib1);
    printf("\nNumero de Pontos Turisticos: %d",turismo1);
	//Calcular densidade demográfica e renda per capita
    densidade1=calcularDensidade(populacao1,area1);
    rendaPIB1=calcularRenda(pib1,populacao1);
    printf("\nDensidade Populacional: %.2f pessoas/km2",densidade1);
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",rendaPIB1);

	//Carta 2
    printf("\n\n=== Carta 2 ===");
    printf("\nEstado: %c",estado2);
    printf("\nCodigo: %s",cod2);
    printf("\nNome da Cidade: %s",cidade2);
    printf("\nPopulacao: %d",populacao2);
    printf("\nArea: %.2f",area2);
    printf("\nPIB: %.2f bilhoes de reais",pib2);
    printf("\nNumero de Pontos Turisticos: %d",turismo2);
    //Calcular densidade demográfica e renda per capita
    densidade2=calcularDensidade(populacao2,area2);
    rendaPIB2=calcularRenda(pib2,populacao2);
    printf("\nDensidade Populacional: %.2f pessoas/km2",densidade2);
    printf("\nPIB per Capita: R$ %.2f /ano\n\n",rendaPIB2);

    //Comparação de atributos
    printf("\n\nComparacao de cartas\nAtributo: Renda Per Capita");
    if (rendaPIB1 > rendaPIB2) {
        printf("\nCarta 1 (%s) tem melhor renda per capita, e venceu o desafio!",cod1);
        printf("\nCidade:%s\nRenda R$%.2f" ,cidade1,rendaPIB1);
    }
    else {
        printf("\nCarta 2 (%s) tem melhor renda per capita, e venceu o desafio!",cod2);
        printf("\nCidade:%s\nRenda R$%.2f" ,cidade2,rendaPIB2);
    }

    printf("\nPrograma finalizado com sucesso!");	
    return 0;
}