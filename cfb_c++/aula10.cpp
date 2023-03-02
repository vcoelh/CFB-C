#include <iostream>
using namespace std;


int main(){


    int n1 = 0, n2 = 0, z= 0;
    char opc;

    inicio:
    
    cout << "Digite a primeria nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2 ;
    z = n1 + n2;


             if ( z >=60){

                cout <<"\nAluno aprovado !\n";
        }


        else if (z >=40 and z <= 59){

            cout <<"Aluno em recuperaçao !";

        }

        else{

            cout << "\nAluno reprovado  !\n";
        }

        
        cout << "\n digitar outras notas ? [s/n]: ";

        cin >> opc;

            if (opc == 's' or opc == 'S'){

                goto inicio;

            }





    return 0;
}