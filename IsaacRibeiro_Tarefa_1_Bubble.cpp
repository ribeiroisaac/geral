#include <iostream>
using namespace std;
#define TAM 6

void troca(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}



void bubblesort (int *vet, int max){
	int j=0;
	while(j!=max)
	{
		for(int i=0;i<max;i++){
			if(vet[i] > vet[i+1]){
				int aux=vet[i];
				vet[i]=vet[i+1];
				vet[i+1]=aux;
/*				troca (&vet[i], &vet[i+1]);				*/
			}
		}
		j++;
	}
}


int main(){
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
	
	bubblesort(v, TAM-1);
	
	// retorno da função //
	
	for(i=0;i<TAM;i++){
		cout << v[i] << " " << endl;
	}
	
	return 0;
}
