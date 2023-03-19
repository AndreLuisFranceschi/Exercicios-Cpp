#include <iostream>

using namespace std;

int main(){
	
	int num, maior = 0, cont = 0;
	
	do{
		cin >> num;
		if(num>maior){
			maior = num;
		}
		if(num>0) cont++;
	}while(num>0);
	
	cout << "A quantidade de valores positivos foi: " << cont << endl;
	if(cont>0){
		cout << "O maior valor informado foi: " << maior;
	}
		
	return 0;
}
