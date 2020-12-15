#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAXSCORE 5 
#include "Huff.h"
main (){
	int ataque[6]={1,2,3,4,5,6}, bloqueio[6]={1,2,3,4,5,6},saque[6]={1,2,3,4,5,6};
 	int i,set=5;
 	int soma[6];
 	float media[6];
 	int somadedados=0;
	float vetor2[10];
	int jogador,n;
	int vet[6],vet2[6], vet1[6];
	char nome[6][100];
do{
  	printf("Digite o nome do %d jogador:",i+1);
  	scanf("%s",nome[i]); 
  	fflush(stdin);
	soma[i]=SomadeDados(ataque[i],saque[i],bloqueio[i]); 
	media[i]=MediaPorSet(ataque[i],saque[i],bloqueio[i],set);   
	i++;  
	vet[i]=ataque[i];
	vet1[i]=bloqueio[i];
	vet2[i]=saque[i];
	}while(i<6);
	//ordenaDecrescente(soma,media,6);      
	MostrarDadosGeral(soma,media,6);
	printf("\nQual jogador voce quer analisar?");
	scanf("%d",&jogador);
	printf("O jogador %s",nome[jogador-1]);
	MostrarDadosJogadorEspecifico(vet,vet1,vet2, jogador, media);
		
}
