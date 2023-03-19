#include <iostream>

using namespace std;

int main(){
	
	int cont, soma = 0;
	cout << "Informe um numero: \n";
	do{
		cin >> cont;
	}while(cont<1);
	
	for(int i=1; i>=cont; i++){
		if(i==1){
			cout << "1  ";
			continue;
		}
		if(i==2){
			cout << "1  ";
			continue;
		}
		soma = (i-1)+(i-2);
		cout << soma << "  ";
	}
	
	return 0;
}
