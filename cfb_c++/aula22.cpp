#include <iostream>
using namespace std;

void texto();
void soma(int x, int y);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(){
 int res;
 string trans[4]={"\ncarro","moto","barco", "aviao"};
 res = soma2(10,5);
 cout << res;  
 tr(trans);
    return 0;
}

void texto(){
    cout << "VICTOR\n"; 
}

void soma(int x, int y){
    cout << "A soma dos valores e " << x + y << "\n";
}


int soma2(int n1, int n2){
   int n3 = n1 + n2;
    return n3;
}

void tr(string tra[4]){
    for(int i=0; i<4; i++){

        cout << tra[i]<< "\n";

    }
}