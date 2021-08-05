#include <locale>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int Horas[0], Dias[0];
	string Orientador[0], Membro1[0],Membro2[0];
	
	cout<<"Iforme o nome do orientador";
	cin>>Orientador[1];
	cout<<"\nIforme o nome do primeiro convidado";
	cin>>Membro1[1];
	cout<<"\nIforme o nome do segundo convidado";
	cin>>Membro2[1];
	
	
		cout<<"\nInforme a hora: ";
		cin>>Horas[0];
		if(Horas[0] > 23)
		{
		   	system("cls");
			cout<<"Informe uma hora válida";
		}
		else
		{
			cout<<"\nInforme o membro: ";
  	   		cout<<"\nDigite seu nome: ";
		}	
}