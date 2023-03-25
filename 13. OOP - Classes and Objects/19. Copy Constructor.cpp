#include<iostream>
using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
string get_name() { return name; }
int get_heath() { return health; }
int get_xp() { return xp; }
//Constructor with default arguments
    Player(string name_val = "none", int health_val=0, int xp_val=0);
//Copy Constructor
    Player(const Player &source);
//Destructor
    ~Player(){cout << "Destructor called for: " << name << endl;}
};

//Better Way 
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "3 arg. constructor is called " + name << endl;
    }

Player::Player(const Player &source)
    // :name(source.name), health(source.health), xp(source.xp){                            //Both notation are different
        :Player{source.name, source.health, source.xp}{                                     //Output change ho jayega, dono try karke dekh lo
        cout << "Copy constuctor - made copy of: " << source.name << endl;
    }

void display_player(Player p){
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_heath() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main(){
    Player sidhu;
    Player hero{"sidhu", 100, 20};
    
    Player honda{hero};         //Copy Constructor
    return 0;
} 


//Default Copy Constructors: When a copy constructor is not defined, 
//the C++ compiler automatically supplies with its self-generated constructor 
//that copies the values of the object to the new object.
