#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int menu();
void cadastrar_cliente();
void cadastrar_produto();

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao = menu();
	
	switch(opcao){
		case 1:
			cadastrar_cliente();
			break;
		default:
			cout << "\nOp��o inv�lida!" << endl;
	}
	
	return 0;
}

int menu(){
	do{
		system("cls");
		cout << "==== MENU ====\n\n";
		cout << "1. Cadastrar cliente\n";
		cout << "2. Pesquisar cliente\n";
	
		int opc;
		cout << "Selecionar op��o: ";
		cin >> opc;
		
		if(opc < 1 || opc > 3)
			cout << "Op��o inv�lida, digite novamente:" << endl;
	}while(opc < 1 || opc > 3);
	
	return opc;
}

void cadastrar_cliente(){
	string nome_completo;
	unsigned long cpf;
	unsigned long telefone;
	int data_nascimento;
	string endereco;
	
	cout << "Nome completo: ";
	cin >> nome_completo;
	
	cout << "CPF: ";
	cin >> cpf;
	
	cout << "Telefone: ";
	cin >> telefone;
	
	cout << "Data de nascimento: ";
	cin >> data_nascimento;
	
	cout << "Endere�o: ";
	cin >> endereco;
}

void cadastrar_produto(){
	string nome_produto;
	string descricao;
	float valor_unitario;
	
	cout << "Nome do produto: ";
	cin >> nome_produto;
	
	cout << "Descri��o: ";
	cin >> descricao;
	
	cout << "Valor unit�rio: ";
	cin >> nome_produto;
}
