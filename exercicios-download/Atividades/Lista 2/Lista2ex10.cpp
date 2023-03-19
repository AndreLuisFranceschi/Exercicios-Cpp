#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout << "Informe um numero inteiro e positivo: ";
	do{
		cin >> n;
	}while(n<1);
	
	int mult = 1;
	for(int i=n; i>1; i--){
		mult *= i;
		cout << i << " * ";
	}
	cout << "1 = " << mult;
	
	return 0;
}
