#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> num1; // poderia dizer o tamanho num(5)
    vector <int> num2;
    int tam1,i,tam2;

    num1.push_back(1); 
    num1.push_back(2);
    num1.push_back(3);
    num1.push_back(4);
    num1.push_back(8);
    num1.insert(num1.begin()+3,888);
    num1.insert(num1.end(),999);
    // num1.erase(num1.end()-1);

     // num[3] =3; posição 3 existe a 4 não

    num2.push_back(5);
    num2.push_back(6);
    num2.push_back(7);
    num2.push_back(8);
    num2.push_back(9);
    num2.insert(num2.begin(),777);
    num2.insert(num2.end(),666);


    // num1.swap(num2);


cout << "primeiro valor de num1: " << num1.front() << endl;
cout << "ultimo elemento: " << num1.back() << endl; 
cout << "valor do meio: " << num1.at(num1.size()/2) << endl;

    tam1= num1.size();
    tam2= num2.size();

    cout << "tamanho do vector: " << tam1 << endl;

    for(i=0; i<num1.size(); i++){
        cout << num1[i] << " ";

    }

    cout << endl;
 
    for(i=0; i < num2.size(); i++){
        cout << num2[i] << " ";
    }
   
    while(!num1.empty()){
        num1.pop_back();
    }

    num2.clear();

    cout << endl<< "novo tamanho de num1: " << num1.size() << endl; 
   
    return 0;

   



}