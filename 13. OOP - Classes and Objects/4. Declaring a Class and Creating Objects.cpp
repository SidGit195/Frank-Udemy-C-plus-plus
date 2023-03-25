//Declare classes and objects
#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class Player{               //class name should be in upper case (sugestion)
    //attribute
    string name;
    int health;
    int xp;

    //methods
    void talk(string);
    bool is_dead();
};

class Account{
    //attribute
    string name;
    double balance;

    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main(){
    Account sidhu_account;
    Account botre_account;
    
    Player sidhu;
    Player hero;

    Player players[] {sidhu, hero};

    vector<Player> player_vec {sidhu};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;
    return 0;
}