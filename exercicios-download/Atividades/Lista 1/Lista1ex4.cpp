#include <iostream>

using namespace std;

int main(){
	
	int dias = 1876;
	
	cout << "\nTotal de dias: " << dias << endl << endl;
	cout << "Anos: " << 1876/365 << endl;
	cout << "Meses: " << (1876%365)/30 << endl;
	cout << "Semanas: " << ((1876%365)%30)/7 << endl;
	cout << "Dias restantes: " << (((1876%365)%30)%7)/1 << endl;
	
	return 0;
}
