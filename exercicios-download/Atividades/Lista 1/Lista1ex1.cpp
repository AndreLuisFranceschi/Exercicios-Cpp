#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Nome: Andr� Lu�s Franceschi" << endl;
	cout << "Local de nascimento: Sert�o - RS" << endl;
	cout << "Endere�o de e-mail: defranceschi007@gmail.com" << endl;
	
	return 0;
}
