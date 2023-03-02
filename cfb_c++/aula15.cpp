#include <iostream>
using namespace std;

int main(){

    int count;
    count = 0;

    while (count <1000){

      cout << count << "\n";

        if (count  == 500){

            break;
        }
     count ++;
    }        

    return 0;
}