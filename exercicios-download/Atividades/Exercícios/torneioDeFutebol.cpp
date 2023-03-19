#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	string times[3];
	
	cout << "\n*** TORNEIO DE FUTEBOL ***" <<
			"\n--------------------------" << endl;
	
	for(int i=0; i<3; i++){
		cout << "Digite o nome do " << i+1 << "o. time: ";
		cin >> times[i];
	}
	
	cout << "\n---------------------";
	cout << "\nTABELA DE JOGOS:";
	cout << "\n---------------------\n";
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i != j){
				cout << setw(15) << times[i] << " x " << times[j] << endl;
			}
		}
	}
}
