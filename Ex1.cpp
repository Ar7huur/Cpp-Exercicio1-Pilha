#include<stdio.h>
#include"TADPilha.h"

int main (void){
	
	TpPilha pilha1,pilha2,pilha3;
	int i,elem;
	inicializa(pilha1);
	for(i=0;i<MAXP/2;i++)
	{
		printf("\nNumero para pilha UM:	");
		scanf("%d",&elem);
		insere(pilha1,elem);
	}
	inicializa(pilha2);
	for(i=0;i<MAXP/2;i++)
	{
		printf("\nNumero para pilha DOIS:	");
		scanf("%d",&elem);
		insere(pilha2,elem);
	}
	inicializa(pilha3);
	while(!vazia(pilha2.topo))
		insere(pilha3,retira(pilha2));
	while(!vazia(pilha3.topo))
		insere(pilha1,retira(pilha3));
	
	exibe(pilha1);		
	
	
	
	return 0;
}
