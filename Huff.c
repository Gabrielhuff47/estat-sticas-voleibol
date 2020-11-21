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
  float MediaPorSet(int a, int b){
 	return a/b;
 }
  void ordenaDecrescente(float *vetor2,int numdejogador){
	int x, y, i;
	float aux1=0;
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
 			printf("\n\nnumero %d eh: %.2f \n", x, vetor2[x]);
}
}
  void mostrardados(int *vetor, float *vetor2,int numdejogador){
	int i;
 		for(i=0; i<numdejogador; i++){
	 		 printf(" o jogador %d fez %d pontos e sua media por set foi %.2f\n",i,vetor[i],vetor2[i]); 
   		} 	
}

