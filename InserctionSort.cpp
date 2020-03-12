#include <iostream>
using namespace std;
#define TAM 6

void insertion_sort(int vetor[], int min, int max)
{
	for(int i=min+1; i<=max; i++)
	{
		int pivo=vetor[i];
		int j=i-1;
		
		while(j>=0 && vetor[j]>pivo)
		{
			vetor[j+1] = vetor[j];
			j--;
		}
		
		vetor[j+1]=pivo;
	}
}

int main()
{
	int v[TAM];
	int i;
	
	// atribuição //
	
	v[0] = 105;
	v[1] = 75;
	v[2] = 80;
	v[3] = 30;
	v[4] = 56;
	v[5] = 94;
	
	
	// função //
	
	insertion_sort(v, 0, TAM-1);

	// retorno da função //
	
	for(i=0;i<TAM;i++){
		cout << v[i] << " " << endl;
	}
	
	return 0;
}


