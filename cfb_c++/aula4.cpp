#include <iostream>

using namespace std;

int main(){

// TIPO NOME;
// TIPO NOME = VALOR;

int vidas = 0; // 10,25, -4
char letra = 'b'; // "a, b" // tem o tamanho de um byte
char letras[20]; // pode por até 20 caracteres
double decimal= 5.2; // 2.25, 1.73
float decimal2 = 5.2; // 3.4f; // precisão menor do que a do double
bool vivo = true;  // true (1) or false (0)
string nome= "Victor"; // "Victor Francisco"


cout << "Digite o numero de vidas: ";
cin >> vidas;
cout << "Digite um letra: ";
cin >> letra;
cout << "Dinheiro: ";
cin >> decimal;
cout << "Digite seu nome: ";
cin >> nome;
cout << "Digite um numero float: ";
cin >> decimal2;

 vidas = 100;



cout << vidas << "\n";
cout << letra << "\n";
cout << decimal << "\n";
cout << decimal2 << "\n";
cout << vivo << "\n";
cout << nome << "\n";


return 0;
}

/*
estrutura 
de
cometário 
grande
*/


