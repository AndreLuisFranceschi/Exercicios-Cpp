#include <iostream>

using namespace std;

int main(){
	
	float tempo, velocidade, distancia, litros;
	
	cout << "Informe o tempo (em horas) da viagem: ";
	cin >> tempo;
	
	cout << "Informe a velocidade media: ";
	cin >> velocidade;
	
	distancia = velocidade*tempo;
	litros = distancia/12;
	
	cout << "A quantidade de combustível necessaria para a viagem sera de: " << litros << " litros";

	return 0;
}
