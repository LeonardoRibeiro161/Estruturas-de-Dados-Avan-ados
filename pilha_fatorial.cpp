#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
typedef int NUM;
typedef struct pilha
{
	NUM dado;
	struct pilha *prox;
}*Pilha;

//Funcao para criar uma pilha
Pilha criar_pilha(NUM p)
{
	Pilha novo = (Pilha) malloc(sizeof(Pilha));
	novo->dado = p;
	novo->prox = NULL;
	return novo;
}
//Funcao para empilhar os elementos
Pilha Empilhar(NUM p, Pilha pi)
{
	Pilha novo = criar_pilha(p);
	novo->prox = pi;
	return novo;
}
// 
Pilha Desempilhar(Pilha pi)
{
	Pilha sub = pi->prox;
	free(pi);
	return sub;
}

void fatorial(Pilha pi)
{
	int n = 1;
	
	while(pi->dado != NULL)
	{
		cout<<pi->dado <<" - ";
		n = n * pi->dado;
		pi = pi->prox;
	}
	cout<<"\n O fatorial do numero informado e : "<<n<<endl;
}
int main()
{
	Pilha Tpilha;
	int qte, num, n_fatorial;
	system("cls");
	cout<<"Informe o numero:";
	cin>>qte;
	for(int i = 0; i <= qte;i++)
	{
		Tpilha = Empilhar(i, Tpilha);
	}
	fatorial(Tpilha);
	free(Tpilha);
}
