#include <stdio.h>
#include <string.h>

struct Carta {
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;
};

void cleanBuffer() {
    char ch;
    while ((ch = getchar()) != EOF && ch != '\n'); 
}

int main()
{
    struct Carta carta1, carta2;

    printf("\n");
    printf("███████╗██╗   ██╗██████╗ ███████╗██████╗     ████████╗██████╗ ██╗   ██╗███╗   ██╗███████╗ ██████╗ \n");
    printf("██╔════╝██║   ██║██╔══██╗██╔════╝██╔══██╗    ╚══██╔══╝██╔══██╗██║   ██║████╗  ██║██╔════╝██╔═══██╗\n");
    printf("███████╗██║   ██║██████╔╝█████╗  ██████╔╝       ██║   ██████╔╝██║   ██║██╔██╗ ██║█████╗  ██║   ██║\n");
    printf("╚════██║██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗       ██║   ██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ██║   ██║\n");
    printf("███████║╚██████╔╝██║     ███████╗██║  ██║       ██║   ██║  ██║╚██████╔╝██║ ╚████║██║     ╚██████╔╝\n");
    printf("╚══════╝ ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝       ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝      ╚═════╝ \n");
    printf("\n");

    printf("=============================================\n                  1a CARTA\n=============================================\n");

    printf("Estado: ");
    scanf("%[ABCDEFGH]", &carta1.codigo[0]);
    cleanBuffer();

    carta1.codigo[1] = '0';
    printf("Codigo da Carta: %c%c", carta1.codigo[0], carta1.codigo[1]);
    scanf("%[1234]", &carta1.codigo[2]);
    cleanBuffer();

    printf("Cidade: ");
    scanf("%[^\n]", &carta1.cidade);
    cleanBuffer();

    printf("Qtd. Habitantes: ");
    scanf("%d", &carta1.populacao);
    cleanBuffer();

    printf("Área territorial: ");
    scanf("%f", &carta1.area);
    cleanBuffer();

    printf("PIB: ");
    scanf("%f", &carta1.pib);
    cleanBuffer();

    printf("=============================================\n                  2a CARTA\n=============================================\n");

    printf("Estado: ");
    scanf("%[ABCDEFGH]", &carta2.codigo[0]);
    cleanBuffer();

    carta2.codigo[1] = '0';
    printf("Codigo da Carta: %c%c", carta2.codigo[0], carta2.codigo[1]);
    scanf("%[1234]", &carta2.codigo[2]);
    cleanBuffer();

    printf("Cidade: ");
    scanf("%[^\n]", &carta2.cidade);
    cleanBuffer();

    printf("Qtd. Habitantes: ");
    scanf("%d", &carta2.populacao);
    cleanBuffer();

    printf("Área territorial: ");
    scanf("%f", &carta2.area);
    cleanBuffer();

    printf("PIB: ");
    scanf("%f", &carta2.pib);
    cleanBuffer();

    printf("CARTA Nº 1");
    printf("Estado: %c", carta1.codigo[0]);
    printf("Código da Carta: %s", carta1.codigo);
    printf("Cidade: %s", carta1.cidade);
    printf("População: %d habitantes", carta1.populacao);
    printf("Área territorial: %f Km²", carta1.area);
    printf("PIB: %f bilhões de reais", carta1.pib);
    printf("Quantidade de pontos turísticos :d", carta1.qtdPontosTuristicos);

    printf("CARTA Nº 2");
    printf("Estado: %c", carta2.codigo[0]);
    printf("Código da Carta: %s", carta2.codigo);
    printf("Cidade: %s", carta2.cidade);
    printf("População: %d habitantes", carta2.populacao);
    printf("Área territorial: %f Km²", carta2.area);
    printf("PIB: %f bilhões de reais", carta2.pib);
    printf("Quantidade de pontos turísticos :d", carta2.qtdPontosTuristicos);

}
