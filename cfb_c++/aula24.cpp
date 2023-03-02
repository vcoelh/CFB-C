#include <iostream>
#include <string>
using namespace std;

void imp(string txt = "VICTOR\n");

int main(){

    imp();

    return 0;
}

void imp(string txt){

    cout << "\n" << txt << "\n";   

}