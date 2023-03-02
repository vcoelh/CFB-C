#include <iostream>
using namespace std;

int main (){

 int val; 


cout << "selecione uma transporte : \n";
cout <<" [1]= carro, [2]= moto,[3]= aviao,[4]= helicoptero\n";


 cin >> val;


    switch(val){


        case 1 :
        case 2 :  
            cout << " \ntransporte selecionada : terrestre \n";
                switch(val){

                        case 1 :
                            cout << "Carro selecionado\n";
                            break;

                        case 2 :
                            cout << "Moto selecionado\n";
                            break;
                }
            break;


        case 3: 
        case 4:
            cout << "transporte selecionado : aereo \n";
            
                switch(val){

                        case 3 :
                            cout << "aviao selecinado \n";
                            break;
                        
                        case 4 :
                            cout << "Helicoptero selecionado\n";
                            break;
                }
            break;

        default :
            cout << "Transporte selecionado invalido";
        


    }

    cout << "\nPrograma finalizado "; 

    return 0;
}