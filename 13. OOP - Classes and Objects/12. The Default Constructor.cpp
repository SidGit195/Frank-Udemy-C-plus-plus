// Default Constructor

// Does not expect any arguments
// Also called the no-args constructor

// If you write no constructors at all for a class
// C++ will generate a Default Constructor that does nothing.

// Called when you instantiate a new object with no arguments.

// Once we define a constructor for our class C++ will now not generate the no args default constructor automatically.


//Default constructor
#include<iostream>
#include<iostream>
using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;

    public:
    void setname(string n){
        name = n;
    }

    string getname(){
        return name;
    }
};

int main(){
    Player frank;       //since we do not declare a constructor, so c++ will automatically declare a default constructor
                        //that will allow to create an object without any argument bcz default constructor does not have any argument.
    frank.setname("sidhu");
    cout << frank.getname() << endl;

    return 0;
}


//let assume that i declare a constructor with 3 parameters
//And now i declare a object ex:- Player frank      //error will ocurr bcz we did not pass argument along object creation so
                                                    //constructor did not allow the creation of object without any argument.
                                                    