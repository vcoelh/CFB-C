#include <iostream>
using namespace std;
/*
int main(){

 char letra = 't';
 int num = 0;
 comeco:

 cout << "Digite um numero: ";
 cin >> num; 


    if (num >4 and num <7){

        cout <<"\n\n Valor aceito\n";
    }
    else{

        cout <<"\n\n Valor recusado\n";
    }

    cout << "deseja colocar outro numero ? [s/n] : ";
    cin >> letra;

        if (letra == 's' or letra=='S'){
            
            goto comeco;

        }
        
    return 0;
}

*/

int main(){

char c = 't';
int num = 12;


inicio:
cout << "digite um numero: ";
cin >> num;

    if (num !=1){

        cout << "\n\n Vou ao clube\n";
    }
    else {

        cout << "\n\n Vou a cinema\n";

    }

/*
    cout << "Deseja digitar outro numero ? [s/n]: ";
    cin >> c;

        if(c=='s' || c=='S'){

            goto inicio;

        }
*/
    return 0;
    }