

#include <iostream>
#include <string>

using namespace std;

struct Carro{

    string nome;
    string cor;
    int pot;
    int velMax,vel;

    void insere(string stnome, string stcor, int stpot, int stvelmax){

        nome = stnome;
        cor = stcor;
        pot = stpot;
        velMax = stvelmax;
        vel=0;
    }

    void mostra(){

    cout << "nome do carro: "<< nome << "\n\n"; 
    cout << "cor do carro: " << cor << "\n"; 
    cout << "velocidade:" << velMax << "\n"; 
    cout  <<"Potencia: " << pot << "\n\n"; 
    cout  <<"velocidade atual: " << vel << "\n\n"; 

    }


    void mudaVel(int mv){

        vel = mv;
        if(vel > velMax){
            vel = velMax;
        }

        if(vel<0){

            vel =0;

        }

    }

};

int main(){

    Carro car1,car2, car3, car4;

    car1.insere("tornado","vermelho", 450,350);
    car2.insere("luxo", "preto", 250,260);


    car1.mudaVel(150);
    car1.mostra();



cout << "nome do carro: "<< car1.nome << "\n"; 
cout << "cor do carro: " << car1.cor << "\n"; 
cout << "velocidade:" << car1.velMax << "\n"; 
cout  <<"Potencia: " << car1.pot << "\n"; 
    return 0;
}