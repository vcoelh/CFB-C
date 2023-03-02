#include <iostream>
#include <string>

using namespace std;

struct Carro{

    string nome;
    string cor;
    int pot;
    int velMax;


};

int main(){

    Carro car1, car2;

    car1.nome = "tornado";
    car1.cor = "vermelho";
    car1.pot = 450;
    car1.velMax = 350;

    car2.nome = "luxo";
    car2.cor = "preto";
    car2.pot = 250;
    car2.velMax = 260;

cout << "nome do carro: "<< car2.nome << "\n"; 
cout << "cor do carro: " << car2.cor << "\n"; 
cout << "velocidade:" << car2.velMax << "\n"; 
cout  <<"Potencia: " << car2.pot << "\n"; 
    return 0;
}