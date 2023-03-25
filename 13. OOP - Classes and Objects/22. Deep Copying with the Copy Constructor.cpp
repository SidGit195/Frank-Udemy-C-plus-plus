#include<iostream>
using namespace std;

class Deep{
private:
    int *data;
public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
// Constructor
    Deep(int d);
// Copy Constructor
    Deep(const Deep &source);
//Destructor
    ~Deep();
};

Deep::Deep(int d){
    data = new int;
    *data = d;
}

Deep::Deep(const Deep &source)                         
    : Deep(*source.data){                                       
        cout << "Copy constructor - Deep copy" << endl;
    }
/* or same
Deep::Deep(const Deep &source){
    data = new int;         //allocate storage
    *data = *source;
    cout << "Copy constructor - Deep copy" << endl;
}
*/

// Deep Copy - create new storage and copy values.

Deep::~Deep(){
    delete data;
    cout << "Destructor freeing data" << endl;
}

void Display_Deep(Deep s){
    cout << s.get_data_value() << endl;
}

//When s goes out of scope the destructor is called and releases data.
//No problem: since the storage being releases is unique to s.

int main(){
    Deep obj1 {100};
    Display_Deep(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);

    return 0;
}