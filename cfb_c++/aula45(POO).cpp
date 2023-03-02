#include <iostream>
#include "Aviao.h"
using namespace std;

int main(){

Aviao *av1=new Aviao(3);
Aviao *av2 =new Aviao(1);
Aviao *av3 =new Aviao(2);

cout << av1->Imprimir(); 
cout << av2->Imprimir();
cout << av3 ->Imprimir();
}