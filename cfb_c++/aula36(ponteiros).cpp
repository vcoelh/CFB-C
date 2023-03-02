// ponteiros armazenam endereços de outras variáveis 

#include <iostream>
#include <string>
using namespace std;

int main(){


string veiculo = "Carro";

string *pv;

pv= &veiculo; // ponteiro pv recebe o end da variavel veiculo

cout << pv <<"\n" <<&veiculo << "\n";


*pv="moto"; // no endereço apontato por pv add o valor "moto"


cout << veiculo << "\n" << *pv;
    return 0;
} 