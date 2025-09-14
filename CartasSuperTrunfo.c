#include <stdio.h>

int main() {
    // Carta 1
    char estado1[3];
    char codigo_carta1[20];
    char nome_cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numero_pontos_turisticos1;
    float densidade_populacional1;
    float per_capita1;
    float super_poder1;

    // Carta 2
    char estado2[3];
    char codigo_carta2[20];
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numero_pontos_turisticos2;
    float densidade_populacional2;
    float per_capita2;
    float super_poder2;

    // ===== CARTA 1 =====
    printf("Digite o estado (duas letras): ");
    scanf("%s", estado1);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta1);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);
    
    printf("Digite a população de %s: ", nome_cidade1);
    scanf("%lu", &populacao1);
    
    printf("Digite a área de %s: ", nome_cidade1);
    scanf("%f", &area1);
    
    printf("Digite o PIB de %s: ", nome_cidade1);
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos de %s: ", nome_cidade1);
    scanf("%d", &numero_pontos_turisticos1);
   
    densidade_populacional1 = (float) populacao1 / area1;
    per_capita1 = (float) pib1 / populacao1;
    super_poder1 = (float)(populacao1 + area1 + pib1 + per_capita1 + densidade_populacional1);
    
    // ===== CARTA 2 =====
    printf("\n===== Agora digite os dados da Carta 2 =====\n\n");
    
    printf("Digite o estado (duas letras): ");
    scanf("%s", estado2);
    
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);
    
    printf("Digite a população de %s: ", nome_cidade2);
    scanf("%lu", &populacao2);
    
    printf("Digite a área de %s: ", nome_cidade2);
    scanf("%f", &area2);
    
    printf("Digite o PIB de %s: ", nome_cidade2);
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos de %s: ", nome_cidade2);
    scanf("%d", &numero_pontos_turisticos2);
   
    densidade_populacional2 = (float) populacao2 / area2;
    per_capita2 = (float) pib2 / populacao2;
    super_poder2 = (float)(populacao2 + area2 + pib2 + per_capita2 + densidade_populacional2);

    // ===== Comparação =====
    printf("\n===== COMPARAÇÃO =====\n");
    printf("Super poder Carta 1: %.2f\n", super_poder1);
    printf("Super poder Carta 2: %.2f\n", super_poder2);

    // ===== Comparação das cartas usando apenas booleanos =====
    int resultado_populacao = populacao1 > populacao2;
    int resultado_area = area1 > area2;
    int resultado_pib = pib1 > pib2;
    int resultado_pontos_turisticos = numero_pontos_turisticos1 > numero_pontos_turisticos2;
    int resultado_den_populacional = densidade_populacional1 > densidade_populacional2;
    int resultado_pib_percapita = per_capita1 > per_capita2;
    int resultado_super_poder = super_poder1 > super_poder2;

    printf("População: Carta 1 venceu? %d\n", resultado_populacao);
    printf("Área: Carta 1 venceu? %d\n", resultado_area);
    printf("PIB: Carta 1 venceu? %d\n", resultado_pib);
    printf("Pontos turísticos: Carta 1 venceu? %d\n", resultado_pontos_turisticos);
    printf("Densidade populacional: Carta 1 venceu? %d\n", resultado_den_populacional);
    printf("PIB per capita: Carta 1 venceu? %d\n", resultado_pib_percapita);
    printf("Super Poder: Carta 1 venceu? %d\n", resultado_super_poder);

    return 0;
}
