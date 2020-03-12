#include <iostream>
using namespace std;
#define TAM 6

void merge(int *saida, int *auxiliar, int inicio, int meio, int fim)
{
    int i, j, k;
    i = inicio;
    j = meio + 1;
    k = inicio;
    while(i <= meio && j <= fim)
	{
        if(auxiliar[i] < auxiliar[j])
		{
            saida[k] = auxiliar[i];
            k++;
            i++;
        }
        else
		{
            saida[k] = auxiliar[j];
            k++;
        	j++;
        }
    }
    while(i <= meio)
	{
        saida[k] = auxiliar[i];
        k++;
        i++;
    }

    while(j <= fim)
	{
        saida[k] = auxiliar[j];
        k++;
        j++;
    }
    //Copia os elementos que foram ordenados para o auxiliar
    for(int p = inicio; p <= fim; p++)
    {
        auxiliar[p] = saida [p];
	}
}



void mergeSort(int *saida, int *auxiliar, int inicio, int fim)
{
    if(inicio < fim)
	{
        int meio = (inicio + fim) / 2;
        mergeSort(saida, auxiliar, inicio, meio);
        mergeSort(saida, auxiliar, meio + 1, fim);
        merge(saida, auxiliar, inicio, meio, fim);
    }
}

int main()
{
	int v[TAM];
	v[0]=12;
	v[1]=18;
	v[2]=10;
	v[3]=20;
	v[4]=5;
	v[5]=2;
	cout << endl;
	int aux[TAM];
	
	mergeSort(aux, v, 0, TAM-1);
	
	for(int i=0;i<TAM;i++)
	{
		cout << v[i] << endl;
	}
	return 0;
}
