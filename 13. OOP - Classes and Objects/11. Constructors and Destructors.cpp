//Constructors:-
//1) Special member method
//2) Invoked during object creation
//3) Useful for initialization
//4) Same name as the class
//5) ****No return type is specified
//6) Can be overloaded

//Destructors:-
//1)Special member method
//2)Same name as the class proceeded with a tilde(~)
//3)Invoked automatically when an object is destroyed
//4)No return type and no parameters(****)
//5)Only 1 destructor is allowed per class - can not be overloaded!
//6)Useful to release memory and other resources

//****If we no provide constructors or destructors, C++ will automatically provide a default constructor.

#include<iostream>
using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_val){
        name = name_val;
    }
    
    Player(){
        cout << "No args constructor called" << endl;
    }

    Player(string name){
        cout << "String arg. constructor called" << endl;
    }

    Player(string name, int health, int xp){ 
        cout << "Three arg. constructor is called" << endl;
    }

    ~Player(){
        cout << "Destructor called for " << name << endl;
    }
};

int main(){
    {
        Player slayer;
        slayer.set_name ("Slayer");
    }
    // ^ as the compiler go out of this curle brasis (out of escope), automatically destructor called
    // by using this we {}, we can manage our memory in a long programme. 
    // Destructor called in the reverse order in which they are created.

    {
        Player sidhu;
        sidhu.set_name("sidhu");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villan("Villan", 100, 12);
        villan.set_name("Villan");
    }

    Player *enemy = new Player;
    enemy->set_name("Enemy");

    Player *level_boss = new Player("Level Boss", 1000, 300);
    level_boss->set_name("Level Boss");

    delete enemy;
    delete level_boss;

    return 0;
}
