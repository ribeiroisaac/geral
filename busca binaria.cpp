#include <iostream>
using namespace std;
#define TAM 5

void binaria (int *vet, int min, int max, int desejo){
	int meio = (max+min)/2;
	if(vet[meio] == desejo){
		cout << "Valor localizado na posicao " << meio+1 << endl;
	}
	else
	if(min==max){
		cout << "Valor nao inserido no vetor" << endl;
	}
	else{
		if(vet[meio] > desejo){
			binaria(vet, min, meio, desejo);
		}
		if(vet[meio] < desejo){
			binaria(vet, meio+1, max, desejo);
		}
	}	
}

int main(){
	
	int v[TAM];
	
	v[0] = 12;
	v[1] = 22;
	v[2] = 36;
	v[3] = 55;
	v[4] = 78;
	
	int desejo;
	
	cout << "valor desejado: " << endl;
	cin >> desejo;
	cout << endl;
	
	binaria (v, 0, TAM-1, desejo);
	
	return 0;
}
