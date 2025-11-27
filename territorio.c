#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/territorio.h"
#include "../include/utils.h"

Territorio* criarTerritorios(int n) {
    return calloc(n, sizeof(Territorio));
}

void cadastrarTerritorios(Territorio* mapa, int n) {
    for(int i = 0; i < n; i++) {
        printf("\n--- Cadastro do Território %d ---\n", i+1);
        printf("Nome: ");
        scanf(" %29[^\n]", mapa[i].nome);
        limparBuffer();

        printf("Cor do exército: ");
        scanf(" %9[^\n]", mapa[i].cor);
        limparBuffer();

        printf("Tropas: ");
        scanf("%d", &mapa[i].tropas);
        limparBuffer();
    }
}

void exibirTerritorios(Territorio* mapa, int n) {
    printf("\n===== TERRITÓRIOS =====\n");
    for(int i = 0; i < n; i++) {
        printf("[%d] %s | Cor: %s | Tropas: %d\n",
            i, mapa[i].nome, mapa[i].cor, mapa[i].tropas);
    }
}
