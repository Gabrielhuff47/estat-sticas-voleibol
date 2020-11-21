#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"
#define MAXSCORE 5 

int main (){
 	int i,condi,y,c,x,erros,cont,a,b,set,aux=0,numdejogador;
	int vetor[10],vetor2[10], vetor3[10];
  		printf("Digite o Numero de jogadores:");
    	scanf("%d",&numdejogador);
	  		for( i=0;i<numdejogador;i++){ 
				printf("Digite os dados do jogador : pontos de ataque/saque/ bloqueios:"); 
				scanf("%d%d%d",&a,&b,&c);
 				printf("Digite o numero de Set:"); 
 				scanf("%d",&set); 
 	 			vetor[i]=EscreverDados(a,b,c);
  	  			vetor2[i]=MediaPorSet(EscreverDados(a,b,c),set);	  	 
			}
mostrardados(vetor,vetor2,numdejogador);
ordenaDecrescente(vetor2,numdejogador);
}

