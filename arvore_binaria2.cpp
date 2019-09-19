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
#define MAX 10
using namespace std;


typedef struct no
{
	int valor;
	int nivel;
	int pai;
	int grau;
}No;

int main()
{
	int qteNo;
	int i = 0 , posicao = 0, j ;
	int filho = 0;
	int altura;
	int no;
	int pai;
	cout<<"Informe a quantidade de nos da arvore:";
	cin>>qteNo;
	No arvore[qteNo];
	//Definindo o No raiz
	
	cout<<"Informe o no Raiz:";
	cin>>arvore[0].valor;
	arvore[0].nivel = 0;
	arvore[0].pai = 0;
	
	for(i = 0 ; i < qteNo;i++)
	{
		cout<<"Informe o valor do no:";
		cin>>no;
		cout<<"Informe o pai:";
		cin>>pai;
		for(j = 0; j < qteNo ;j++)
		{
			if(arvore[j].valor  == pai)
			{
				cout<<"Posicao esquerda ou direta: [1] - Direta [2]- Esquerda:";
				cin>>posicao;
				
				if(posicao == 1)
				{
					filho = (2 * j)+ 2;
					arvore[filho].valor = no; //Recebe o valor do no
					arvore[filho].pai = pai; //Recebe o valor de pai
					arvore[filho].nivel = j + 1; //Recebe o nivel 
					cout<<"O no "<<arvore[filho].valor<<" esta na posicao "<<filho<<endl;
				}
				else if(posicao == 2)
				{
					filho = (2 * j) + 1;
					arvore[filho].valor = no; //Recebe o valor do no
					arvore[filho].pai = pai; //Recebe o valor de pai
					arvore[filho].nivel = j + 1; //Recebe o nivel 
					cout<<"O no "<<arvore[filho].valor<<" esta na posicao "<<filho<<endl;
				}
				else
				{
					cout<<"Opcao invalida "<<endl;
					exit(1);
				}
			}
		}		
	}
	for( int i = 0; i <= MAX  ;i++)
	{

		cout<<"Indice: "<<i<<"   Elemento: "<<arvore[i].valor <<"  Pai:"<<arvore[i].pai<<" Nivel: "<<arvore[i].nivel<<endl ;
		cout<<"----------------------------------------------------------------------------------------------------"<<endl;
	}
	return 0;
}
