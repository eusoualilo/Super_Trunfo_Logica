#include <stdio.h>
#include <string.h>

int main() {

	unsigned long int populacao1, populacao2;
	int pontos_turisticos1, pontos_turisticos2;	
	char estado1[2], cidade1[20], codigo_carta1[3], estado2[2], cidade2[20], codigo_carta2[3];
	float area1, pib1, densidade_populacional1, pib_per_capita1, area2, pib2, densidade_populacional2, pib_per_capita2;
	
	//Carta 01:
	
	printf("Vamos jogar trunfo! Preencha os dados da primeira carta.");
	
	printf("\n\n Insira a letra que vai representar o estado, de 'A' a 'H': ");
	scanf("%1s", estado1);
	
	printf("\n Insira o código da sua carta, de 01 a 04: ");
	scanf("%2s", codigo_carta1);
	
	printf("\n Insira o nome da sua cidade: ");
	scanf("%s", cidade1);
	
	printf("\n Insira o número de habitantes da sua cidade: ");
	scanf("%lu", &populacao1);
	
	printf(" \n Insira a área da cidade, em quilometros quadrados: ");
	scanf("%f", &area1);
	
	printf("\n Insira o PIB da sua cidade: ");
	scanf("%f", &pib1);
	
	printf("\n Insira a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontos_turisticos1);

    //Calculando densidade populacional da Carta 01:
    densidade_populacional1 = populacao1 / area1;

    //Calculando o PIB Per Capita da Carta 01:
    pib_per_capita1 = pib1 / populacao1;

	//Carta 02:
	
	printf("\n\nObrigada pelas informações! Agora vamos preencher os dados da segunda carta.");
		
	printf("\n\n Insira a letra que vai representar o outro estado, de 'A' a 'H': ");
	scanf("%1s", estado2);
	
	printf("\n Insira o código da sua carta, de 01 a 04: ");
	scanf("%2s", codigo_carta2);
	
	printf("\n Insira o nome da sua cidade: ");
	scanf("%s", cidade2);
	
	printf("\n Insira o número de habitantes da sua cidade: ");
	scanf("%lu", &populacao2);
	
	printf("\n Insira a área da cidade, em quilometros quadrados: ");
	scanf("%f", &area2);
	
	printf("\n Insira o PIB da sua cidade: ");
	scanf("%f", &pib2);
	
	printf("\n Insira a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontos_turisticos2);

    //Calculando densidade populacional da Carta 02:
    densidade_populacional2 = populacao2 / area2;

    //Calculando o PIB Per Capita da Carta 02:
    pib_per_capita2 = pib2 / populacao2;

	//Comparando as cartas e exibindo os resultados usando estrutura de decisão if-else.

	printf("\n\n***** COMPARANDO AS CARTAS *****");
    
    if (populacao1>populacao2) {
        printf("\n\n# População #");
        printf("\nCarta 01: %lu habitantes.", populacao1);
        printf("\nCarta 02: %lu habitantes.", populacao2);
        printf("\nResultado: Carta 01 é a vencedora!");
    }else{
        printf("\n\n# População #");
        printf("\nCarta 01: %lu habitantes.", populacao1);
        printf("\nCarta 02: %lu habitantes.", populacao2);
        printf("\nResultado: Carta 02 é a vencedora!");
    }
	
    if (area1>area2) {
        printf("\n\n# Área #");
        printf("\nCarta 01: %.2f m².", area1);
        printf("\nCarta 02: %.2f m².", area2);
        printf("\nResultado: Carta 01 é a vencedora!");
    }else{
        printf("\n\n# Área #");
        printf("\nCarta 01: %.2f m².", area1);
        printf("\nCarta 02: %.2f m².", area2);
        printf("\nResultado: Carta 02 é a vencedora!");
    }

    if (pib1>pib2) {
        printf("\n\n# PIB #");
        printf("\nCarta 01: R$ %.2f", pib1);
        printf("\nCarta 02: R$ %.2f", pib2);
        printf("\nResultado: Carta 01 é a vencedora!");
    }else{
        printf("\n\n# PIB #");
        printf("\nCarta 01: R$ %.2f", pib1);
        printf("\nCarta 02: R$ %.2f", pib2);
        printf("\nResultado: Carta 02 é a vencedora!");
    }

    if (pontos_turisticos1>pontos_turisticos2) {
        printf("\n\n# Pontos Turísticos #");
        printf("\nCarta 01: %d", pontos_turisticos1);
        printf("\nCarta 02: %d", pontos_turisticos2);
        printf("\nResultado: Carta 01 é a vencedora!");
    }else{
        printf("\n\n# Pontos Turísticos #");
        printf("\nCarta 01: %d", pontos_turisticos1);
        printf("\nCarta 02: %d", pontos_turisticos2);
        printf("\nResultado: Carta 02 é a vencedora!");
    }

    if (densidade_populacional1>densidade_populacional2) {
        printf("\n\n# Densidade Populacional #");
        printf("\nCarta 01: %.2f hab/km².", densidade_populacional1);
        printf("\nCarta 02: %.2f hab/km².", densidade_populacional2);
        printf("\nResultado: Carta 02 é a vencedora!");
    }else{
        printf("\n\n# Densidade Populacional #");
        printf("\nCarta 01: %.2f hab/km².", densidade_populacional1);
        printf("\nCarta 02: %.2f hab/km².", densidade_populacional2);
        printf("\nResultado: Carta 01 é a vencedora!");
    }

    if (pib_per_capita1>pib_per_capita2) {
        printf("\n\n# PIB Per Capita#");
        printf("\nCarta 01: R$ %.2f", pib_per_capita1);
        printf("\nCarta 02: R$ %.2f", pib_per_capita2);
        printf("\nResultado: Carta 01 é a vencedora!");
    }else{
        printf("\n\n# PIB Per Capita #");
        printf("\nCarta 01: R$ %.2f", pib_per_capita1);
        printf("\nCarta 02: R$ %.2f", pib_per_capita2);
        printf("\nResultado: Carta 02 é a vencedora!");
    }

    printf("\n\n*** Até o próximo game! ***");

	return 0;
}
