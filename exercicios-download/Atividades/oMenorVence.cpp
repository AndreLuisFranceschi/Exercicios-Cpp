#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int lerInt();

int main(int argc, char** argv) {
	int rodadas;
	int a, b, j1 = 0, j2 = 0;
	
	cout << "\t*** O MENOR VENCE ***\n\n";
	cout << "Informe o numero de rodadas:" << endl;
	do{
		cin >> rodadas;
	} while (rodadas <= 0);
	
	for (int i=0; i<rodadas; i++){
		cout << "\nInforme o valor das cartas [1, 20]:" << endl;
		cout << "Jogador 1: ";
		a = lerInt();
		cout << "Jogador 2: ";
		b = lerInt();
		
		if (a<b){
			cout << "\nJogador 1 venceu a rodada " << (i+1) << endl;
			j1++;
		} else {
			if (b<a){
				cout << "\nJogador 2 venceu a rodada " << (i+1) << endl;
				j2++;
			} else {
				cout << "\nRodada " << (i+1) << " empatada!" << endl;
			}
		}
	}
	
	cout << "\n\n*** VENCEDOR ***" << endl;
		if(j1 > j2){
			cout << "Jogador 1. Parabens!" << endl;
		} else {
			if (j2 > j1){
				cout << "Jogador 2. Parabens!" << endl;
			} else {
				cout << "Jogo empatado!" << endl;
			}
		}
	
	return 0;
}

int lerInt(){
	int n;
	do{
		cin >> n;
		if(n<1 || n>20){
			cout << "Valor invalido. Digite novamente: ";
		}
	} while (n<1 || n>20);
	return n;
}
