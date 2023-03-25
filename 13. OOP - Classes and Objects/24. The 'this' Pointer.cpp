/*
# this pointer

*this is a reserved keyword
*contains the address of the object - so it's a pointer to the object
*can only be used in class scope
*all member access is done via the this pointer

*Can be used by the programmer
    *To access data member and methods
    *To determine if two objects are the same(more in the next section)
    *Can be deferenced (*this) to yield the current object


ex:-
    void Account::set_balance(double balance){
        this->balance = balance;        // Unambiguous
    }
*/