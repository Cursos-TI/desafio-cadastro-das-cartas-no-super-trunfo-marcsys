/**
 * DESAFIO SUPER TRUNFO - PAÍSES
 * NÍVEL 1 - NOVATO
 *
 * Apenas lê dados de 2 cartas e os exibe de volta
 */

#include <stdio.h>
#include <string.h>

/*
DESABILITADO POR ENQUANTO O USO DE STRUCT PARA ORGANIZAR AS INFORMAÇÕES
struct Carta {
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;
};
*/

/**
 * Função para retirar quaisquer caracteres que ainda estejam no buffer
 * de entrada de caracteres do taclado
 */
void cleanBuffer() {
    char ch;
    while ((ch = getchar()) != EOF && ch != '\n'); 
}

int main()
{
//    struct Carta carta1, carta2;
    char codigo1[3], codigo2[3];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int qtdPontosTuristicos1, qtdPontosTuristicos2;

    printf("\n");
    printf("███████╗██╗   ██╗██████╗ ███████╗██████╗     ████████╗██████╗ ██╗   ██╗███╗   ██╗███████╗ ██████╗ \n");
    printf("██╔════╝██║   ██║██╔══██╗██╔════╝██╔══██╗    ╚══██╔══╝██╔══██╗██║   ██║████╗  ██║██╔════╝██╔═══██╗\n");
    printf("███████╗██║   ██║██████╔╝█████╗  ██████╔╝       ██║   ██████╔╝██║   ██║██╔██╗ ██║█████╗  ██║   ██║\n");
    printf("╚════██║██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗       ██║   ██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ██║   ██║\n");
    printf("███████║╚██████╔╝██║     ███████╗██║  ██║       ██║   ██║  ██║╚██████╔╝██║ ╚████║██║     ╚██████╔╝\n");
    printf("╚══════╝ ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝       ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝      ╚═════╝ \n");
    printf("\n");

    /**
     * Entrada de dados manual para todos os dados.
     */

    printf("CARTA Nº 1\n");
    printf("Estado: ");
    scanf("%[ABCDEFGH]", &codigo1[0]); // Apenas as letras especificadas serão aceitas
    cleanBuffer();

    codigo1[1] = '0';
    printf("Codigo da Carta: %c%c", codigo1[0], codigo1[1]);
    scanf("%[1234]", &codigo1[2]); // Apenas os dígitos especificados serão aceitos
    cleanBuffer();

    printf("Cidade: ");
    scanf("%[^\n]", cidade1); // Todos os caracteres serão aceitos exceto quebra de linha
    cleanBuffer();

    printf("Qtd. Habitantes: ");
    scanf("%d", &populacao1); // Apenas dígitos numéricos são aceitos
    cleanBuffer();

    printf("Área territorial: ");
    scanf("%f", &area1); // Apenas dígitos e separador decimal inglês, o ponto
    cleanBuffer();

    printf("PIB: ");
    scanf("%f", &pib1);
    cleanBuffer();

  	printf("Qtd Pontos Turísticos: ");
    scanf("%d", &qtdPontosTuristicos1);
    cleanBuffer();

    printf("\nCARTA Nº 2\n");

    printf("Estado: ");
    scanf("%[ABCDEFGH]", &codigo2[0]);
    cleanBuffer();

    codigo2[1] = '0';
    printf("Codigo da Carta: %c%c", codigo2[0], codigo2[1]);
    scanf("%[1234]", &codigo2[2]);
    cleanBuffer();

    printf("Cidade: ");
    scanf("%[^\n]", cidade2);
    cleanBuffer();

    printf("Qtd. Habitantes: ");
    scanf("%d", &populacao2);
    cleanBuffer();

    printf("Área territorial: ");
    scanf("%f", &area2);
    cleanBuffer();

    printf("PIB: ");
    scanf("%f", &pib2);
    cleanBuffer();

    printf("Qtd Pontos Turísticos: ");
    scanf("%d", &qtdPontosTuristicos2);
    cleanBuffer();

    /**
     *  Exibição dos dados infromados.
     */

    printf("=============================================\n                  1a CARTA\n=============================================\n");
    printf("Estado: %c\n", codigo1[0]);
    printf("Código da Carta: %3s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área territorial: %f Km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Quantidade de pontos turísticos :%d\n", qtdPontosTuristicos1);

    printf("=============================================\n                  2a CARTA\n=============================================\n");
    printf("Estado: %c\n", codigo2[0]);
    printf("Código da Carta: %3s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área territorial: %f Km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos :%d\n", qtdPontosTuristicos2);

}
