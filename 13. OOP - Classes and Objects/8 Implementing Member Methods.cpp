//Implementing member methods 1

#include<iostream>
#include<string.h>
using namespace std;

class Account{
private:
    //attributes 
    string name;
    double balance;

public:
    //methods 
    //declared inline
    void set_balance(double bal){ balance = bal;}
    double get_balance() {return balance;}

    //methods will be declared outside the class declaration
    void set_name(string n);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n){           // :: use
    name = n;
}

string Account::get_name(){
    return name;
}

bool Account::deposit(double amount){
    //if verify amount
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if(balance-amount >= 0){
        balance -= amount;
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Account sidhu_account;
    sidhu_account.set_name("Sidhu's account");
    sidhu_account.set_balance(1000.0);

    if(sidhu_account.deposit(200))
        cout << "Deposit Ok" << endl;
    else
        cout << "Deposit not allowed" << endl;

    if(sidhu_account.withdraw(500))
        cout << "Withdraw Ok" << endl;
    else
        cout << "Not sufficient funds" << endl;
    
    if(sidhu_account.withdraw(1500))
        cout << "Withdraw Ok" << endl;
    else
        cout << "Not sufficient funds" << endl;
        
    return 0;
}