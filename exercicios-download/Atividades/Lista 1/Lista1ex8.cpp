#include <iostream>

using namespace std;

int main(){
	
	float base, altura, area;
	
	cout << "Informe o tamanho da base do triangulo: ";
	cin >> base;
	
	cout << "Informe a altura do triangulo: ";
	cin >> altura;
	
	area = (base*altura)/2;
	
	cout << "\nA area do triangulo vale: " << area << endl;
	
	return 0;
}
