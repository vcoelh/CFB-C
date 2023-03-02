#include <iostream>
#include <stdio.h>
using namespace std;


int main(){

    int num1=1;
    char nome[10];

    printf("digite seu nome: ");
    scanf("%s",&nome);
    printf("digite a sua data de nascimento: ");
    scanf("%i",&num1);
    printf("seu nome é %s e sua data de nascimento é %i",nome, num1);
    return 0;
}



/*
d,i -> int
x,X -> hexadecimal A B C 
u  -> inteiro sem sinal 
s -> string, char*
f -> double
p -> ponteirosf
*/