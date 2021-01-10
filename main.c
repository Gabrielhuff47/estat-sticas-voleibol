#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAXSCORE 5
#include "Huff.h"
main (){
    Jogadores Jogador[6];
 	int i,set=5;
 	int soma[6];
 	float media[6];
	char *jogador;
	int numdejogadores=6;
	int tam;
do{
  	printf("Digite o nome do %d jogador:",i+1);
  	scanf("%s",&Jogador[i].nome);
  	fflush(stdin);
  	printf("\tscore\n");
    printf("Ataque:");
    scanf("%d",&Jogador[i].ataque);
    printf("Bloqueio:");
    scanf("%d",&Jogador[i].bloqueio);
    printf("Saque:");
    scanf("%d",&Jogador[i].saque);
    soma[i]=SomadeDados(Jogador[i].ataque,Jogador[i].saque,Jogador[i].bloqueio);
	media[i]=MediaPorSet(Jogador[i].ataque,Jogador[i].saque,Jogador[i].bloqueio,set);
	i++;
	}while(i<6);
	tam= valorstring(Jogador,i);
	jogador = (char*) malloc(tam*sizeof(char*));
	MostrarDadosGeral(Jogador,i,media,soma);
    printf("\nQual jogador voce quer analisar?");
	scanf("%s",jogador);
		MostrarDadosJogadorEspecifico(jogador,i,Jogador,media);
	free(jogador);
}
