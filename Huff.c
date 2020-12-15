#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Huff.h"
#define MAXSCORE 5 
 
int maiorvalor(int a, int b){
  	int valor;
		if(a>b)
  	 		valor=a;
  		else
  		valor= b;
return valor;
}
  
int SomadeDados(int ataque, int saque, int bloqueio){
	int pontuacaototal;	
		pontuacaototal=ataque+saque+bloqueio; 	
return pontuacaototal;
} 
float MediaPorSet(int ataque, int saque, int bloqueio, int set){
    float media;
    float pontuacaototal;
    pontuacaototal=ataque+saque+bloqueio;
    media=(pontuacaototal/set);
return media;    
}
     
void ordenaDecrescente(int vetor[],float vetor2[],int n){
	int x, y, i;
	float aux1=0;
	 	for(x=0; x<6; x++){
 			for( y=x; y<6; y++){
 				if(vetor2[x] < vetor2[y]){    
					aux1 = vetor2[x];
 					vetor2[x] = vetor2[y];
 					vetor2[y]= aux1;		
			 	}
			}		
		}
		for(x=0; x<6; x++){
 			printf(" \npontuou o total de %d e sua media por set foi %.1f\n",vetor[n-1],vetor2[n-1]);
		}
}
 

	
 
void MostrarDadosJogadorEspecifico(int ataque[],int bloqueio[], int saque[],int n, float vetor2[]){
	printf(" pontuou %d de ataque, %d de bloqueio e %d de saque e sua media por set foi %.1f",ataque[n-1],bloqueio[n-1], saque[n-1], vetor2[n-1]);
}

void MostrarDadosGeral(int vetor[],float vetor2[],int n){
	
		if(n>=1){
			MostrarDadosGeral(vetor,vetor2,n-1);
		printf("\nO jogador %d pontuou o total de %d e sua media por set foi %.1f",n,vetor[n-1],vetor2[n-1]);
	}
}
