/*
An lvalue (locator value) represents an object that occupies some identifiable location in memory 
(i.e. has an address). rvalues are defined by exclusion. 
Every expression is either an lvalue or an rvalue, so, 
an rvalue is an expression that does not represent an object occupying some identifiable location in memory.

The copy constructors in C++ work with the l-value references and copy semantics
(copy semantics means copying the actual data of the object to another object rather than making another object to point the already existing object in the heap). 
While move constructors work on the r-value references and move semantics
(move semantics involves pointing to the already existing object in the memory).
*/

#include<iostream>
#include<vector>
using namespace std;

class Move{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
//Constructor
    Move(int d);
//Copy Constructor
    Move(const Move &source);
//Move Constructor
    //Move(Move &&source) noexcept;
//Destructor
    ~Move();
};

Move::Move(int d){
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}

//Copy Constructor
Move::Move(const Move &source)
    : Move{*source.data}{
        cout << "Copy constructor - deep copy for: " << *data << endl;
    }

//Move Constructor
// Move::Move(Move &&source) noexcept
//     : data {source.data}{
//         source.data = nullptr;
//         cout << "Move constructor - moving resource: " << *data << endl;
//     }

Move::~Move(){
    if(data != nullptr)
        cout << "Destructor freeing data for: " << *data << endl;
    else
        cout << "Destructor freeing data for nullptr" << endl;
    delete data;
}

int main(){
    vector<Move> vec;
    vec.push_back(Move{10});

/*
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    vec.push_back(Move{70});
    vec.push_back(Move{80});
*/

    return 0;
}