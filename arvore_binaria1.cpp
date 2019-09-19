/*1.
Implemente uma Árvore Estritamente Binária utilizando alocação
estática.
*/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define MAX 10
using namespace std;

int main()
{
	int noRaiz;
	int qteNos;
	int nivel = 0;
	int filho;
	int pai;
	int no;
	int posicao;
	int i,j;
	
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
		cout<<"Informe o pai:";
		cin>>pai;
		nivel = 0;
		for(j  = 0; j < qteNos;j++)
		{
			
			if(arvore[j] == pai)
			{	
				cout<<"Posicao esquerda ou direta: [1] - Direta [2]- Esquerda:";
				cin>>posicao;
				if(posicao == 1)
				{
					filho = (2 * j)+ 2;
					arvore[filho] = no;
					cout<<"O no "<<arvore[filho]<<" foi colocado na posicao "<<filho<<endl;
				}
				
				else if( posicao == 2)
				{
					
					filho = (2 * j) + 1;
					arvore[filho] = no;
					cout<<"O no "<<arvore[filho]<<" foi colocado na posicao "<<filho<<endl;
				}
			}
		}	
	}
	cout<<"-------------------------------------------------------"<<endl;
	for( int i = 0; i < MAX ;i++)
	{

		cout<<"Indice: "<<i<<"   Elemento: "<<arvore[i]<<endl;
	}	
	
	
}

