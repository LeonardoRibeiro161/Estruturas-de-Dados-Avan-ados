#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	FILE *p_file;
	char diretorio[50] = "C:\\Users\\leonardo.ribeiro-nub\\Desktop\\teste.txt";
	char  *conteudo;
	
	p_file = fopen(diretorio, "rt");
	
	if(p_file == NULL)
	{
		cout<<"Erro, impossivel abrir o arquivo"<<endl;
	}
	
	else
	{
		while(!feof(p_file))
		{
			conteudo = fgets(conteudo, 100, p_file);
			cout<<conteudo;
			
		}
		fclose(p_file);
	}
	
}
