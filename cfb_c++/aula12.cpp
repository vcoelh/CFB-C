#include <iostream>
#include <string>

using namespace std;

int main(){

    /*(expressão) ? valor 1 : valor 2


        int n1,n2,nota;
        string res;

        cout << "digite a primeira nota : ";
        cin >> n1;
        cout <<"digite a segunda nota : ";
        cin >>n2;
        nota = n1 +n2;

        // (nota >= 60) ? res = "Aprovado" : res = "Reprovado";  

        res = (nota >=60 )? "Aprovado": "Reprovado";

    cout << res;
    */


        int n1, x;

        x = 6;


        cout << "Digite um numero : ";
        cin >> n1;

        (n1>=5) ? x++: x--;

        cout << x;
        
    return 0;
}