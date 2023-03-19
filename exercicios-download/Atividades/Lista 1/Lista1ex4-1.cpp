#include <iostream>

using namespace std;

int funcao(int *dias_restantes, int periodo){
	int resultado = 0;		
	if(*dias_restantes >= periodo){
		resultado = *dias_restantes / periodo;
		*dias_restantes = *dias_restantes % periodo;
	}
	return resultado;
}

int main(){
	
	int total_dias, anos, meses, semanas, dias_restantes;
	total_dias = anos = meses = semanas = dias_restantes = 0;
	
	cout << "Informe o total de dias: ";
	cin >> total_dias;
	
	dias_restantes = total_dias;
	
	cout << "\nTotal de dias: " << dias_restantes;
	cout << "\nAnos: " << funcao(&dias_restantes, 365);
	cout << "\nMeses: " << funcao(&dias_restantes, 30);
	cout << "\nSemanas: " << funcao(&dias_restantes, 7);
	cout << "\nDias restantes: " << dias_restantes;
	
	return 0;
}
