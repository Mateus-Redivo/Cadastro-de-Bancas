#include <locale>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int Horas[0], Dias[0];
	string Orientador[0], Membro1[0],Membro2[0], Projeto[0];
  
	cout<<"Informe o nome do orientador: ";
	cin>>Orientador[1];
	cout<<"\nInforme o nome do primeiro convidado: ";
	cin>>Membro1[1];
	cout<<"\nInforme o nome do segundo convidado: ";
	cin>>Membro2[1];
	
	cout<<"\nInforme a hora: ";
	cin>>Horas[0];
		if(Horas[0] > 23)
		{
		   	system("cls");
			cout<<"Informe uma hora v�lida";
		}	
		else
		{
			cout<<"\nInforme o dia: ";
			cin>>Dias[0];
			if(Dias[0] > 31)
			{
				system("cls");
				cout<<"Informe um dia v�lido";
			}
			else
			{
				cout<<"\nInforme o projeto: ";
				cin>>Projeto[1];
			}
		}
  	   	
}

