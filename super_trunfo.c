#include <stdio.h>

struct Carta {
    char estado;
    char codigo[3];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;
    float densidade;
    float perCapita;
    float superPoder;
};

Carta carta[2];

printf("\n");
printf("███████╗██╗   ██╗██████╗ ███████╗██████╗     ████████╗██████╗ ██╗   ██╗███╗   ██╗███████╗ ██████╗                ██████╗██╗██████╗  █████╗ ██████╗ ███████╗███████╗");
printf("██╔════╝██║   ██║██╔══██╗██╔════╝██╔══██╗    ╚══██╔══╝██╔══██╗██║   ██║████╗  ██║██╔════╝██╔═══██╗              ██╔════╝██║██╔══██╗██╔══██╗██╔══██╗██╔════╝██╔════╝");
printf("███████╗██║   ██║██████╔╝█████╗  ██████╔╝       ██║   ██████╔╝██║   ██║██╔██╗ ██║█████╗  ██║   ██║    █████╗    ██║     ██║██║  ██║███████║██║  ██║█████╗  ███████╗");
printf("╚════██║██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗       ██║   ██╔══██╗██║   ██║██║╚██╗██║██╔══╝  ██║   ██║    ╚════╝    ██║     ██║██║  ██║██╔══██║██║  ██║██╔══╝  ╚════██║");
printf("███████║╚██████╔╝██║     ███████╗██║  ██║       ██║   ██║  ██║╚██████╔╝██║ ╚████║██║     ╚██████╔╝              ╚██████╗██║██████╔╝██║  ██║██████╔╝███████╗███████║");
printf("╚══════╝ ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝       ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚═╝      ╚═════╝                ╚═════╝╚═╝╚═════╝ ╚═╝  ╚═╝╚═════╝ ╚══════╝╚══════╝");
printf("\n");

for (int i = 0; i < 1; i++) {
    printf("=============================================\n                  %da CARTA\n=============================================\n", i);

    printf("Estado: ");
    scanf("%1[A-H]", carta[i].estado);

    printf("Codigo da Carta: ");
    scanf("%3[A-H0-9]", carta[i].codigo;

    printf("Cidade: ");
    scanf("%50[^\n]", carta[i].cidade;

    printf("Qtd. Habitantes: ");
    scanf("%d", &carta[i].populacao);

    printf("Área territorial: ");
    scanf("%f", &carta[i].area);
    
    printf("PIB: ");
    scanf("%f", carta[i].pib);
}

