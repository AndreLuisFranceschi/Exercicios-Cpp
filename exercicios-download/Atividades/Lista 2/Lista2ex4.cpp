#include <iostream>

using namespace std;

int soma_pares(int x){
	int soma = 0;
	for(int i=0; i<=x; i+=2){
		soma = soma+i;
	}
	return soma;
}

int soma_impares(int x){
	int soma = 0;
	for(int i=1; i<=x; i+=2){
		soma = soma+i;
	}
	return soma;
}

int main(){
	
	int a, x;
	
	cout << "Digite um numero inteiro positivo: ";
	cin >> a;
	
	if(a>=0){
		x = soma_pares(a) - soma_impares(a);
		cout << soma_pares(a) << " - " << soma_impares(a) << " = " << x;
	}
	
	return 0;
}
