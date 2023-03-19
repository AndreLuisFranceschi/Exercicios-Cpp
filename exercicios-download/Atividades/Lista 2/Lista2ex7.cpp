#include <iostream>

using namespace std;

int menor_impar(int a, int b);
int maior_par(int a, int b);

int main(){
	
	int a, b, menor, maior;
	
	cout << "Digite dois valores inteiros: " << endl;
	cin >> a >> b;
	
	if(a>0 && b>0){
		if(a<b){
			menor = a;
			maior = b;
		}
		else{
			if(b<a){
				menor = b;
				maior = a;
			} else{
				cout << "Numeros iguais!" << endl;
				exit(0);				
			}
		}
		cout << "O menor numero impar vale: " << menor_impar(menor, maior) << endl;
		cout << "O maior numero par vale: " << maior_par(menor, maior) << endl;
	}
	
	return 0;
}

int menor_impar(int menor, int maior){
	int menor_impar;
	
	for(int i=maior; i>=menor; i--){
		if(i%2!=0){
			menor_impar = i;
		}
	}
	return menor_impar;
}

int maior_par(int menor, int maior){
	int maior_par;
	
	for(int i=menor; i<=maior; i++){
		if(i%2==0){
			maior_par = i;
		}
	}
	return maior_par;
}
