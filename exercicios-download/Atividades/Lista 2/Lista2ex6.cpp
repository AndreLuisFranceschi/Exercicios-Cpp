#include <iostream>

using namespace std;

int main(){
	
	int a;
	
	cout << "Digite um valor inteiro: ";
	cin >> a;
	
	if(a>0){
		float vetor[a];
		float menor;
	
		cout << "Agora, digite " << a << " valores de ponto flutuante: " << endl;
		for(int i=0; i<a; i++){
			cin >> vetor[i];
			menor = vetor[i];
		}
		for(int i=0; i<a; i++){
			if(vetor[i]<menor)
				menor = vetor[i];
		}
		cout << "O menor valor vale: " << menor;
	}
	
	return 0;
}
