#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/territorio.h"
#include "../include/ataque.h"
#include "../include/missoes.h"
#include "../include/utils.h"

int main() {
    srand(time(NULL));

    int n;
    printf("Quantos territórios deseja cadastrar? ");
    scanf("%d", &n);
    limparBuffer();

    Territorio* mapa = criarTerritorios(n);
    cadastrarTerritorios(mapa, n);
    exibirTerritorios(mapa, n);

    int atk, def;
    printf("\nEscolha o atacante (ID): ");
    scanf("%d", &atk);
    limparBuffer();

    printf("Escolha o defensor (ID): ");
    scanf("%d", &def);
    limparBuffer();

    atacar(&mapa[atk], &mapa[def]);

    printf("\n--- Após o ataque ---\n");
    exibirTerritorios(mapa, n);

    free(mapa);
    return 0;
}
