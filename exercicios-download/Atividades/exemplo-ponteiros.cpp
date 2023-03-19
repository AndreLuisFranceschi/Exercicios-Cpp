#include <iostream>

using namespace std;

void muda_valor(int a){
    a=20;
}

void muda_valor_2(int& a){
    a=20;
}

int main(){
    int x=30;
    muda_valor_2(x);
    cout << x <<endl;

}
