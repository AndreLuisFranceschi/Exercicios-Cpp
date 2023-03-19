#include <iostream>

using namespace std;

int main(){
	
	int num, soma=0;
	
	cin >> num;
	
	for(int i=1; i<=num; i++){
		if(num%i==0){
			cout << i << "  ";
		}
	}
	
	for(int i=1; i<num; i++){
		if(num%i==0){
			soma+=i;
		}
	}
	
	if(soma==num){
		cout << "\nPERFEITO";
	}else{
		cout << "\nNAO E PERFEITO";
	}
	
	return 0;
}
