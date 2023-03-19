#include <iostream>

using namespace std;

int main(){
	int rodadas, j1, j2, j1_venceu=0, j2_venceu=0;
	
	cout << "Informe o numero de rodadas:";
	cin >> rodadas;
	
	for(int i=1; i<=rodadas; i++){
		do{
			cout << endl << "Rodada " << i << endl;
			cout << "Carta do jogador 1: ";
			cin >> j1;
			cout << "Carta do jogador 2: ";
			cin >> j2;
			if(j1<1 || j1>20 || j2<1 || j2>20)
				cout << "CARTA INVALIDA!" << endl;
		}while(j1<1 || j1>20 || j2<1 || j2>20);
		
		if(j1<j2){
			j1_venceu++;
		}
		if(j2<j1){
			j2_venceu++;
		}
	}
	cout << endl << "RODADAS: " << rodadas << endl;
	cout << "JOGADOR 1: " << j1_venceu << endl;
	cout << "JOGADOR 2: " << j2_venceu << endl;
	if(j1_venceu>j2_venceu){
		cout << "JOGADOR 1 VENCEU!";
	}else if(j2_venceu>j1_venceu){
		cout << "JOGADOR 2 VENCEU!";
	}else{
		cout << "JOGO EMPATADO!";
	}
}
