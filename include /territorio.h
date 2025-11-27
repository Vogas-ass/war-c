#ifndef TERRITORIO_H
#define TERRITORIO_H

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

Territorio* criarTerritorios(int n);
void cadastrarTerritorios(Territorio* mapa, int n);
void exibirTerritorios(Territorio* mapa, int n);

#endif
