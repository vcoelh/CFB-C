#include <iostream>
using namespace std;

int x,k;
int fat(int x)

int main(){

int x,k;

cout << "Digite um numero : ";
cin >> x;
cout << "O valor fatorial de " << x << " e "<< fat(x);

    return 0;
}

int fat(x){
    return x*fatorial(x-1);
}