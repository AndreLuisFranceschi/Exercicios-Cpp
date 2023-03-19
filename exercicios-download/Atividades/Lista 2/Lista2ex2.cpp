#include <iostream>

using namespace std;

void sequencia(int maior, int menor){
	for(int i=maior; i>=menor; i--){
			cout << i << "  ";
		}
}

int main(){
	
	int num1, num2;
	
	do{
		cout << "Digite dois numeros inteiros positivos: \n";
		cin >> num1 >> num2;
		
		if(num1 < 0 || num2 < 0)
			cout << "Voce digitou numero negativo, tente novamente!\n\n";
	}while(num1 < 0 || num2 < 0);
	
	if(num1 > num2){
		sequencia(num1, num2);
	}else if(num2 > num1){
		sequencia(num2, num1);
	}else{
		cout << "Numeros iguais!";
	}
	
	return 0;
}
