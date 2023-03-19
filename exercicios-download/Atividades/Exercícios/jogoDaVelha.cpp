#include <iostream>
#include <iomanip>

using namespace std;

void mostraVelha();
void mudaJogador(char simb);

int main(){
	int l, c, cont, po;
	char simb, matriz[3][3];
	bool r;
		
}

void mostraVelha(char matriz[3][3]){
	cout << "+---+---+---+" << endl;
	for(int l=1; l<3; l++){
		for(int c=1; c<3; c++){
			cout << "|  " << setw(1) << matriz[l][c];
		}
		cout << "|" << endl;
		cout << "+---+---+---+";
	}
}

void mudaJogador(char simb){
	if (simb =="X"){
		simb = "O";
	}else{
		simb = "X";
	}
}
