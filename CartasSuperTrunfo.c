#include <stdio.h>

int main() {
    char estado[2];
    char codigo_carta[20];
    char nome_cidade[20];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;
    
    
    //Carta1

    printf("Digite o estado (duas letras): ");
    scanf(" %s", &estado); 
    printf("O estado digitado foi: %s\n", estado);
    
    printf("digite o codigo da carta:");
    scanf(" %s", codigo_carta);
    printf("o codigo da carta é: %s\n", codigo_carta);
    
    printf("digite o nome da cidade:");
    scanf(" %s", nome_cidade);
    printf("o nome da cidade é: %s\n", nome_cidade);
    
    printf("digite a população de %s:", nome_cidade);
    scanf(" %d", &populacao);
    printf("a população da cidade de %s é :%d\n",nome_cidade, populacao);
    
    printf("a aréa de %s, é?: ", nome_cidade);
    scanf("%f", &area);
    printf(" a area digitada da cidade de %s, foi: %f\n", nome_cidade, area);
    
    printf("o pib de %s, é?:", nome_cidade);
    scanf(" %f", &pib);
    printf("o pib da cidade de %s é: %f\n", nome_cidade, pib);
    
    printf("o numero de pontos turisticos de %s é?:", nome_cidade);
    scanf(" %d,", &numero_pontos_turisticos);
    printf(" o numero de pontos turisticos de %s é :%d\n", nome_cidade, numero_pontos_turisticos);
    
    
    printf("agora você irá digitar os dados da carta 2\n");
    
    
    
    
    //Carta2
    printf("Digite o estado (duas letras): ");
    scanf(" %s", &estado); //salvo na variavel estado
    printf("O estado digitado foi: %s\n", estado);
    
    printf("digite o codigo da carta:");
    scanf(" %s", codigo_carta);
    printf("o codigo da carta é: %s\n", codigo_carta);
    
    printf("digite o nome da cidade:");
    scanf(" %s", nome_cidade);
    printf("o nome da cidade é: %s\n", nome_cidade);
    
    printf("digite a população de %s:", nome_cidade);
    scanf(" %d", &populacao);
    printf("a população da cidade de %s é :%d\n",nome_cidade, populacao);
    
    printf("a aréa de %s, é?: ", nome_cidade);
    scanf("%f", &area);
    printf(" a area digitada da cidade de %s, foi: %f\n", nome_cidade, area);
    
    printf("o pib de %s, é?:", nome_cidade);
    scanf(" %f", &pib);
    printf("o pib da cidade de %s é: %f\n", nome_cidade, pib);
    
    printf("o numero de pontos turisticos de %s é?:", nome_cidade);
    scanf(" %d,", &numero_pontos_turisticos);
    printf(" o numero de pontos turisticos de %s é :%d", nome_cidade, numero_pontos_turisticos);
    
    
    
    return 0;
}
