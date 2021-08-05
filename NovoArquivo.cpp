#include <locale>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{

	
	setlocale(LC_ALL,"portuguese");
	int Horas[10000], Dias[100000]; 
	int continuar = 1, i=0;
	string Orientador[10000], Membro1[100000],Membro2[100000], Projeto[10000];
	
	fflush(stdin);
    while(continuar == 1)
	{
	
	cout<<"Informe o nome do orientador: ";
	cin>>Orientador[i];
	cout<<"\nInforme o nome do primeiro convidado: ";
	cin>>Membro1[i];
	cout<<"\nInforme o nome do segundo convidado: ";
	cin>>Membro2[i];
	cout<<"\nInforme a hora: ";
	cin>>Horas[i];
		if(Horas[i] > 23)
		{
			cout<<"Informe uma hora valida";
		}	
		else
		{
			cout<<"\nInforme o dia: ";
			cin>>Dias[i];
			if(Dias[i] > 31)
			{
				cout<<"Informe um dia valido";
			}
			else
			{
				for(int j=0; j<=i;j++)
			   	{
				   	if(Dias[j] == Dias[i]) 
					{
					   if (Horas[j] == Horas[i])
				   		{
	  	    	        cosut<<"\nconflito de data e hora, registre novamente.\n";
                        i--;
			   	   		}
					}
				}
				cout<<"\nInforme o projeto: ";
				cin>>Projeto[i];
				for (int j=0;j<=i;j++)
			    {
					if(Projeto[j]== Projeto[i])
				    {
				   	    cout<<"\nconflito de projetos, banca inválida, registre novamente.\n";
				     	i--;
					}
				}
			}
		}			
		cout<<"\nquer continuar? \n1-sim \n2-não\n";
		cin>>continuar;	
		i++;
	}
}   	
