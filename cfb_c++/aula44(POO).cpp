#include <iostream>
#include <string>
using namespace std;

class Aviao{

public:

    int vel=0; // vel é uma propriedade/parametro
    int velMax;
    string tipo;
    void ini(int tp); // prototipando um método

private:    

};


//  criando e declarando o método

void Aviao::ini(int tp){ //  1 =jato,2= monomotor,3=planador

if(tp==1){
    this->velMax =800;
    this->tipo="jato";
}
else if(tp==2){
    this->velMax=350;
    this->tipo="monomotor";
}
else if(tp==3){
    this->velMax = 180;
    this->tipo="planador";
}
    


}


int main(){

 Aviao *av1=new Aviao(); // av1 é um objeto que tem todas aquelas propriedades
 Aviao *av2=new Aviao();

av1->ini(3);
av2->ini(2);

cout << av1->velMax<< endl;
cout << av2->velMax;


    return 0;
}