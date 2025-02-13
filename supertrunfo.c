#include <stdio.h>
#include <string.h>

struct Cidade {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos; // Variável declarada com "s" no final
};

int main() {
    struct Cidade cidades[8][4];

    for (char estado = 'A'; estado <= 'H'; estado++) {
        for (int cidade = 1; cidade <= 4; cidade++) {
            sprintf(cidades[estado - 'A'][cidade - 1].codigo, "%c%02d", estado, cidade);

            printf("Digite os dados da cidade %s:\n", cidades[estado - 'A'][cidade - 1].codigo);

            printf("Nome: ");
            scanf(" %[^\n]s", cidades[estado - 'A'][cidade - 1].nome);

            printf("População: ");
            scanf("%d", &cidades[estado - 'A'][cidade - 1].populacao);

            printf("Área: ");
            scanf("%f", &cidades[estado - 'A'][cidade - 1].area);

            printf("PIB: ");
            scanf("%f", &cidades[estado - 'A'][cidade - 1].pib);

            printf("Número de Pontos Turísticos: ");
            scanf("%d", &cidades[estado - 'A'][cidade - 1].pontos_turisticos);

            printf("\n");
        }
    }

    printf("\nDados das Cidades Cadastradas:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Código: %s\n", cidades[i][j].codigo);
            printf("Nome: %s\n", cidades[i][j].nome);
            printf("População: %d\n", cidades[i][j].populacao);
            printf("Área: %.2f km²\n", cidades[i][j].area);
            printf("PIB: %.2f milhões de dólares\n", cidades[i][j].pib);
            printf("Pontos Turísticos: %d\n", cidades[i][j].pontos_turisticos); // Variável usada corretamente
            printf("\n");
        }
    }

    return 0;
}