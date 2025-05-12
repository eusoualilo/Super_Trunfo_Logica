#include <stdio.h>
#include <string.h>

int main() {

	unsigned long int populacao1, populacao2;
	int pontos_turisticos1, pontos_turisticos2, opcao;	
	char estado1[2], cidade1[20], codigo_carta1[3], estado2[2], cidade2[20], codigo_carta2[3];
	float area1, pib1, densidade_populacional1, pib_per_capita1, area2, pib2, densidade_populacional2, pib_per_capita2;

	//Carta 01:

	printf("Vamos jogar trunfo! Preencha os dados da primeira carta.");
	
	printf("\n\n Insira a letra que vai representar o estado, de 'A' a 'H': ");
	scanf("%1s", estado1);
	
	printf(" Insira o código da sua carta, de 01 a 04: ");
	scanf("%2s", codigo_carta1);

	printf(" Insira o nome da sua cidade: ");
	scanf("%s", cidade1); 
	
	printf(" Insira o número de habitantes da sua cidade: ");
	scanf("%lu", &populacao1);

	printf(" Insira a área da cidade, em quilometros quadrados: ");
	scanf("%f", &area1);
	
	printf(" Insira o PIB da sua cidade: ");
	scanf("%f", &pib1);
	
	printf(" Insira a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontos_turisticos1);

    //Calculando densidade populacional da Carta 01:
    densidade_populacional1 = populacao1 / area1;

    //Calculando o PIB Per Capita da Carta 01:
    pib_per_capita1 = pib1 / populacao1;

	//Carta 02:
	
	printf("\nObrigada pelas informações! Agora vamos preencher os dados da segunda carta.");
		
	printf("\n\n Insira a letra que vai representar o outro estado, de 'A' a 'H': ");
	scanf("%1s", estado2);
	
	printf(" Insira o código da sua carta, de 01 a 04: ");
	scanf("%2s", codigo_carta2);

	printf(" Insira o nome da sua cidade: ");
	scanf("%s", cidade2);
	
	printf(" Insira o número de habitantes da sua cidade: ");
	scanf("%lu", &populacao2);
	
	printf(" Insira a área da cidade, em quilometros quadrados: ");
	scanf("%f", &area2);
	
	printf(" Insira o PIB da sua cidade: ");
	scanf("%f", &pib2);
	
	printf(" Insira a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontos_turisticos2);

    //Calculando densidade populacional da Carta 02:
    densidade_populacional2 = populacao2 / area2;

    //Calculando o PIB Per Capita da Carta 02:
    pib_per_capita2 = pib2 / populacao2;

	//Comparando as cartas e exibindo os resultados usando switch e estruturas de decisão aninhadas.

    printf("\nObrigada novamente pelas informações jogador! Agora vamos fazer as comparações entre as cartas conforme o menu abaixo:");

	printf("\n\n** Menu de Comparação das Cartas **");
    
    printf("\n1. Nome da cidade"); //Usado apenas para exibir informações, não para comparação direta.
    printf("\n2. População");
    printf("\n3. Área");
    printf("\n4. PIB");
    printf("\n5. Qtde de pontos turísticos");
    printf("\n6. Densidade demográfica");
    printf("\n7. PIB per capita");

    printf("\n\nEscolha uma opção à ser comparada conforme opções acima: ");

    scanf("%d", &opcao);

    switch (opcao) {
        
        case 1:
            printf("\n# Nome do Cidade #");
            printf("\nCidade da Carta 01: %s.", cidade1);
            printf("\nCidade da Carta 02: %s.", cidade2);
        break;

        case 2:
            if (populacao1>populacao2) {
                    printf("\n# Comparando a População #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nHabitantes de %s: %lu habitantes.", cidade1, populacao1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nHabitantes de %s: %lu habitantes.", cidade2, populacao2);
                    printf("\n\nResultado: Carta 01 é a vencedora!");
            } else if (populacao1<populacao2) {
                    printf("\n# Comparando a População #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nHabitantes de %s: %lu habitantes.", cidade1, populacao1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nHabitantes de %s: %lu habitantes.", cidade2, populacao2);
                    printf("\n\nResultado: Carta 02 é a vencedora!");
            } else {
                    printf("\n# Comparando a População #");
                    printf("\nOps, houve um empate!");
            }
        break;

        case 3:
            if (area1>area2) {
                    printf("\n# Comparando a Área #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nÁrea de %s: %.2f m².", cidade1, area1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nÁrea de %s: %.2f m².", cidade2, area2);
                    printf("\n\nResultado: Carta 01 é a vencedora!");
            } else if (area1<area2) {
                    printf("\n# Comparando a Área #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nÁrea de %s: %.2f m².", cidade1, area1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nÁrea de %s: %.2f m².", cidade2, area2);
                    printf("\n\nResultado: Carta 02 é a vencedora!");
            } else {
                    printf("\n# Comparando a Área #");
                    printf("\nOps, houve um empate!");
            }
        break;

        case 4:
            if (pib1>pib2) {
                    printf("\n# Comparando o PIB #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nPIB de %s: R$ %.2f.", cidade1, pib1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nPIB de %s: R$ %.2f.", cidade2, pib2);
                    printf("\n\nResultado: Carta 01 é a vencedora!");
            } else if (pib1<pib2) {
                    printf("\n# Comparando o PIB #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nPIB de %s: R$ %.2f.", cidade1, pib1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nPIB de %s: R$ %.2f.", cidade2, pib2);
                    printf("\n\nResultado: Carta 02 é a vencedora!");
            } else {
                    printf("\n# Comparando o PIB #");
                    printf("\nOps, houve um empate!");
            }
        break;

        case 5:
            if (pontos_turisticos1>pontos_turisticos2) {
                    printf("\n# Comparando os Pontos Turísticos #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nPontos Turísticos de %s: %d.", cidade1, pontos_turisticos1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nPontos Turísticos de %s: %d.", cidade2, pontos_turisticos2);
                    printf("\n\nResultado: Carta 01 é a vencedora!");                
            } else if (pontos_turisticos1<pontos_turisticos2) {
                    printf("\n# Comparando os Pontos Turísticos #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nPontos Turísticos de %s: %d.", cidade1, pontos_turisticos1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nPontos Turísticos de %s: %d.", cidade2, pontos_turisticos2);
                    printf("\n\nResultado: Carta 02 é a vencedora!");
            } else {
                    printf("\n# Comparando os Pontos Turísticos #");
                    printf("\nOps, houve um empate!");
            }
        break;

        case 6:
            if (densidade_populacional1>densidade_populacional2) {
                    printf("\n# Comparando a Densidade Populacional #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nDensidade Populacional de %s: %.2f hab/km².", cidade1, densidade_populacional1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nDensidade Populacional de %s: %.2f hab/km².", cidade2, densidade_populacional2);
                    printf("\n\nResultado: Carta 02 é a vencedora!");
            } else if (densidade_populacional1<densidade_populacional2) {
                    printf("\n# Comparando a Densidade Populacional #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nDensidade Populacional de %s: %.2f hab/km².", cidade1, densidade_populacional1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nDensidade Populacional de %s: %.2f hab/km².", cidade2, densidade_populacional2);
                    printf("\n\nResultado: Carta 01 é a vencedora!");
            } else {
                    printf("\n# Comparando a Densidade Populacional #");
                    printf("\nOps, houve um empate!");
            }
        break;

        case 7:
            if (pib_per_capita1>pib_per_capita2) {
                    printf("\n# Comparando o PIB Per Capita #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nPIB per capita de %s: R$ %.2f.", cidade1, pib_per_capita1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nPIB per capita de %s: R$ %.2f.", cidade2, pib_per_capita2);
                    printf("\n\nResultado: Carta 01 é a vencedora!");
            } else if (pib_per_capita1<pib_per_capita2) {
                    printf("\n# Comparando o PIB Per Capita #");
                    printf("\n\nCidade da Carta 01: %s.", cidade1);
                    printf("\nPIB per capita de %s: R$ %.2f.", cidade1, pib_per_capita1);
                    printf("\n\nCidade da Carta 02: %s.", cidade2);
                    printf("\nPIB per capita de %s: R$ %.2f.", cidade2, pib_per_capita2);
                    printf("\n\nResultado: Carta 02 é a vencedora!");
            } else {
                    printf("\n# Comparando o PIB Per Capita #");    
                    printf("\nOps, houve um empate!");
            }
        break;

        default:
            printf("\nOpção inválida! Reinicie o jogo.");
    }

    printf("\n\n## Tchau jogador! Até o próximo game! ##\n\n");

    return 0;
}
