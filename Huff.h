#ifndef HUFF_H_INCLUDED
#define HUFF_H_INCLUDED

#define MAX 10
typedef struct {char nome[20];int ataque;int bloqueio;int saque;}Jogadores;
int SomadeDados(int ataque, int saque, int bloqueio);
float MediaPorSet(int ataque, int saque, int bloqueio, int set);
void MostrarDadosGeral(Jogadores *Jogador, int n, float *media, int *total);
void MostrarDadosJogadorEspecifico(char *jogador, int cont, Jogadores *Jogador, float *media);
int valorstring(Jogadores *Jogador, int cont);
#endif /* HUFFS_H_INCLUDED */

