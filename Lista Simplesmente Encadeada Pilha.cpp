#include <iostream>
using namespace std;

struct no{
	int info;
	struct no*prox;
};
typedef struct no* noPtr;

bool listavazia(noPtr ini)
{
	if(ini==NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void inserir(noPtr*ini, noPtr*fim)
{
	if(listavazia(*ini) == true)
	{
		noPtr aux = new no;
		cout << "valor a ser inserido" << endl;
		cin >> aux->info;
		aux->prox=NULL;
		*ini=aux;
		*fim=aux;
	}
	
	else
	{
		noPtr aux = new no;
		cout << "valor a ser inserido" << endl;
		cin >> aux->info;
		
		aux->prox=*ini;
		*ini=aux;		
	}
	
}

void retirar(noPtr*ini, noPtr*fim)
{
	if(listavazia(*ini) == true)
	{
		cout << "acao impossivel: lista vazia" << endl;
	}
	else
	{
		noPtr aux;
		aux=*ini;
		if(*fim==aux)
		{
			*fim=NULL;
		}
		*ini=aux->prox;
		
		delete(aux);
	}
}

void listar(noPtr ini)
{
	if(listavazia(ini) == true)
	{
		cout << "acao impossivel, lista vazia" << endl;
	}
	
	else
	{
		while(ini!=NULL)
		{
			cout << '\n';
			cout << "no: " << (*ini).info << endl;
			if((*ini).prox == NULL)
			{
				cout << "no posterior: NULL" << endl;
			}
			else
			{
				cout << "no proximo: " << (*(*ini).prox).info << endl;				
			}
			ini=ini->prox;
		}
	}
}

int main()
{
	
	noPtr inicio=NULL;
	noPtr final=NULL;
	int aux99=90;
	while(aux99!=0)
	{
	
		cout << '\n' << "1 - Inserir no na pilha" << endl;
		cout << "2 - Retirar no da pilha" << endl;
		cout << "3 - Listar nos da pilha" << endl;
		cout << "0 - Sair do menu" << endl;
		cout << '\n';
		cout << "escolha uma opcao (0-3)" << endl;
		
		cin >> aux99;
		cout << "\n";
		
		switch(aux99)
		{
			case(1): 
				inserir(&inicio, &final);
				break;
			case(2):
				retirar(&inicio, &final);
				break;
			case(3):
				listar(inicio);
				break;
		}
		
		if(aux99 < 0 && aux99 > 3)
		{
			cout << "numero invalido" << endl;
		}
	}
	return 0;
}
