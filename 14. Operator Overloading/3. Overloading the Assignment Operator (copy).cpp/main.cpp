// Overloading Copy Constructor
#include<iostream>
#include<vector>
#include "Mystring.h"
using namespace std;

int main(){
    Mystring a{"Hello"};        //Overloaded Constructor
    Mystring b;                 //no-args constructor
    b = a;                      //Copy assigment constructor
                                //b.operator = (a)
    b = "This is a test";       //b.operator = ("This is a test");

    /*
    
    Mystring empty;             //no-args constructor
    Mystring larry ("Larry");   //overloaded constructor
    Mystring stooge {larry};    //copy constructor
    Mystring stooges;           //no-args constructor

    empty = stooge;             //copy assignment operator

    empty.display();            //Larry : 5
    larry.display();            //Larry : 5
    stooge.display();           //Larry : 5
    empty.display();           //Larry : 5
    
    */
    return 0;
}