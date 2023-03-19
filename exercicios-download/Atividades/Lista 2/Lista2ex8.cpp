#include <iostream>

using namespace std;

int main(){
	
	int num;
	
	cout << "Informe um numero inteiro e positivo: ";
	cin >> num;
	
	if(num>0){
		for(int i=1; i<=num; i++){
			if(num%i==0){
				cout << i << endl;
			}
		}
	}
	
	return 0;
}
