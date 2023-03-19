#include <iostream>

using namespace std;

float media_pares(int a){
	int soma_pares=0, cont=0;
	float media;
	
	for(int i=0; i<=a; i+=2){
		soma_pares = soma_pares + i;
		cont++;
	}
	media = soma_pares/cont;
	return media;
}

int maior_par(int a){
	int maior_par=0;
	
	for(int i=0; i<=a; i+=2){
		if(i>maior_par)
			maior_par = i;
	}
	return maior_par;
}

int main(){
	
	int a;
	
	cout << "Digite um numero inteiro positivo: ";
	cin >> a;
	
	if(a>0){
		cout << "Media aritmetica dos valores pares: " << media_pares(a) << endl;
		cout << "Maior valor par existente no intervalo: " << maior_par(a) << endl;
	}
	
	return 0;
}
