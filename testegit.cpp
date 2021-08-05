#include <locale>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int Horas[0], Dias[0];

	cout<<"Informe o dia: ";
	cout<<"\nInforme a hora: ";
		cin>>Horas[0];
		if(Horas[0] > 23)
		{
		   	system("cls");
			cout<<"Informe uma hora válida";
		}
	cout<<"\nInforme o membro: ";
	cout<<"\nDigite seu nome: ";
	

	
}