#include<iostream>
#include "Mystring.h"
using namespace std;

int main(){
    Mystring empty;                 //no-args constructor
    Mystring sidhu("sidhu");        //overloaded constructor
    Mystring Ramansa{sidhu};        //copy constructor

    empty.display();
    sidhu.display();
    Ramansa.display();
    
    return 0;
}