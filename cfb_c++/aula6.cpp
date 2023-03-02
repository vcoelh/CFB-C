#include <iostream>
using namespace std;

 int n1,n2; // variaveis globais // 

int main(){

 // Operadores Matematicos: + - / * % ()
   int n3, n4; // variaveis locais // escopos de utilização diferentes

 int res, res2;


 n1 = 11;
 n2 = 3;
 n3 = 5;
 n4= 2;

 res = n1 / n2 ;
 res2 = n1%n2;
 cout <<"A divisao : " << res << "\n\n";
cout << "  o resto : " << res << "\n\n";

    return 0;
}
