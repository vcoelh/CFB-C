#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

 fstream arquivo;
 string linha;
 char linha_b;
    return 0;

 arquivo.open("teste4.txt", fstream::in|fstream::app);

 if(arquivo.is_open()){
    arquivo << "ta aberto \n";
 }else{
    cout << "nao foi possivel abrir o arquivo ";
     }
    arquivo.close();
}