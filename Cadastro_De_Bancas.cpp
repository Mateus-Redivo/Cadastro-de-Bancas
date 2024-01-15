#include <locale>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int Tamanho = 10000, igual=0,continuar = 1, i=0, del, b = 0,q = 0,Q = 0, Hor = 0;
	int Horas[Tamanho], Dias[Tamanho]; 
	string Orientador[Tamanho], Membro1[Tamanho],Membro2[Tamanho], Projeto[Tamanho];
	string Temp[Tamanho], Nome;
	
fflush(stdin);
while(continuar == 1)
{
  cout<<"=============================================================\n";
  cout<<"                          BANCA "<<i+1<<endl;
  cout<<"=============================================================\n";
  cout<<"\nInforme a hora: ";
	cin>>Horas[i];
		if(Horas[i] > 23)
		{
			cout<<"Informe uma hora valida\n";
		}	
		else
		{
			cout<<"\nInforme o dia: ";
			cin>>Dias[i];
			if(Dias[i] > 31)
			{
				cout<<"Informe um dia valido\n";
			}
			else
			{
				if(i != 0)
				{
				for(int j=0; j<i;j++)
			   	{
				   	if(Dias[j] == Dias[i]) 
					  {
					   igual=1;
					  }
				  }
				if (igual == 1)
				{
					for(int j=0;j<i;j++)
					{
					if (Horas[j] == Horas[i])
				   		{
	  	    	        cout<<"\nConflito de data e hora, registre novamente.\n";
	  	    	        b=1;
                    i--;
			   	   	}
					}		  	  
				}
        }
        if(b != 1)
        {
        cout<<"\nInforme o nome do orientador: ";
	      cin>>Temp[i];
		    for(int l=0; l < i; l++)
 		   	  {
          if(Orientador[l] == Temp[i])
            {
   		   	    if(Horas[l] == Horas[i])
              {
                for(int k=0; k<i;k++)
			   	      {
				   	      if(Dias[k] == Dias[i])
                  {
                  cout<<"\nConflito de hora do orientador, registre novamente.\n";
                  i--;
                  break;
                  }
                }
              }
            }
  	  	  }	
		
		    Orientador[i] = Temp[i];
	      cout<<"\nInforme o nome do primeiro convidado: ";
	      cin>>Temp[i];
	      for(int l=0; l < i; l++)
 		   	  {
            if(Membro1[l] == Temp[i])
            {
   		   	    if(Horas[l] == Horas[i])
              {
              for(int k=0; k<i;k++)
			   	      {
				   	      if(Dias[k] == Dias[i]) 
                  cout<<"\nConflito de hora do primeiro convidado, registre novamente.\n";
                 i--;
                 break;
                }
              }
            }
  	  	  }	
	      Membro1[i] = Temp[i];
	      cout<<"\nInforme o nome do segundo convidado: ";
	      cin>>Temp[i];
		    for(int l=0; l < i; l++)
 		   	  {
            if(Membro2[l] == Temp[i])
            {
   		   	    if(Horas[l] == Horas[i])
              {
                for(int k=0; k<i;k++)
			   	      {
				   	      if(Dias[k] == Dias[i]) 
                  {
                  cout<<"\nConflito de hora do segundo convidado, registre novamente.\n";
                   i--;
                  break;
                  }
                }
              }
            } 
  	  	  }
		    Membro2[i] = Temp[i];
		    igual = 0;		
		    cout<<"\nInforme o projeto: ";
		    cin>>Temp[i];
			  for(int l=0; l < i; l++)
 		   	  {
		   	  if(Projeto[l] == Temp[i])
   		   	  {
   		   	  	if(Horas[l] == Horas[i])
              {
                for(int k=0; k<i;k++)
			   	      {
				   	      if(Dias[k] == Dias[i]) 
                  {
					  cout<<"\nErro, projeto igual, banca invalidada";
 	  	  	  i--;
				  	break;
			      }	
			     }
			   }
			  }
			}
	      Projeto[i] = Temp[i];
        }	
        b=0;
    if(i != 0)
      {
      	system("cls");
      cout<<"\n___________________________________________________________\n";
      cout<<"Deseja excluir alguma banca? \n1-Sim\n2-Não\n";
      cin>>continuar;
      if(continuar == 1)
        {
        cout<<"Informe o número da banca que deseja excluir: ";
        cin>>del;
        Orientador[del-1]="Banca deletada";
        Membro1[del-1]="Banca deletada";
        Membro2[del-1]="Banca deletada";
        Projeto[del-1]="Banca deletada";
        Horas[del-1]= 0-i;
        Dias[del-1]= 0-i;
        }
  		system("cls");
		continuar = 0;
		cout<<"\n___________________________________________________________\n";
        cout<<"Deseja alterar alguma banca? \n1-Sim\n2-Não\n";
        cin>>continuar;
        if(continuar == 1)
		{
			cout<<"Informe a banca que você quer alterar: ";
			cin>>q;
			q--;
			while(true)
			{
			cout<<"Informe oque voce quer alterar na banca da seguinte forma\n";
			cout<<"1 - Orientador\n2 - Primeiro Convidado\n3 - Segundo Convidado";
			cout<<"\n4 - Projeto\n5 - Hora\n6 - Dia\n7 - Sair\n"; 
			cin>>Q;
			if(Q !=7)
			{
			switch(Q)
			{
			case 1:
					Nome = "";
			cout<<"Informe o nome do novo Orientador: ";
			cin>>Nome;
			Orientador[q] = Nome;
			
			break;
			case 2:
					Nome = "";
			cout<<"Informe o nome do novo Primeiro Convidado: ";
			cin>>Nome;
        	Membro1[q] = Nome;
        	
        	break;
        	case 3:
        			Nome = "";
        	cout<<"Informe o nome do novo Segundo Convidado: ";
        	cin>>Nome;
	        Membro2[q] = Nome;
	        
	        break;
			case 4:
					Nome = "";
			cout<<"Informe o nome do novo Projeto: ";
			cin>>Nome;
	        Projeto[q] = Nome;
	        
	        break;
	        case 5:
	        cout<<"Informe o novo Horário: ";
	        cin>>Hor;
	        Horas[q] = Hor;
	        
	        break;
	        case 6:
	        cout<<"Informe o novo Dia: ";
	        cin>>Hor;
	        Dias[q] = Hor;
	        break;
	    
	        default:
	        cout<<"Informe uma opção válida";
	        break;
			}
			}
			else
			{
				break;
			}	
			}
		}
      } 	
  	  cout<<"\n_____________________________________________________________";
	    cout<<"\nQuer continuar o cadastro? \n1-Sim \n2-Não\n3-Imprimir Bancas\n";
	    cin>>continuar;	
	     system("cls");
	     i++;
	    if(continuar == 3)
		{
			for(int G=0; G < i; G++)
			{
		   	cout<<"\n=============================================================\n";
			cout<<"                        BANCA "<<G+1<<endl;
			cout<<"\n=============================================================\n";
				cout<<"\nOrientador: "<<Orientador[G];
				cout<<"\nPrimeiro Convidado: "<<Membro1[G];
				cout<<"\nSegundo Convidado: "<<Membro2[G];
				cout<<"\nProjeto: "<<Projeto[G];
				cout<<"\nHora: "<<Horas[G];
				cout<<"\nDia: "<<Dias[G];
			}
			cout<<"\n=============================================================\n";
			cout<<"\nQuer continuar o cadastro? \n1-Sim \n2-Não";
	    	cin>>continuar;	
		}	
      }
    }
  }
}	
