#include <iostream>
#include <fstream>

using namespace std;

int main(){
/*
ofstream arquivoS;

    arquivoS.open("tatu.txt");

    arquivoS << "tatu é um belo mamifero \n nao acredita?\n ";
    arquivoS << "mas eu discordo!";

arquivoS.close();
*/

    ifstream arquivoE;
    string linha; // vai armazenar a linha lida
    arquivoE.open("teste.txt");

    if(arquivoE.is_open()){
       
        while(getline(arquivoE,linha)){
            cout << linha << "\n";
     }
     arquivoE.close();
    }
    else{
        cout << "nao foi possivel abrir o arquivo \n";
    }

    return 0;
}
