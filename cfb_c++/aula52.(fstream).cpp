#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    
    fstream arquivo;
    char opc = 's';
    string nome, linha;
    arquivo.open("teste.txt",ios::out| ios::app); // app significa apendice, ele permite add mais nomes sem apagar os anteriores 

        while((opc=='s') or (opc=='S')){
            cout <<"digite um nome: ";
            cin >> nome;
            arquivo << nome << "\n";
            cout << "digitar um novo nome? [s/n] ";
            cin >> opc;
            system("cls");

        }
    arquivo.close();
    
    
    arquivo.open("teste.txt",ios::in);

    cout << "nomes digitados: "<< "\n";

    if(arquivo.is_open()){

        while(getline(arquivo,linha)){
            cout << linha << "\n";
        }
        arquivo.close();

    }else{
        cout << "nao foi possivel abrir o arquivo\n";
    }    
    return 0;

}