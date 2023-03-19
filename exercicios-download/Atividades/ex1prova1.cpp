#include <iostream>

using namespace std;

int rodadas();
int lancarDado();

int main(int argc, char** argv) {
	int p = 10;
	int rod, dado;
	
	rod = rodadas();
	
	for (int i=0; i<rod; i++){
		dado = lancarDado();
		
		switch(dado){
		case 0:
			p-= 2;
			break;
		case 1:
			p-= 7;
			break;
		case 2:
			p+= 3;
			break;
		case 3:
			p+= 6;
			break;
		case 4:
			p-= 3;
			break;
		case 5:
			p+= 4;
			break;
		}
	}
	
	if (p >= 20){
		cout << "\nParabens, sua pontuacao vale: " << p;
	} else {
		cout << "\nSua pontuacao vale " << p << ", infelizmente voce perdeu\n";
	}
	
	return 0;
}



int rodadas(){
	int n;
	
	do{
		cout << "Informe o numero de rodadas: ";
		cin >> n;
		cout << endl;
		if (n <= 0){
			cout << "Numero deve ser maior que 0\n";
		}
	} while (n <= 0);
	
	return n;
}

int lancarDado(){
	int valor;
	
	do{
		cout << "Informe o valor do dado [0, 5]: ";
		cin >> valor;
		if (valor < 0 || valor > 5){
			cout << "Valor invalido" << endl;
		}
	} while (valor < 0 || valor > 5);
	
	return valor;
}
