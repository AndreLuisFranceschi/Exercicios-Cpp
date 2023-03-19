#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float base = 0.45;
	float altura = 0.67;
	float area;
	
	area = base * altura;
	
	cout << "Valor: R$ " << fixed << setprecision(2) << 50 * area * 35 << ",00\n";
	
	return 0;
}
