/*1.
Implemente uma Árvore Estritamente Binária utilizando alocação
estática.
*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define MAX 100
using namespace std;

int main()
{
	int noRaiz;
	int qteNos;

	
	cout<<"Informe a quantidade de nois:";
	cin>>qteNos;
	cout<<"Informe o valor do no Raiz:";
	cin>>noRaiz;
	
	int arvore[qteNos];
	for(int i = 0; i < qteNos;i++)
	{
		if(i == 0)
		{
			arvore[i] = noRaiz;	
		}
		else if( i == 1)
		{
			cout<<"Informe o no Esquerda na posicao "<<i<<":";
			cin>>arvore[i];	
		}
		else if(i == 2)
		{
			cout<<"Informe o no Direta na posicao "<<i<<":";
			cin>>arvore[i];		
		}
		
	}
	for( int i = 0; i < qteNos ;i++)
	{
		cout<<"Indice: "<<i<<"Elemento:"<<arvore[i]<<endl;
	}	

	
}

