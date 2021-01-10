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
void MostrarDadosJogadorEspecifico(char *jogador, int cont, Jogadores *Jogador, float *media){
    	int retorno,valor, i;
    	for(i=0;i<cont;i++){
        retorno=strcmp(jogador,Jogador[i].nome);
            if(retorno==0){
                valor=i;
                printf(" Nome:%s",Jogador[i].nome);
                printf(" Ataque:%d",Jogador[i].ataque);
                printf(" Bloqueio:%d",Jogador[i].bloqueio);
                printf(" Saque:%d",Jogador[i].saque);
                printf(" Sua media por set foi: %.1f\n",media[i]);
            }
        }
}
void MostrarDadosGeral(Jogadores *Jogador, int n, float *media, int *total){ 
        FILE *arquivo;
        arquivo = fopen("./arquivos.txt","ab");
        if(arquivo==NULL){
            printf("Erro ao criar Arquivo!\n");
        }
		if(n>=1){
			MostrarDadosGeral(Jogador,n-1,media, total); //Recursão
		printf("\nO jogador %s pontuou o total de %d e sua media por set foi %.1f",Jogador[n-1].nome,total[n-1],media[n-1]);
                fprintf(arquivo,"\nDADOS DO JOGADOR %d, ",n);
                fprintf(arquivo,"Nome:%s",Jogador[n-1].nome);
                fprintf(arquivo,"Ataque:%d",Jogador[n-1].ataque);
                fprintf(arquivo," Bloqueio:%d",Jogador[n-1].bloqueio);
                fprintf(arquivo," Saque:%d",Jogador[n-1].saque);
                fprintf(arquivo," Total de pontos:%d",total[n-1]);
                fprintf(arquivo," Media de pontos por set:%.1f\n",media[n-1]);
	}
	fclose(arquivo);
}

int valorstring(Jogadores *Jogador, int cont){
int *valor;
int aux=0;
int i;
valor = (int*) malloc(cont*sizeof(int*)); //Alocação dinamica

for(i=0;i<cont;i++){
    valor[i]=strlen(Jogador[i].nome); //retorna o valor da string
}
for(i=0;i<cont;i++){
    if(valor[i]>=aux){
        aux= valor[i];    //retorna o maior valor
    }
}
return aux;
}
