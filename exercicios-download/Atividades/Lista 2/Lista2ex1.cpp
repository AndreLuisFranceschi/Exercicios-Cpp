#include <iostream>

using namespace std;

void inteiro_positivo(int numero){
	for(int i=0; i<=numero; i+=2){
		cout << i << "  ";
	}
}

int main(){
	
	int numero;
	
	cout << "Digite um numero inteiro e positivo: ";
	cin >> numero;
	
	if(numero >= 0){
		inteiro_positivo(numero);
	}else if(numero < -1){
		cout << "Numero invalido!";
	}
	
	return 0;
}
