#include <iostream>
#include <fstream>

using namespace std;

int main(){

ofstream arquivo;

    arquivo.open("test2.txt");

    arquivo << "tatu é um belo mamifero \n nao acredita?\n ";
    arquivo << "mas eu discordo!";

arquivo.close();
    return 0;
}
