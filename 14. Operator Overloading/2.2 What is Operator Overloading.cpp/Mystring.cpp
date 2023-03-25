#include<cstring>
#include<iostream>
#include "Mystring.h"

// NO-args constructor
Mystring::Mystring(){
    : str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr}{
        if(s==nullptr){
            str = new char[1];
            *str = '\0';
        }
        else{
            str = new char[std::strlen(s)+1];
            std::strcpy(str, s);
        }
}

// Copy Constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}{
        str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
}

//Destructor
Mystring::~Mystring(){
    delete str[];
}

//Display Method
void Mystring::display() const{
    std::cout << str << " : " << get_length() << std::endl;
}

//Length getter
int Mystring::get_length() const{ return std::strlen(str); }

//String getter
const char *Mystring::get_str() const{ return str; }



