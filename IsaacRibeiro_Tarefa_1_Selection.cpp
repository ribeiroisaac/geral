#include <iostream>
using namespace std;
#define TAM 6

void troca (int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}


void selectionsort(int *v, int ini, int max){
	int i;
	
	if(ini < max){
		for(i=ini;i<max;i++){
			
			for(int j=i+1;j<=max;j++){
				if (v[i] > v[j]){
					i=j;
				}
			}

			troca (&v[i], &v[ini]); 
			ini++;
			selectionsort(v, ini, max);
			i+=max+1;
		}
	}
}


int main(){

	int vet[TAM];

	
	// atribuição //
	vet[0] = 105;
	vet[1] = 75;
	vet[2] = 80;
	vet[3] = 30;
	vet[4] = 56;
	vet[5] = 94;
	
	// selection sort para ordenação //
	
	selectionsort(vet, 0, TAM-1); 
		
	// retorno da função //
	
	for(int i=0;i<TAM;i++){
		cout << vet[i] << " " << endl;
	}
	
	return 0;
}
