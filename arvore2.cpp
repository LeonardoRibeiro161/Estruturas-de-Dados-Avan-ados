/*
Implemente uma Árvore Estritamente Binária utilizando alocação
estática c/as seguintes informações:
1.
Altura da Árvore Estritamente Binária
2.
O Grau de cada Nó
3.
O Nível de cada Nó
4.
Em qual SubÁrvore o elemento está alocado
5.
Impressão da Árvore no formato de arranjo
6.
Impressão da Árvore no formato de grafo.

*/

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define MAX 15
using namespace std;


typedef struct no
{
	int valor;
	int nivel;
	int pai;
	int posicao;
	int grau;
}No;


int main()
{
	int qteNo;
	int i = 0 , posicao = 0;
	int filho = 0;
	int no_filho;
	int altura;
	int pai;
	cout<<"Informe a quantidade de nos da arvore:";
	cin>>qteNo;
	No arvore[qteNo];
	//Definindo o No raiz
	
	cout<<"Informe o no Raiz:";
	cin>>arvore[0].valor;
	arvore[0].nivel = 0;
	arvore[0].pai = NULL;
	
	for(i = 0 ; i < qteNo;i++)
	{
		
		cout<<"Posicao esquerda ou direta: [1] - Direta [2]- Esquerda:";
		cin>>posicao;
		if(posicao == 1)
		{
			filho = (2 * i)+ 1;
			cout<<"Informe o valor do no:";
			cin>>arvore[filho].valor;
			//pai = (i -1) / 2;
			arvore[filho].pai = arvore[i - 1].valor ; //Define quem e seu pai
			arvore[filho].posicao = filho; //Define qual vai ser sua posicao
			arvore[filho].nivel = i; //Define seu nivel
			cout<<"O no "<<arvore[filho].valor<<" esta na posicao "<<filho<<endl;
		}
		else if(posicao == 2)
		{
			filho = (2 * i);
			pai = (i -1) / 2;
			cout<<"Informe o valor do no:";
			cin>>arvore[filho].valor;
			arvore[filho].pai = arvore[i - 2].valor ;
			arvore[filho].posicao = filho;
			arvore[filho].nivel = i;
			cout<<"O no "<<arvore[filho].valor<<" esta na posicao "<<filho<<endl;
		}
		else
		{
			cout<<"Opcao invalida "<<endl;
			exit(1);
		}
		
		
	}
	
	for( int i = 0; i <= MAX  ;i++)
	{

		cout<<"Indice: "<<i<<"   Elemento: "<<arvore[i].valor <<"  Pai:"<<arvore[i].pai<<" Nivel: "<<arvore[i].nivel<<endl ;
		cout<<"----------------------------------------------------------------------------------------------------"<<endl;
	}
	return 0;
}
