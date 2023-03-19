#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float capital;
	int tempo;
	float taxa;
	float juro;
	
	cout << "Informe o valor do emprestimo: ";
	cin >> capital;
	
	cout << "\nInforme o tempo (meses): ";
	cin >> tempo;
	
	cout << "\nInforme a taxa (%): ";
	cin >> taxa;
	
	juro = capital*tempo*taxa/100;
	
	cout << "\n\nTotal de juros: R$ " << juro << fixed << setprecision(2) << ",00" << endl;
	
	return 0;
}
