#include <string.h>
#include "../include/missoes.h"

int verificarMissao(Territorio* mapa, int n, const char* cor) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        if(strcmp(mapa[i].cor, cor) == 0)
            total++;
    }
    return total >= n / 2;
}
