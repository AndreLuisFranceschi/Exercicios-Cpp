#include <iostream>

using namespace std;

int main(){
	
	float avaliacao1, avaliacao2, avaliacao3, media;
	
	cout << "Informe as notas:" << endl << "------------------" << endl << "Avaliacao 1: ";
	cin >> avaliacao1;
	
	cout << "Avaliacao 2: ";
	cin >> avaliacao2;
	
	cout << "Avaliacao 3: ";
	cin >> avaliacao3;
	
	cout << "------------------" << endl;
	
	media = (avaliacao1*2+avaliacao2*3+avaliacao3*5)/10.0;
	
	cout << "A media final vale: " << media << endl;
	
	return 0;
}
