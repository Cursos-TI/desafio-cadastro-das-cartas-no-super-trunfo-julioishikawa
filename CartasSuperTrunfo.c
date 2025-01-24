#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

int main() {
    // Arrays para armazenar os dados de todas as cidades
    float populacoes[NUM_ESTADOS][NUM_CIDADES];
    float areas[NUM_ESTADOS][NUM_CIDADES];
    float pibs[NUM_ESTADOS][NUM_CIDADES];
    int pontosTuristicos[NUM_ESTADOS][NUM_CIDADES];

    char estados[] = "ABCDEFGH"; // Identificadores dos estados

    printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo - Tema: Países\n");
    printf("Você cadastrará as cidades para cada estado.\n\n");

    // Loop para cadastrar os dados
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            // Gerar o código (letra do estado + número da cidade) [Esse 'for' gera o código automaticamente]
            char codigo[5];
            sprintf(codigo, "%c%02d", estados[i], j + 1); // Exemplo: A01, B02, etc.

            printf("Estado %c, Cidade %d (Código %s):\n", estados[i], j + 1, codigo);

            // Solicitar os dados da cidade
            printf("  População: ");
            scanf("%f", &populacoes[i][j]);

            printf("  Área (em km²): ");
            scanf("%f", &areas[i][j]);

            printf("  PIB (em milhões): ");
            scanf("%f", &pibs[i][j]);

            printf("  Número de pontos turísticos: ");
            scanf("%d", &pontosTuristicos[i][j]);

            printf("Cidade %s cadastrada com sucesso!\n\n", codigo);
        }
    }

    // Exibição dos dados cadastrados
    printf("\nCartas cadastradas:\n");
    printf("=========================\n");

    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            // Gerar o código novamente para exibir
            char codigo[5];
            sprintf(codigo, "%c%02d", estados[i], j + 1); // Exemplo: A01, B02, etc.

            printf("Código: %s\n", codigo);
            printf("População: %.3f habitantes\n", populacoes[i][j]);
            printf("Área: %.3f km²\n", areas[i][j]);
            printf("PIB: %.2f milhões\n", pibs[i][j]);
            printf("Pontos turísticos: %d\n", pontosTuristicos[i][j]);
            printf("-------------------------\n");
        }
    }

    printf("Fim do programa.\n");
    return 0;
}
