/* 
FACULDADE PITAGORAS - Unidade BETIM
-----------------------------------------------------
Curso: Ciência da Computação
Disciplina: Algoritmos e Estrutura de Dados Avançado
Título: IMPLEMENTAÇÃO DE GRAFO - MATRIZ DE ADJACÊNCIA
Versão: 1.0 
Leonardo da Silva Ribeiro
-----------------------------------------------------
*/
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
//Funcao para banner
void banner()
{
	cout<<"--------------------------------------------------------" <<endl;
	cout<<"Grafo - MATRIZ DE ADJACENCIA"<<endl;
	cout<<"Curso: Ciencia da Computacao"<<endl;
	cout<<"Disciplina: Algoritmos e Estrutura de Dados Avancado"<<endl;
	cout<<"--------------------------------------------------------" <<endl;
}

int main()
{
	
	int qte_vert,resp, linha, coluna;
	char indiceC = 65, indiceL = 65;
	banner();
	
	cout <<"Informe o numero de Vertices:";
	cin>>qte_vert;
	int matriz[qte_vert][qte_vert] = {},i,j;
	
	//Mostrar matriz
	for(i = -1; i < qte_vert; i++)
	{
		if(i >=0)
		{
			cout<<char(indiceL);
			indiceL++;
		}
		
		for(j = 0;j < qte_vert;j++)
		{
			if(i == -1)
			{
				cout<<"  "<<char(indiceC);
				indiceC++;
			}
			else
			{
				if(j == 0)
					cout<<" "<<matriz[i][j]<<" ";
				else
					cout<<" "<<matriz[i][j]<<" ";
			}	
			
		}
		cout<<"\n";
	}
	
	//Preenchendo Matriz
	do
	{
		//Preenchendo as linhas
		cout<<"Informe a Linha do Vertice:";
		cin>>linha;
		
		//Preenchendo as colunas
		cout<<"Informe a Coluna do Vertice:";
		cin>>coluna;
		matriz[linha][coluna] = 1;
		
		cout<<"Digite [1] p/ continuar [2] p/ encerrar";
		cin>>resp;		
	}
	while(resp == 1);
	system("cls");
	
	//Saida da Matriz Adjacencia
	//Reiniciando os valores 
	indiceC = 65, indiceL = 65;
	
	for(i = -1; i < qte_vert; i++)
	{
		if(i >=0)
		{
			cout<<char(indiceL);
			indiceL++;
		}
		
		for(j = 0;j < qte_vert;j++)
		{
			if(i == -1)
			{
				cout<<"  "<<char(indiceC);
				indiceC++;
			}
			else
			{
				if(j == 0)
					cout<<" "<<matriz[i][j]<<" ";
				else
					cout<<" "<<matriz[i][j]<<" ";
			}	
			
		}
		cout<<"\n";			
	}
	
	indiceC = 65, indiceL = 65;
	//Mapeando caminhos
	cout<<"[+] - Mapeamento de caminhos da matriz"<<endl;
	for(i = -1; i < qte_vert; i++)
	{
		
		for(j = 0;j < qte_vert;j++)
		{
			
			if(matriz[i][j] == 1)
			{
				cout<<"("<<indiceL<<") --- ("<<indiceC<<")"<<endl;
			}
			indiceC++;
		}
		indiceL++;
		
	}

	
}
