#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

void montarMenu();

int main(){
	
	int opc, matriz[4][4];
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout << "Digite o valor para a matriz[" << i << "][" << j << "]: ";
			cin >> matriz[i][j];
		}
	}
	
	system("cls");
	
	do{
		montarMenu();
		cout << "Opcao: ";
		cin >> opc;
		cout << endl;
		
		switch(opc){
			case 1:
				system("cls");
				for(int i=0; i<4; i++){
					for(int j=0; j<4; j++){
						cout << setw(4) << matriz[i][j];
					}
					cout << endl;
				}
			break;
			case 2:
				system("cls");
				for(int i=0; i<4; i++){
					for(int j=0; j<4; j++){
						if(i==j){
							cout << setw(4) << matriz[i][j];
						} else{
							cout << setw(4) << "  ";
						}
					}
					cout << endl;
				}
			break;
			case 3:
				system("cls");
				for(int i=0; i<4; i++){
					for(int j=0; j<4; j++){
						if(i<j){
							cout << setw(4) << matriz[i][j];
						}else{
							cout << setw(4) << "  ";
						}
					}
					cout << endl;
				}
			break;
			case 4:
				system("cls");
				for(int i=0; i<4; i++){
					for(int j=0; j<4; j++){
						if(i>j){
							cout << setw(4) << matriz[i][j];
						}else{
							cout << setw(4) << "  ";
						}
					}
					cout << endl;
				}
			break;
			case 5:
				cout << "Programa encerrado.";
			break;
		}
	}while(opc>0 && opc<5);
	
}

void montarMenu(){
	cout << endl;
	cout << "Menu de opcoes:" << endl;
	cout << "======================" << endl;
	cout << "1. Mostrar a matriz" << endl;
	cout << "2. Diagonal principal" << endl;
	cout << "3. Triangulo superior" << endl;
	cout << "4. Triangulo inferior" << endl;
	cout << "5. Sair" << endl;
	cout << "======================" << endl;
}
