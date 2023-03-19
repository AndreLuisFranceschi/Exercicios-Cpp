#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	char gab[5], resp[5];
	string aluno[3];
	int soma=0;
	
	cout << "Cadastro de Gabarito" << endl;
	cout << "----------------------" << endl;
		
	for(int i=0; i<5; i++){
		cout << "Questao " << i+1 << ": ";
		cin >> gab[i];
	}
	
	system("cls");
	
	for(int i=0; i<3; i++){
		cout << "ALUNO " << i+1 << endl;
		cout << "Nome: ";
		cin >> aluno[i];
		cout << "RESPOSTAS" << endl;
		cout << "-----------" << endl;
		for(int j=0; j<5; j++){
			cout << "Questao " << j+1 << ": ";
			cin >> resp[j];
			if(resp[j]==gab[j]){
				soma = soma+2;
			}
		}
		cout << "Nota do aluno " << aluno[i] << ": " << soma << endl << endl;
		soma=0;
	}
}
