

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

    cout << "\n" << "nome do carro: "<< nome << "\n"; 
    cout << "cor do carro: " << cor << "\n"; 
    cout << "velocidade:" << velMax << "\n"; 
    cout  <<"Potencia: " << pot << "\n"; 
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

    Carro *carros = new Carro[5]; 

    Carro car1,car2, car3, car4, car5;


    carros[0] = car1, carros[1]=car2, carros[2]=car3, carros[3]=car4,carros[4]=car5;
    
    carros[0].insere("tornado", "vermelho",450,350);
    carros[1].insere("luxo","preto",250,260);
    carros[2].insere("familia","prata",150,180);
    carros[3].insere("trabalho","branco",80,120);
    carros[4].insere("padrao","cinza",100,150);

  for(int i =0;i<5;i++){

    carros[i].mostra();

  }   

    return 0;
}