// Never return a pointer to a local variable.
// Big bug or difficult to find

#include<iostream>
using namespace std;

int *create_array(size_t size, int int_value = 0){      //****int_value default argument set as 0 here
    int *new_storage {nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i<size; ++i)
        *(new_storage + i) = int_value;
    return new_storage;        
}

void display(const int *const array, size_t size){
    for(size_t i{0}; i<size; ++i)
        cout << array[i] << " ";        //pointer ko array bna diya (value)
    cout << endl;
}

int main(){
    int *my_array {nullptr};
    size_t size;
    int int_value {};

    cout << "\nHow many integers would you like to allocate? ";
    cin >> size;
    cout << "what value would you like to initialized to";
    cin >> int_value;

    my_array = create_array(size, int_value);
    cout << "\n--------------------------------" << endl;

    display(my_array, size);

    delete [] my_array;
    return 0;
}