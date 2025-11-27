#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "../include/ataque.h"

void atacar(Territorio* atacante, Territorio* defensor) {
    if(atacante->tropas < 1) {
        printf("\nO atacante não possui tropas suficientes!\n");
        return;
    }

    if(strcmp(atacante->cor, defensor->cor) == 0) {
        printf("\nVocê não pode atacar um território da mesma cor!\n");
        return;
    }

    int dadoAtacante = (rand() % 6) + 1;
    int dadoDefensor = (rand() % 6) + 1;

    printf("\nDado do atacante: %d\n", dadoAtacante);
    printf("Dado do defensor: %d\n", dadoDefensor);

    if(dadoAtacante > dadoDefensor) {
        printf("\nO atacante venceu! O território foi conquistado!\n");
        strcpy(defensor->cor, atacante->cor);
        defensor->tropas = atacante->tropas / 2;
    } else {
        printf("\nO defensor resistiu ao ataque!\n");
        atacante->tropas -= 1;
    }
}
