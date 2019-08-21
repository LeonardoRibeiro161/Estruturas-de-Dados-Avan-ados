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


Pilha criar_pilha(NUM p)
{
	Pilha novo = (Pilha) malloc(sizeof(Pilha));
	novo->dado = p;
	novo->prox = NULL;
	return novo;
}

Pilha Empilhar(NUM p, Pilha pi)
{
	Pilha novo = criar_pilha(p);
	novo->prox = pi;
	return novo;
}

Pilha Desempilhar(Pilha pi)
{
	Pilha sub = pi->prox;
	free(pi);
	return sub;
}

void mostrar(Pilha pi)
{
	
	while(pi->prox != NULL)
	{
		cout<<pi->dado <<" - ";
		pi = pi->prox;
	}
	cout<<pi->dado;
	
}

void fatorial(Pilha pi)
{
	int n = 1;
	while(pi->prox != NULL)
	{
		cout<<pi->dado <<" - ";
		n = n * pi->dado;
		pi = pi->prox;
	}
	cout<<pi->dado;
	cout<<endl<<endl<<"O fatorial do número informado é : "<<n<<endl<<endl;
}
int main()
{
	Pilha Tpilha;
	int qte, num, n_fatorial;
	system("clear");
	cout<<"Deseja empilhar quantos numeros?";
	cin>>qte;
	for(int i = 0; i < qte;i++)
	{
		cout<<"Informe o numero:";
		cin>>num;
		Tpilha = Empilhar(num, Tpilha);
	}
	cout<<"Calcular fatorial do numero:";
	cin>>n_fatorial;
	
	fatorial(Tpilha);
}