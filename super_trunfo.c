/**
 * DESAFIO SUPER TRUNFO - PAÍSES
 * Compara informações de 2 cartas e exibe o resultado.
 */

#include <stdio.h>
#include <string.h>

struct Carta {
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

/**
 * Função para retirar quaisquer caracteres que ainda estejam no buffer
 * de entrada de caracteres do taclado
 */
void cleanBuffer() {
    char ch;
    while ((ch = getchar()) != EOF && ch != '\n'); 
}

/**
 * Calcula densidade operacional.
 * Parâmetros: população e área territoriaal.
 * Retorno: a população dividida pela área territorial
 */
float densidadePopulacional(unsigned int populacao, float area) {
    return populacao / area; 
}

/**
 * Calcula PIB per capita.
 * Parâmetros: PIB em bilhões e população.
 * Retorno: o PIB dividido pela população.
 */
float pibPerCapita(float pib, unsigned int populacao) {
    return pib * 1000000000 / populacao;
}

/**
 * Calcula o super poder.
 * Parâmetros: a carta.
 * Retorno: a soma de população, área terrorial, PIB,
 * quantidade de pontos turísticos, PIB per capita e
 * densidade populacional invertida (1 / densidade populacional).
 */
float superPoder(struct Carta carta) {
    return (float) carta.populacao + carta.area + carta.pib + (float) carta.qtdPontosTuristicos + carta.perCapita + (1.0 / carta.densidade);
}

/**
 * Preenche os dados de uma carta.
 * Parâmetros: número de carta.
 * Retorno: carta preenchida.
 */
struct Carta entradaDados(int numero) {
    
    struct Carta carta;
    char codigo[3];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;
    float densidade;
    float perCapita;
    
    printf("CARTA Nº %d\n", numero);
    
    printf("Estado: ");
    scanf("%[ABCDEFGH]", &codigo[0]); // Apenas as letras especificadas serão aceitas
    cleanBuffer();

    codigo[1] = '0';
    printf("Codigo da Carta: %c%c", codigo[0], codigo[1]);
    scanf("%[1234]", &codigo[2]); // Apenas os dígitos especificados serão aceitos
    cleanBuffer();

    printf("Cidade: ");
    scanf("%[^\n]", cidade); // Todos os caracteres serão aceitos, terminando a leitura na quebra de linha
    cleanBuffer();

    printf("Qtd. Habitantes: ");
    scanf("%lu", &populacao); // Será aceito número natural longo
    cleanBuffer();

    printf("Área territorial: ");
    scanf("%f", &area); // Será aceito número decimal no formato inglês 
    cleanBuffer();

    printf("PIB: ");
    scanf("%f", &pib);
    cleanBuffer();

  	printf("Qtd Pontos Turísticos: ");
    scanf("%d", &qtdPontosTuristicos);
    cleanBuffer();

    strcpy(carta.codigo, codigo);
    strcpy(carta.cidade, cidade);
    carta.populacao = populacao;
    carta.area = area;
    carta.pib = pib;
    carta.qtdPontosTuristicos = qtdPontosTuristicos;
    carta.densidade = densidadePopulacional(populacao, area);
    carta.perCapita = pibPerCapita(pib, populacao);
    carta.superPoder = superPoder(carta);
    
    return carta;
}

/**
 * Exibe linha informando vencedor no atributo.
 * Parâmetros: atributo e resultado da comparação.
 */
void exibeVencedor(char atributo[100], int resultado) {
    printf("%s: Carta %d venceu (%d)\n", atributo, (2 - resultado), resultado);
}

/**
 * Realiza a comparação entre as cartas e exibe resultado.
 * Parâmetros: as cartas.
 */
void exibeResultado(struct Carta carta1, struct Carta carta2) {
    printf("\n=============================\nComparação das cartas:\n==============================\n");
    exibeVencedor("População", carta1.populacao > carta2.populacao);
    exibeVencedor("Área", carta1.area > carta2.area);
    exibeVencedor("PIB", carta1.pib > carta2.pib);
    exibeVencedor("Pontos turísticos", carta1.qtdPontosTuristicos > carta2.qtdPontosTuristicos);
    exibeVencedor("Densidade Populacional", carta1.densidade < carta2.densidade);
    exibeVencedor("PIB per capita", carta1.perCapita > carta2.perCapita);
    exibeVencedor("Super Poder", carta1.superPoder > carta2.superPoder);
}

int main() {
    struct Carta carta1, carta2;

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
    carta1 = entradaDados(1);
    carta2 = entradaDados(2);

    /**
     * Exibição do resultado da comparação.
     */
    exibeResultado(carta1, carta2);
    
    return(0);
}
