/*

#Default Copy Constructor

* memberwise copy
* each data member is copied from the source object
* The pointer is copied not what it points to (shallow copy)
* Problem: when we release the storage in the destructor, the other object still refers to the released storage!
that leads to error (ek baar memory free kar de phir bhi usse point kar raha hai vo)


# Shallow Vs Deep Constructor
*/

#include<iostream>
using namespace std;

class Shallow{
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
// Constructor
    Shallow(int d);
// Copy Constructor
    Shallow(const Shallow &source);
//Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)                         //Shallow Copy - only the pointer is copied - not what is pointing to!
    : data(source.data){                                        //Source & newly created object Both point to the SAME data area!
        cout << "Copy constructor - shallow copy" << endl;
    }

Shallow::~Shallow(){
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s){
    cout << s.get_data_value() << endl;
}

int main(){
    Shallow obj1 {100};
    display_shallow(obj1);

    Shallow obj2 {obj1};
    obj2.set_data_value(1000);

    return 0;
}