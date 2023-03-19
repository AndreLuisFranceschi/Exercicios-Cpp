#include <iostream>

using namespace std;

void f_parametro_valor(int a, int b);
void f_parametro_referencia(int &a, int &b);

int main(){
	int x = 10, y = 50;
	
	f_parametro_valor(x, y);
	
	cout << "A : B = " << x << ":" << y << endl;
	
	f_parametro_referencia(x, y);
	
	cout << "A : B = " << x << ":" << y << endl;
	
	return 0;
}

void f_parametro_valor(int a, int b){
	int aux = a;
	a = b;
	b = aux;
}

void f_parametro_referencia(int &a, int &b){
	int aux = a;
	a = b;
	b = aux;
}
