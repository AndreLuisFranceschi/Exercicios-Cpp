#include <iostream>

using namespace std;


double funcao(float x, float y){
	return (x*2+x/5-x*(y*y))/4.5;
}

int main(){
	
	cout << funcao(4, -1);
	
	return 0;
}
