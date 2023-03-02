#include <iostream>
#include <stdio.h> // para utilizar a função gets
#include <stdlib.h> // para utilizar a função malloc -memory allocation-
using namespace std;

int main(){

    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1); // a função malloc() retorna void logo precisa-se colocar um type cast para conveter void para um char *

    gets(vnome); // pega tudo que for digitado 

    cout << vnome;
 
   return 0;
}