#include <stdio.h>
#include <stdlib.h>
#include "Huff.h"

int maiorvalor(int a, int b){
  	int valor;
	if(a>b)
  	 valor=a;
  	else
  	valor= b;
return valor;
  }
  int EscreverDados(int a, int b, int c){
 	return a+b+c;
 } 
  int MediaPorSet(int a, int b){
 	return a/b;
 }
  void ordenaDecrescente(int *vetor2,int numdejogador){
	int x, y, aux1=0,i;
	 	for(x=0; x<numdejogador; x++){
 			for( y=x; y<3; y++){
 				if(vetor2[x] < vetor2[y]){    
					aux1 = vetor2[x];
 					vetor2[x] = vetor2[y];
 					vetor2[y]= aux1;		
			 	}
			}		
		}
		for(x=0; x<numdejogador; x++){
 			printf("\n\nnumero %d eh: %d \n", x, vetor2[x]);
}
}
  void mostrardados(int *vetor, int *vetor2,int numdejogador){
	int i;
 		for(i=0; i<numdejogador; i++){
	 		 printf(" o jogador %d fez %d pontos e sua media por set foi %i\n",i,vetor[i],vetor2[i]); 
   		} 	
}

