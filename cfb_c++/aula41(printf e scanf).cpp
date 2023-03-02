#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
/*
float pi=M_PI;

   // printf("valor de pi: %07.1f", num);


    cout << "valor de PI: " << pi << "\n"; 
    
    cout.precision(-1); // volta precisao normal
    cout << "valor de PI: " << std::scientific << pi << "\n";
 */

int num = 30;

cout <<"valor de num: "<< setw(10) << setfill('1') << num << "\n";


return 0;   
}