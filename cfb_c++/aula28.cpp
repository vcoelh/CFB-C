#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){

    stack <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");


    cout << "Tamanho da pilha : " << cartas.size() << "\n";


    cout << "Carta do topo : " << cartas.top() << "\n";
    
        for(int i =0; i<2; i++){
        cartas.pop();
        }
    
    
    cout << "Nova carta do topo : " << cartas.top() << "\n";
    

    return 0;
}

/*

pilha : 

o primeiro item a ser adicionado é o ultio a ser removido


*/