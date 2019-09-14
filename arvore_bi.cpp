/*1.
Implemente uma Árvore Estritamente Binária utilizando alocação
estática.
*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define MAX 20
using namespace std;

int main()
{
	int noRaiz;
	int qteNos;
	int nivel = 0;
	int noEsq;
	int filho;
	int no;
	int posicao;
	int i;
	
	cout<<"Informe a quantidade de nois:";
	cin>>qteNos;
	cout<<"Informe o valor do no Raiz:";
	cin>>noRaiz;
	int arvore[qteNos];
	arvore[0] = noRaiz;
	
	
	//Implementando a arvore
	for(int i = 0; i < qteNos;i++)
	{
		cout<<"Informe um no:";
		cin>>no;
	
		cout<<"Posicao esquerda ou direta: [1] - Direta [2]- Esquerda:";
		cin>>posicao;
		if(posicao == 1)
		{
			filho = (2 * nivel)+ 2;
			arvore[filho] = no;
			cout<<"O no "<<arvore[filho]<<" foi colocado na posicao "<<filho<<endl;
		}
		
		else if( posicao == 2)
		{
			filho = (2 * nivel)+ 1;
			arvore[filho] = no;
			cout<<"O no "<<arvore[filho]<<" foi colocado na posicao "<<filho<<endl;
		}
		nivel = nivel + 1;			
	}
	for( int i = 0; i < sizeof(arvore) ;i++)
	{
		cout<<"Indice: "<<i<<"   Elemento: "<<arvore[i]<<endl;
	}	

	
}

