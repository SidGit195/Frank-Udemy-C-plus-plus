#include<cstring>
#include<iostream>
#include "Mystring.h"
using namespace std;

// No-args constructor
Mystring::Mystring()
    : str{nullptr}{
        str = new char[1];
        *str = '\0';
}

//Overloaded Constructor
Mystring::Mystring(const char *s)
    : str{nullptr}{
        if(s==nullptr)
            str = new char[1];
            *str = '\0';
    }else{
        str = new char[strlen(s)]
    }