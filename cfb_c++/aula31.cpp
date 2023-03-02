#include <iostream>
#include <list>
using namespace std;

int main(){

list <int> aula;
int tam;
list <int>:: iterator it;


aula.push_front(1);
aula.push_front(4);
aula.push_front(5);
aula.push_front(8);
aula.push_front(7);
aula.push_front(9);
aula.push_front(3);


cout << "Tamanho da lista: " << aula.size() << "\n";

tam = aula.size();
aula.sort();
aula.reverse();

for(int i =0; i<tam;i++){
    cout << aula.front() << "\n";
    aula.pop_front();
}

    return 0;
}