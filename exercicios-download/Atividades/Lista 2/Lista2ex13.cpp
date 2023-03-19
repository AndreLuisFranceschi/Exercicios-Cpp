#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float saldo_inicial, valor, credito=0, debito=0;
	
	cout << "Informe o saldo inicial: ";
	cin >> saldo_inicial;
	
	int opc;
	bool executar = true;
	
	do{
		cout << "\nEscolha: \n1. Debitar\n2. Creditar\n-1. Encerrar" << endl;
		cin >> opc;
		switch(opc){
			case 1:
				cout << "Valor a debitar: ";
				cin >> valor;
				debito+=valor;
				break;
			case 2:
				cout << "Valor a creditar: ";
				cin >> valor;
				credito+=valor;
				break;
			case -1:
				executar = false;
				break;
			default:
				cout << "Operacao invalida!" << endl;
				break;
		}
	}while(executar);
	
	cout << "\nSaldo: " << fixed << setprecision(2) << saldo_inicial+credito-debito;
	cout << "\nCreditos: " << fixed << setprecision(2) << credito;
	cout << "\nDebitos: " << fixed << setprecision(2) << debito;
	
	return 0;
}
