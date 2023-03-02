#include <iostream>

using namespace std;

int main(){


    int *p;
    int vetor[10];

    p = &vetor[0]; // same as p= vetor;

    *p=10;   // same as vetir[0] = 10; 
    cout << "\n" << vetor[0] << "\n";

    *(p++); // same as p= vetor;

    *p=20;

    cout<<"\n"<< vetor[1] << "\n\n";

    *(p++);

    *p=30;

    cout << "\n"<< vetor[2] << "\n\n f";






    return 0;
}